/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((-(((4044283376 > ((8191 ? -29427 : var_6)))))));
    var_13 &= (1391209176 & (min(3460999962, -25037)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((min(var_0, (arr_1 [i_0] [i_1]))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_14 = (min(var_14, -11081));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((max((max((!5728693034127147323), ((-4618607265923227706 ? 5728693034127147323 : -5728693034127147340)))), -48)))));
                                var_16 -= (((65535 != 250) ? (((((var_8 ? 65515 : var_1))) ? (((0 ? 685128714 : var_10))) : 5728693034127147323)) : 0));
                                var_17 *= ((var_10 ? (((65510 & (var_1 < 2956055345)))) : (max(215, (4970415492793393167 << 2)))));
                                arr_15 [i_4] [i_0] [i_0] [i_1] [i_0] [i_1] [i_0] = var_9;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_18 &= -1653639746;
                        var_19 ^= (15395 | var_7);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_20 = (min(var_20, ((((15395 == -92) << (-5728693034127147335 + 94))))));

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_25 [i_7] [i_1] [i_2] [i_1] [i_0] = (i_1 % 2 == 0) ? ((((((arr_11 [i_1]) + 2147483647)) << (var_11 - 25)))) : ((((((arr_11 [i_1]) + 2147483647)) << (((var_11 - 25) - 1)))));
                            var_21 = (min(var_21, 5));
                        }
                    }
                    arr_26 [i_1] [i_1] [2] [i_1] = (min((max(-5728693034127147323, -92)), var_0));
                    arr_27 [i_0] [i_1] [i_1] = ((((7606630703840572893 ? 24815 : -6851406603705272882)) % -6851406603705272882));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    var_22 = (max(var_22, (-1564618737017636739 | -6793008241449227981)));
                    var_23 = (max(var_23, -5728693034127147328));
                }
            }
        }
    }
    var_24 = (min(var_24, var_11));
    #pragma endscop
}
