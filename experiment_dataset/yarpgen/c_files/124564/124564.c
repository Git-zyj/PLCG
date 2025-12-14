/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_9;
    var_20 = (min(var_20, var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((6928670943712580923 ? var_10 : 6928670943712580947));

        for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_21 = (((~17549) / -2957313365020385073));
            arr_5 [i_0] = -5366960778666839547;
            var_22 |= var_3;
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_23 -= (var_7 >= var_8);
            arr_8 [i_0] = 89;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    {
                        var_24 = (max(var_24, (var_17 / 6928670943712580941)));

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_25 = ((-37 ? (((var_1 ? var_3 : var_8))) : 6928670943712580947));
                            arr_18 [i_0] [i_0] [0] = (17 % 2147483647);
                        }
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            arr_21 [i_6] [i_0] [12] [i_0] [i_0] = var_15;
                            var_26 = (max(var_26, 852527030));
                            var_27 = 7;
                        }
                        var_28 = (max(var_28, ((((var_11 & -76) & ((5366960778666839547 ? var_7 : 65535)))))));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_29 -= (1540318811 | 5399422871094240582);
            var_30 = (1 % var_12);
            var_31 = (-116 ? -8934756624106246143 : 65535);
        }
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_32 = ((((-var_14 && (var_7 / 4294967295)))));
        arr_28 [i_8] [i_8] = var_16;
    }
    #pragma endscop
}
