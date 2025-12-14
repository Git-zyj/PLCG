/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((var_3 - -10034105781338039105) ? (((max(var_9, var_0)))) : (~var_4)))));
    var_19 = -var_13;
    var_20 = (min(var_20, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 &= (!(((64511 ? (arr_0 [i_1]) : 64535))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_22 = var_3;

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_23 += (0 ^ 3);
                                arr_14 [i_0] [i_0] [i_0] [i_0] [8] [i_1] = 252;
                            }
                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                var_24 = (999 && 1073741823);
                                arr_17 [i_0] [i_1] [i_5] = var_14;
                                var_25 = (arr_2 [i_5] [i_0] [i_0]);
                                var_26 = (min(var_26, ((((((arr_16 [i_5] [i_3] [i_1] [i_0]) ? (~var_15) : (arr_8 [i_2] [i_3 + 1] [i_5] [i_5] [i_5] [i_2])))) ? ((var_1 ? (~var_14) : var_11)) : (!var_15)))));
                            }
                            for (int i_6 = 0; i_6 < 12;i_6 += 1)
                            {
                                var_27 = (min(var_27, (((+((var_6 << (((((arr_8 [3] [i_1] [3] [i_3] [i_3] [i_6]) ? 1644075395 : 64554)) - 1644075382)))))))));
                                var_28 = ((-(((!(arr_10 [i_1] [i_3 - 2] [i_3 - 3] [i_3 - 2]))))));
                                arr_22 [i_1] [i_1] [i_2] [i_3 - 1] [i_3 - 1] = var_9;
                                var_29 -= ((((var_3 ? var_9 : var_4))));
                            }
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                {
                    var_30 += (((arr_8 [i_0] [i_0] [i_1] [i_7] [i_7] [i_1]) ? (((448 != (arr_9 [i_7] [i_1])))) : var_4));
                    arr_25 [i_0] [i_1] [i_7] |= ((9752 ? 65088 : -6));
                    var_31 = var_13;
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                {
                    arr_28 [i_1] = ((!(arr_26 [i_1] [i_1] [i_1] [i_1])));
                    var_32 = ((max(0, 1152921504606846975)));
                }
                arr_29 [i_1] = ((-(arr_19 [i_0] [i_1] [i_0] [i_1] [i_0])));
            }
        }
    }
    #pragma endscop
}
