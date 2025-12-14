/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = var_5;

                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = ((max((((arr_3 [i_0] [i_0]) ? 57344 : 7997)), (var_5 >= 12767322114656992873))));
                                arr_17 [i_0] [i_0] [i_1] = var_4;
                            }
                        }
                    }
                    var_20 = ((min(((-6981825610001951982 ? 7423 : -8742530248221259258)), (arr_3 [i_2 - 3] [i_2]))) % (arr_12 [i_0] [i_1] [i_0] [i_2 - 3]));
                    arr_18 [i_1] [i_1] = 18446744073709551592;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [i_1] = -57345;
                        var_21 = -19964;
                        var_22 = (2588538439498692796 >= 0);
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_1] [i_1] [10] [i_7] [i_7] = ((~((9219457968439335773 * (arr_8 [i_0] [i_1] [i_7])))));

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_31 [i_8] [i_1] [i_5] [i_1] [i_0] = ((((arr_9 [i_0] [i_0] [i_5]) % var_7)));
                            var_23 = (arr_30 [i_1] [i_1] [i_5] [i_7] [i_8]);
                            arr_32 [i_0] [0] [i_0] [i_1] [i_0] [i_0] = (arr_29 [i_0] [i_0]);
                        }
                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            var_24 = (((((8742530248221259257 ^ (arr_15 [i_1] [0])))) / (arr_10 [i_0] [i_0] [i_5] [i_5] [i_7] [12])));
                            var_25 = (((arr_34 [i_5] [i_9] [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9]) || (arr_30 [i_1] [i_1] [i_1] [i_1] [i_9])));
                            var_26 = (((arr_14 [i_9 - 1] [i_7] [i_1] [i_7] [i_0] [i_1] [i_9]) ? (arr_14 [i_9 + 1] [i_0] [i_1] [i_9 + 1] [i_9 + 1] [i_0] [i_9]) : (arr_25 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9] [i_9 + 2])));
                        }
                        var_27 = (((arr_24 [i_0] [i_0] [i_0] [i_0]) ? 8742530248221259257 : (((-6904 ? 4 : (arr_14 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1] [i_7]))))));
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                    {
                        arr_37 [i_5] [i_1] = -6543180467109651280;
                        arr_38 [i_1] [i_1] = 69269232549888;
                        arr_39 [i_1] = ((arr_27 [i_1] [i_5] [i_10]) ? (arr_8 [i_1] [i_1] [i_5]) : (arr_8 [i_0] [i_0] [i_0]));
                    }
                    arr_40 [i_1] [i_5] = -8742530248221259265;
                    var_28 = var_9;
                    var_29 = (((arr_24 [5] [i_1] [i_5] [i_5]) ? var_4 : var_14));
                }
                var_30 = (max(16327, 18446744073709551592));
            }
        }
    }
    #pragma endscop
}
