/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [10] = min(40548, 321667526533855832);
                var_14 -= ((!((40548 || ((min(var_12, (arr_0 [i_1]))))))));
            }
        }
    }
    var_15 = (min(var_15, (((var_4 ? (54 + var_5) : (((((min(var_1, var_9))) * var_7))))))));

    /* vectorizable */
    for (int i_2 = 4; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_15 [i_3] = (-(61685 < var_8));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_20 [i_3] [i_3] = 40548;
                                var_16 = (arr_9 [i_2] [i_2]);
                                var_17 ^= ((var_5 - (arr_13 [i_4] [i_4] [i_4] [i_2 - 3])));
                            }
                        }
                    }
                    arr_21 [i_3] = (((arr_16 [i_4] [i_4]) ? (arr_16 [i_3 - 1] [i_4]) : (arr_12 [i_4])));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_27 [i_2] [i_2] [i_3] [i_4] [i_4] [i_7] [i_3] = ((var_11 ? (arr_23 [i_2] [i_2 - 4] [17] [i_2 - 4] [i_3]) : 71));
                                var_18 = ((-var_0 ? (-4369263172811902178 - 3126063986) : (((-(arr_10 [i_2] [i_2] [i_2 - 4]))))));
                            }
                        }
                    }
                }
            }
        }
        var_19 = ((13404320379047668780 ? 29 : ((~(arr_24 [i_2 - 4] [i_2 + 2] [i_2] [i_2 - 4])))));
        var_20 = ((-1442000118594373053 ? 29 : 18));
    }
    var_21 = (-(80 + 249));
    #pragma endscop
}
