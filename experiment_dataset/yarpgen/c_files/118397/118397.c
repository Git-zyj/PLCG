/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 &= (min(((((arr_1 [i_1]) && ((min(var_9, var_9)))))), (max((arr_3 [i_1] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_1])))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_12 = ((((~var_10) ? 0 : ((var_9 ? var_9 : var_4)))));
                    var_13 = (min(var_7, (((231 ? 1 : 1654697275)))));
                }
                for (int i_3 = 4; i_3 < 23;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_14 += ((((-111 | (arr_7 [0] [i_1] [i_1])))) ? ((((!((((arr_2 [i_1] [i_1]) & 6044043456260245704))))))) : (min(((var_0 ? var_0 : (arr_5 [9] [i_1] [i_3 - 2] [i_4]))), (min(var_0, var_0)))));
                                arr_12 [i_0] [i_0] [i_1] [i_1] [10] [i_4] [i_5] = 1;
                                var_15 = ((min(((((arr_6 [4] [i_1] [9] [i_1]) ? var_9 : (arr_1 [i_1])))), (~var_0))));
                            }
                        }
                    }
                    var_16 = (min(var_16, (((var_8 ? (min((arr_2 [i_3 - 2] [i_0]), (arr_11 [i_3 - 3] [i_1] [i_0] [i_1] [i_3] [i_3] [i_1]))) : (min(var_7, var_10)))))));
                    arr_13 [i_3 - 2] = 2;
                    var_17 = ((((var_1 ? (arr_5 [i_3 - 1] [i_3 - 2] [i_3 - 4] [i_1]) : var_8)) * (!var_6)));
                }
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_18 = (((((1 ? -4079016063702167580 : 856826480))) ? ((27682 ? -1778 : 231)) : ((~(6044043456260245709 >= -1642728254)))));
                        arr_21 [1] [i_1] [i_6] [i_7] = ((((min(-601877692623575000, var_7) | (arr_3 [i_7] [i_6 - 1] [i_1])))));
                        arr_22 [i_6 - 1] = (var_2 ? (min((arr_17 [i_0] [i_6] [i_7]), var_10)) : (~var_8));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        var_19 = (min(var_19, (((-((~(arr_9 [i_8] [i_8] [i_6] [i_1] [1]))))))));

                        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                        {
                            var_20 = (arr_8 [i_0] [i_1] [i_1] [i_6 - 1] [i_1] [i_9]);
                            arr_30 [14] [i_8] = (856826480 < 1);
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                        {
                            var_21 = ((var_1 <= (!var_4)));
                            arr_34 [i_1] [i_6] [i_8] [i_10] = var_9;
                        }
                        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                        {
                            var_22 = (+-122);
                            arr_37 [i_11] [22] [i_8] [i_8] [i_1] [i_0] = (-11089596375037323435 ? -4239619142652873530 : (((-2 + (arr_35 [i_0] [i_1] [16] [i_8] [i_8])))));
                            arr_38 [i_0] [i_1] [i_0] [i_8] [i_8] [i_11] = (((!var_10) ? 1157950226416927360 : 1714130624));
                        }
                        var_23 = (min(var_23, var_1));
                    }
                    var_24 = (1 ^ -13);
                    var_25 = (arr_29 [i_0]);

                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 22;i_12 += 1)
                    {
                        var_26 = 473633220610366425;
                        arr_43 [i_12] [i_0] [i_0] [i_0] = ((((-(-127 - 1))) - ((var_9 ? var_5 : var_6))));
                    }
                }
                var_27 = (min(var_27, (((((min((var_8 < 23692), (min(var_6, (arr_42 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])))))) ? ((((-1052271724 && (~1052271724))))) : 0)))));
            }
        }
    }
    var_28 = (min((((~((-856826481 ? var_4 : var_2))))), ((~((1642728254 ? 231 : 8796093022207))))));
    var_29 = ((((var_5 ? var_10 : var_9)) < (--504)));
    #pragma endscop
}
