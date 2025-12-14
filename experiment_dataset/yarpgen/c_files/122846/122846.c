/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (max(((+(min((arr_0 [i_0]), (arr_1 [i_0]))))), (max(var_0, (arr_1 [i_0])))));
        var_16 = (max(var_16, (arr_0 [i_0])));
        var_17 ^= var_6;
        var_18 ^= ((((var_3 % (arr_2 [i_0]))) - var_5));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2] [i_3] = (min((((-(((arr_9 [i_3] [i_2] [i_3]) ^ var_12))))), ((~((6062715823108455555 << (6062715823108455555 - 6062715823108455543)))))));
                    arr_13 [i_3] = (((!(arr_5 [i_1]))));
                    var_19 = (max(var_19, ((((arr_9 [i_1] [i_2] [i_3]) ^ (((arr_9 [i_1] [i_2] [i_1]) & var_7)))))));

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_20 = (max(var_20, ((((~(min((arr_8 [i_1] [i_1] [i_3]), var_11))))))));
                        arr_16 [i_1] [i_3] [i_1] &= var_13;
                        arr_17 [i_1] [i_3] = (max((arr_15 [i_1] [i_2] [i_3] [i_3]), (67108800 <= 12384028250601096082)));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_22 [2] [i_3] [i_3] [i_3] = (((arr_19 [i_1]) - (arr_6 [i_2])));
                        var_21 = (arr_11 [i_1] [i_1] [i_1] [i_1]);
                    }
                }
            }
        }
        var_22 ^= (arr_21 [i_1] [i_1]);
    }
    var_23 = (min(var_23, var_6));
    #pragma endscop
}
