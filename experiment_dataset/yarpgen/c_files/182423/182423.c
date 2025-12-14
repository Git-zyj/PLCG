/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-2609063415367097475 ^ var_11);

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (min(var_4, var_2));
        arr_3 [i_0] = (var_3 != 5445251223086351747);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_14 -= (((min((max((arr_6 [i_1]), (-127 - 1))), (((arr_6 [i_1]) ? (arr_6 [i_1]) : var_12)))) > (arr_4 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 16;i_4 += 1)
                    {
                        var_15 *= (arr_8 [i_4 + 4] [i_4 + 4]);
                        arr_16 [19] [i_3] [18] [18] = ((((arr_13 [i_1] [i_3] [i_4]) | (arr_9 [i_1] [i_2]))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_24 [11] [i_2] [10] [i_6] [10] = (((((arr_10 [i_6] [i_2]) ? (arr_17 [i_1] [i_3] [i_5] [10]) : var_5)) ^ (((var_8 ? (arr_17 [i_2] [i_2] [i_5] [i_5]) : var_9)))));
                                var_16 += var_7;
                            }
                        }
                    }
                }
            }
        }
        arr_25 [i_1] [i_1] = (~(arr_18 [i_1] [i_1] [i_1] [i_1]));
        arr_26 [i_1] = (max(((((arr_18 [7] [i_1] [i_1] [i_1]) || (((var_1 ? -5445251223086351764 : 65535)))))), (((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1])))));
    }
    #pragma endscop
}
