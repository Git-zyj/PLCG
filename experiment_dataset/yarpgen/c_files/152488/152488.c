/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 = (((arr_0 [i_0]) ? -71916856549572608 : (-71916856549572622 && 3)));
        arr_2 [i_0] = 71916856549572625;
        var_22 = ((!(arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_23 |= ((0 ? (-1 | 71916856549572608) : ((var_6 ? var_17 : var_3))));
        var_24 = (min(var_24, var_6));
        var_25 = ((!(!-57)));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    {
                        var_26 = ((-var_2 ? (~var_8) : -var_5));
                        var_27 ^= (((arr_9 [i_3 + 1] [i_2] [i_1]) > (arr_9 [i_3 + 1] [i_2 + 2] [i_3])));

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_28 = (((1716024321190236731 > 4294967295) << 1));
                            var_29 = 0;
                            var_30 = (min(var_30, (!var_6)));
                        }
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            var_31 = (arr_10 [i_2 - 2] [i_3] [i_4 + 1]);
                            var_32 = (arr_6 [i_6] [i_2 - 2]);
                            var_33 = ((65535 ? (arr_12 [i_1]) : 0));
                        }
                    }
                }
            }
        }
        var_34 = (arr_3 [i_1]);
    }
    #pragma endscop
}
