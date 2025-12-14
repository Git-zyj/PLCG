/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = 60;

                /* vectorizable */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    var_14 = 25;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_0] [i_1] [i_1] [i_0] [i_0] = (~227);
                                var_15 = 16826777151947447915;
                                arr_13 [i_1] [i_2 - 2] [i_0] = (0 >> 25);
                                var_16 = ((var_10 || (arr_2 [i_2 - 2])));
                            }
                        }
                    }
                    var_17 = ((arr_5 [i_2 + 1]) + (arr_5 [i_2 + 1]));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    arr_17 [i_0] [i_1] [i_0] [i_0] = (((arr_15 [i_1] [i_0 - 2] [i_5]) ? ((3319293993 / (((((arr_2 [i_1]) || 16247142563641901467)))))) : 688747913));
                    var_18 = (~42);
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((-3674683348394503889 ? 155 : 4805));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_19 = (((0 + var_8) ^ ((min(3, 233765830)))));
                                arr_25 [i_0] [i_7] [i_6] [i_1] [i_0] [i_7] [i_0] = (max(15821, 1174701736));
                                var_20 = (123 + 0);
                            }
                        }
                    }
                    arr_26 [i_0] [i_0] [i_0] = (max((((((~15821) + 2147483647)) >> (-8457 + 8462))), (42 % var_8)));
                }
                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_35 [4] [i_0] [i_9] [i_9] [4] = (max(((3472640064 | (~var_3))), (!49714)));
                                arr_36 [i_0] = ((((arr_4 [i_0 + 1] [i_11]) / -33)));
                            }
                        }
                    }
                    var_21 &= (-894098212 / (((2661049807 && 155) >> (17062 - 17062))));
                    var_22 = (max(var_22, 2136865073));
                }
            }
        }
    }
    var_23 = ((var_9 && (((-((1 ? var_2 : -1937975018)))))));
    var_24 = (1 && (!var_0));
    #pragma endscop
}
