/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_9);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_0] = (arr_2 [i_0 - 1] [i_1]);

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_16 = (((((arr_3 [i_0] [i_0 - 1] [i_0]) && (arr_0 [i_3]))) || (arr_8 [i_0 - 1] [i_0] [i_0] [i_0 - 1])));
                        arr_10 [i_0] [i_0] [i_0] [i_3] = (((((arr_3 [i_0] [i_0 + 1] [i_0]) * (arr_3 [i_0] [i_0 - 1] [i_0 - 1]))) == (1768858694 <= 10180770830727811971)));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_17 = ((((((((-(arr_8 [i_0] [i_0] [i_2] [i_4]))) ^ (arr_9 [i_0] [i_0 + 1]))) + 2147483647)) << (var_7 - 1)));
                        arr_15 [i_0] [i_1] [i_0] [i_4] = (max((((arr_9 [i_0 + 1] [i_0 + 1]) ? (arr_12 [i_0 + 1] [i_0] [i_0] [i_0 + 1]) : (arr_5 [i_0 + 1] [i_1] [i_2]))), (var_7 == var_8)));
                        arr_16 [i_0 + 1] [i_1] [i_0] [i_4] [i_4] = ((-(arr_1 [i_0])));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_1] [i_1] [i_0] [i_1] [i_2] = (-(arr_3 [i_0] [i_1] [i_1]));
                        arr_21 [i_0 + 1] [i_0 + 1] [i_2] [i_0] [i_0 + 1] = (arr_8 [i_0] [i_0] [i_2] [i_5]);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_18 = (var_0 ^ var_7);
                        var_19 = var_0;

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_27 [i_0] [i_7] [i_2] [i_2] [i_1] [i_1] [i_0] = (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0]);
                            arr_28 [i_0] = ((arr_26 [i_0] [i_1] [i_2] [i_6] [i_2] [i_1] [i_0]) * (arr_26 [i_0] [i_6] [i_6] [i_2] [i_1] [i_0 - 1] [i_0]));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            arr_32 [i_0 + 1] [i_0 + 1] [i_0] [i_6] [i_8] = ((var_7 - (arr_24 [i_0 - 1])));
                            arr_33 [i_0] [i_1] [i_2] [i_6] [i_0] = (var_4 | 301643518);
                        }
                    }
                    var_20 = (((arr_23 [i_0 - 1] [i_0] [i_2]) == ((8265973242981739645 ? (arr_23 [i_0 - 1] [i_0] [i_0 - 1]) : 58726))));
                    arr_34 [i_0] [i_1] [i_0] = (min(((((arr_1 [i_0]) % (arr_1 [i_0])))), (((arr_24 [i_0 - 1]) >> (((arr_4 [i_0] [i_1] [i_0] [i_1]) - 6425042763031413382))))));
                }
            }
        }
    }
    #pragma endscop
}
