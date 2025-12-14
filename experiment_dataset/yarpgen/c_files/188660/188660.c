/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (var_16 + var_7);
    var_20 -= var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_21 = ((8171534273475572695 == (-7307208838181597962 * 1)));
                            var_22 = (min(var_22, ((((118 ? -7966875893289407889 : 2988943663))))));
                            arr_10 [i_1] [i_2] [i_2] [i_1] [i_1] = var_14;
                            arr_11 [i_3] [i_1] [i_1] [i_0] = var_8;
                        }
                    }
                }

                for (int i_4 = 3; i_4 < 17;i_4 += 1)
                {
                    arr_14 [i_1] = ((var_11 ? ((var_16 ? var_8 : var_2)) : var_0));
                    var_23 = ((var_7 >> ((((var_3 >> (var_17 - 47472))) - 20437))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_24 = (max(var_5, var_0));
                                var_25 = (min(var_25, ((((var_11 + 2147483647) << ((((var_14 ? var_12 : var_3)) - 29921)))))));
                                arr_19 [i_6] [i_1] [i_1] [i_0] [i_6] [i_0] [i_0] = min((min(3318213409, (var_11 / 1603843205))), var_15);
                            }
                        }
                    }
                    arr_20 [i_0] [i_1] = var_14;
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 16;i_9 += 1)
                        {
                            {
                                arr_27 [i_0 - 2] [i_1] [i_7] [i_8] [i_9] = var_10;
                                var_26 = var_6;
                                arr_28 [i_0] [i_1] [i_7] [i_8] [i_9] |= (max(var_10, ((min(var_17, var_16)))));
                                var_27 = (((max(((var_15 << (var_2 - 57615))), var_13)) != var_1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                arr_35 [i_0] [i_7] [i_7] [i_10] [i_1] = var_12;
                                arr_36 [i_1] [i_7] [i_7] |= (((var_18 < var_18) * var_5));
                                arr_37 [17] [i_1] [i_7] [1] [i_11] = (((((min((max(154, var_17)), 118)))) >= ((var_6 >> (var_7 - 5949)))));
                                arr_38 [i_1] [i_1 - 2] [i_7] [i_10] [i_10 - 1] [i_7] = 1167687815;
                            }
                        }
                    }
                    arr_39 [i_0 + 3] [i_1] [i_1] [i_7] = 1172409670;
                    arr_40 [i_7] [i_1] = (var_11 > -5962547125985669195);
                }
            }
        }
    }
    #pragma endscop
}
