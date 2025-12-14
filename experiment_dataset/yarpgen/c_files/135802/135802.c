/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = -var_12;
                                arr_14 [12] [i_0] [i_2] [i_3] [i_4] [i_4] = ((((var_3 ? ((min(var_11, 8))) : (!2093883171))) + var_10));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_16 = ((((min(var_9, var_9))) ? (!var_12) : (~var_4)));
                                var_17 *= (((min(255, var_13))) / var_9);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_18 = ((!(var_3 + 31)));
                                arr_33 [i_7] = (~25);
                                var_19 = 37;
                                var_20 -= min(var_11, (+-246));
                                arr_34 [i_7] = (!var_10);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        {
                            var_21 = ((!(((!var_14) <= (min((-2147483647 - 1), var_12))))));
                            arr_42 [i_7] = (~((1569751402 ? 2034999857 : 242)));
                            var_22 -= min(27, (!244223771));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 3; i_14 < 18;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 18;i_15 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        {
                            var_23 = (((~var_12) >= 156));
                            arr_55 [2] [i_14] [15] [i_17] = ((((var_12 ? var_1 : var_9)) % 235));
                            var_24 = var_12;
                            var_25 = var_11;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_18 = 0; i_18 < 19;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 19;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 19;i_20 += 1)
                        {
                            {
                                arr_63 [i_20] [i_14] [i_18] [i_14] [i_14] = var_12;
                                var_26 = ((~(((203 > ((var_12 ? var_5 : var_9)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_21 = 0; i_21 < 14;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 14;i_22 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_23 = 1; i_23 < 12;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 14;i_24 += 1)
                    {
                        {
                            var_27 = ((((min(var_0, var_6)) != var_13)) ? (min(255, -var_2)) : (~var_13));
                            var_28 = (min(128, (((!((min(32, var_0))))))));
                            arr_74 [i_21] [i_21] = ((var_3 < var_5) ? (var_11 | var_2) : ((var_7 ? var_1 : var_10)));
                            var_29 = var_5;
                            arr_75 [i_24] [i_24] [i_21] [i_21] [i_22] [i_21] = (min(var_14, var_1));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 14;i_25 += 1)
                {
                    for (int i_26 = 1; i_26 < 12;i_26 += 1)
                    {
                        {
                            arr_80 [i_21] [i_22] [i_21] [i_21] [i_26] = (48 ? 1007657777 : -872576822);
                            var_30 += (-(var_6 > -var_12));
                            arr_81 [i_26] [6] [6] [i_21] [6] [i_21] &= (((((min((min(var_5, var_2)), 156)) + 2147483647)) << (((var_6 & 217) - 144))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 14;i_27 += 1)
                {
                    for (int i_28 = 1; i_28 < 11;i_28 += 1)
                    {
                        {
                            var_31 &= (var_1 & 126);
                            arr_87 [i_21] = ((~(((((-2003312466 ? var_13 : var_12))) ? var_14 : var_0))));
                            var_32 = ((var_1 < var_14) % var_8);
                            var_33 += (min(((~(!var_13))), var_0));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_29 = 0; i_29 < 18;i_29 += 1)
    {
        for (int i_30 = 0; i_30 < 18;i_30 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_31 = 1; i_31 < 17;i_31 += 1)
                {
                    for (int i_32 = 0; i_32 < 18;i_32 += 1)
                    {
                        for (int i_33 = 0; i_33 < 18;i_33 += 1)
                        {
                            {
                                var_34 -= (((((!var_3) != 213))) >> (!var_5));
                                var_35 *= ((((((var_11 & var_7) - ((var_2 ? var_13 : 144))))) ? var_2 : (min(var_7, var_9))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_34 = 3; i_34 < 15;i_34 += 1)
                {
                    for (int i_35 = 0; i_35 < 18;i_35 += 1)
                    {
                        {
                            var_36 = var_12;
                            arr_105 [i_29] [8] [i_29] [i_34 + 1] [12] [i_35] = (min((!1835393975), var_6));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_36 = 0; i_36 < 18;i_36 += 1)
                {
                    for (int i_37 = 0; i_37 < 18;i_37 += 1)
                    {
                        for (int i_38 = 0; i_38 < 18;i_38 += 1)
                        {
                            {
                                var_37 ^= ((!(((2147483520 - (min(133, 2147483647)))))));
                                var_38 = (var_12 * -199);
                                arr_115 [i_29] [i_30] [i_38] [i_29] [i_38] = ((~(min((~var_3), ((min(var_9, 114)))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_39 = 0; i_39 < 18;i_39 += 1)
                {
                    for (int i_40 = 3; i_40 < 16;i_40 += 1)
                    {
                        {
                            arr_123 [i_29] [i_29] = (min((min(var_8, var_12)), ((var_14 ? var_8 : var_6))));
                            var_39 = min((min(var_7, (min(1531041994, var_4)))), (((321814589 <= var_5) ? -var_0 : var_7)));
                            var_40 = (min(((-(528482304 == 15))), (min(var_7, (((var_3 + 2147483647) << (((var_8 + 1516656672) - 10))))))));
                            var_41 = (!15);
                            var_42 = (((((var_5 ? var_14 : var_2) | (!253)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
