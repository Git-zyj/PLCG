/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_16 = (arr_1 [i_0 + 1]);
        arr_2 [i_0] = (max((((-47 + 2147483647) >> (((arr_1 [i_0 + 1]) + 49)))), (((arr_0 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : var_2))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_17 = 79931255;
        arr_6 [i_1] = (arr_5 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_19 [1] [i_4] = var_9;
                            var_18 *= (arr_7 [i_3] [i_3]);
                            arr_20 [i_2] [i_2] [i_2] [i_4] [i_2] = (min((arr_7 [i_2] [i_2]), ((((0 ? var_14 : 21192))))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_19 += (max((((var_2 + ((max((arr_22 [i_2] [i_2] [i_7]), -25159)))))), ((59595 ? 1846057583 : (arr_18 [i_3] [i_3] [i_3] [i_3] [i_3])))));
                            var_20 = ((((arr_23 [i_2] [i_3] [i_7] [i_8]) - (arr_23 [i_2] [i_3] [i_7] [2]))));
                        }
                    }
                }
            }
        }
        var_21 = (arr_17 [i_2]);
    }
    var_22 = (max(((max(633658900, var_2))), ((min(-378279069, var_1)))));
    #pragma endscop
}
