/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    var_15 = (max(var_15, var_9));
                    var_16 -= ((16 ? ((var_0 ? 108 : var_2)) : ((8506739588736636249 >> (5920 - 5870)))));
                    var_17 = var_6;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 = 107;
                                arr_14 [i_1] [i_1] [i_3] [i_1] [i_1] [i_1] [i_0] = -2097612199;
                                arr_15 [i_1] [i_1] [i_4] = ((-var_12 ? var_5 : ((var_2 ? var_0 : 62777))));
                            }
                        }
                    }
                    var_19 += (10613895218612179552 ^ 26545);
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_18 [5] [i_1] = (((38968 % 20459) ? var_12 : var_7));
                    var_20 += (((--3898954261109527769) ? var_8 : ((((~var_8) || var_3)))));
                    var_21 *= var_13;
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    arr_21 [i_1] [i_1] = -var_5;
                    var_22 = 45059;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_1] [4] [4] [12] [i_0] &= ((((min((~var_14), (max(18446744073709551593, var_4))))) ? (((min(38976, -5)))) : ((~(~9940004484972915373)))));
                                var_23 = var_5;
                            }
                        }
                    }
                }
                var_24 += (!17402);
                arr_29 [i_1] [i_1] = ((~(max((!23413), (min(var_2, 886003003755417742))))));
            }
        }
    }
    var_25 &= ((((min(23401, -3898954261109527788))) <= var_2));
    var_26 = (~15);
    #pragma endscop
}
