/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((-96 & var_14), var_9));
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_17 |= ((((((((4 != (arr_0 [i_0])))) % (112 != -113)))) ? 43263 : ((((43263 + (arr_2 [i_0] [i_0] [i_0]))) - ((18446744073709551615 ? 34 : 41003))))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    var_18 = (min(var_18, ((((255 | 112) | (arr_1 [1] [i_2 - 2]))))));
                    var_19 = 73;
                }
                var_20 = (max(var_20, (((((((arr_4 [i_0] [i_1 - 1]) ? (-127 - 1) : -38))) | (min((arr_3 [i_1 + 2] [i_0]), ((5152074929210047364 ? (arr_1 [i_1] [i_0]) : (arr_5 [i_0] [i_0] [i_0] [10]))))))))));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_21 |= ((1948318802 | (arr_3 [i_1 + 1] [i_1 - 3])));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_14 [i_0] [i_4] [i_3] [i_3] [i_4] [i_5] = (((arr_6 [i_3]) && (arr_8 [i_0] [i_1] [i_0] [6] [i_3] [i_5])));
                                var_22 = (max(var_22, ((((((arr_1 [i_0] [i_3]) & (arr_12 [i_5] [i_5] [i_3] [i_4] [i_3] [i_1 + 2] [i_0]))) << (((arr_10 [i_0] [i_1 + 2] [i_3] [i_4] [i_4]) - 199)))))));
                                var_23 = (min(var_23, (((-(((arr_1 [i_5] [i_4]) - 24532)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, (((((((((126 ? 114 : 41004))) ? var_4 : (var_6 | 112)))) ? ((max((-5 | 0), var_13))) : var_5)))));
    #pragma endscop
}
