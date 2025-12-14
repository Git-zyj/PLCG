/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = 18446744073709551615;
                                var_19 = (((var_16 < var_7) ? (!var_3) : var_7));
                            }
                        }
                    }
                    var_20 += 1;

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_21 ^= ((var_16 ? -30334 : (arr_5 [i_6] [i_5 + 1] [i_2 + 3] [i_1 + 1])));
                            var_22 = (((arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]) ? ((((arr_15 [i_2] [i_2]) / (arr_4 [i_0] [i_0] [i_2])))) : ((65535 ? 1 : 5625663464257463359))));
                            var_23 = ((8191 ? 65535 : -8557868007214746119));
                        }
                        for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            var_24 = (((arr_20 [i_2] [i_2 + 3] [i_2] [i_2] [i_2] [i_2 + 3]) > (arr_20 [i_2] [i_2 + 3] [2] [i_2] [i_2] [i_2 + 3])));
                            arr_21 [i_1] [i_2] [i_5] [i_1] = (arr_4 [i_7 + 1] [i_2] [i_0]);
                            arr_22 [3] [3] [i_2] [i_7] = ((((arr_10 [i_0] [i_0] [i_5] [i_5 - 1] [i_7 - 1]) ? 1 : var_2)));
                        }
                        for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            var_25 -= 20051;
                            var_26 = ((((((arr_14 [i_8 + 2] [i_0] [i_2] [i_1] [i_0]) + var_8))) ? 65533 : (((arr_4 [i_0] [i_2] [i_2]) ? 15 : var_5))));
                        }
                        for (int i_9 = 1; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            var_27 = (((((1 ? 1 : 9))) ? ((4877 ? 11288 : -3870)) : 15433));
                            var_28 = (((arr_19 [i_1] [i_1 - 3] [i_1] [i_1] [i_1 + 1] [i_1 - 1]) <= (arr_18 [i_1] [i_1] [i_1] [i_1 - 3] [i_1])));
                            var_29 = (~(arr_20 [i_2] [i_1] [i_2] [7] [i_2] [i_2]));
                            var_30 = (max(var_30, (~var_10)));
                        }

                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            arr_31 [i_0] [i_2] [20] [i_0] [i_0] [i_0] [i_0] = (((((65517 << (((arr_13 [i_0] [i_1 - 1] [i_2] [i_5] [i_10]) + 846952929))))) ? var_0 : (arr_12 [i_1] [i_1 - 3] [i_1 - 3] [i_1] [i_1 - 1] [i_1 - 3] [i_1 + 1])));
                            var_31 -= ((16660 - (arr_0 [i_0])));
                        }
                        for (int i_11 = 1; i_11 < 21;i_11 += 1)
                        {
                            var_32 -= -16640;
                            var_33 = (1512569539 / 48356);
                            arr_36 [i_0] [i_0] [i_0] [i_2] = ((!(arr_34 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_1 - 2])));
                            var_34 = arr_23 [i_11] [i_1] [i_0];
                        }
                        var_35 = (max(var_35, ((var_3 ? var_11 : (~var_4)))));
                        var_36 -= ((arr_27 [i_0] [i_0] [i_1] [i_0] [i_0]) > (arr_5 [i_0] [i_1] [i_2] [i_5]));
                        arr_37 [i_2] = ((!(arr_6 [i_1 + 1] [i_2] [i_1 - 2] [i_1 - 1])));
                    }
                    arr_38 [i_0] [i_2] [i_2 - 1] = ((-(((!(arr_18 [i_2] [i_2 + 2] [i_1 - 2] [i_1 + 1] [i_0]))))));
                }
            }
        }
    }
    var_37 = var_17;
    #pragma endscop
}
