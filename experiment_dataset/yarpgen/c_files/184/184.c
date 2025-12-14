/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_14 &= ((~(min(((5372561611457250276 ? (arr_4 [13] [i_1]) : (arr_0 [i_0]))), (((arr_4 [i_1] [i_0]) ? 849927080 : 776459182))))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_0] [i_2] [i_1 + 2] = 0;
                    var_15 = ((-(arr_5 [i_0] [i_1 - 2] [i_2])));
                    var_16 += var_5;
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        var_17 ^= (((arr_10 [i_0] [i_3 + 1] [i_4 + 1]) ? (arr_10 [12] [i_3 + 1] [i_4 + 1]) : (arr_10 [i_1 + 1] [i_1 + 1] [i_4])));
                        arr_13 [i_3] [i_3] [i_3] [i_4] [i_1] = (arr_12 [i_3]);
                    }
                    for (int i_5 = 4; i_5 < 17;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            arr_22 [i_6] [i_1] [16] |= (((arr_16 [i_1 - 2] [i_3 + 1] [i_5 - 1] [i_1]) ? ((~(arr_6 [i_0] [i_1 + 3] [i_6]))) : (arr_16 [i_1 + 3] [i_3 + 1] [i_5 - 3] [i_6])));
                            arr_23 [i_0] [i_3] [1] [i_0] [i_0] = var_1;
                            var_18 *= ((53 ? (arr_16 [i_0] [i_0] [i_0] [i_1]) : (arr_16 [i_0] [i_0] [i_0] [i_1])));
                            var_19 = (var_0 / var_3);
                        }
                        arr_24 [i_0] [i_0] [i_3] = (((arr_8 [i_0] [i_1 + 2] [i_3 - 1] [i_5]) ? (arr_17 [i_0] [i_1] [i_3 + 1] [i_3] [i_5]) : (arr_17 [i_0] [1] [i_3] [i_5] [i_5])));
                    }
                    for (int i_7 = 4; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_3] [i_3 - 1] [6] = 776459182;
                        var_20 = (((arr_21 [i_1] [i_1]) ? (arr_5 [i_1] [i_1] [i_1]) : (arr_21 [i_1] [i_1])));
                        var_21 = ((~(arr_14 [i_3] [i_1 - 2] [i_3 + 1] [i_3] [i_7 + 1])));
                    }
                    arr_29 [i_3] [i_1] [i_1] [i_3] = ((arr_0 [i_1 + 3]) ? (arr_5 [i_1] [i_3 + 1] [i_3]) : ((((!(arr_12 [i_3]))))));
                }
            }
        }
    }
    var_22 = (~var_9);
    #pragma endscop
}
