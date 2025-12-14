/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((((arr_1 [i_0] [6]) ? 101 : var_0)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [5] [i_2] [i_3] = (!4095);
                            var_12 &= ((var_5 ? var_3 : ((-(max((-9223372036854775807 - 1), 9640317856271400100))))));
                            var_13 = ((~((min(-120, -27576)))));
                            var_14 = 1;
                        }
                    }
                }
                var_15 = (min(var_15, (arr_11 [1] [i_1] [i_0] [i_0])));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    var_16 += (arr_2 [i_1] [i_4]);
                    var_17 ^= arr_1 [i_0] [i_0];
                }
                for (int i_5 = 4; i_5 < 9;i_5 += 1)
                {
                    var_18 = (min(36354, ((var_0 ? var_1 : (arr_0 [i_5 - 4])))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_19 ^= (((16769024 & -40) <= (((((-27576 ? -1 : 65))) ? 60700935 : (!8806426217438151515)))));
                                var_20 = ((~((((((arr_9 [i_6] [i_1]) ? (arr_3 [i_5]) : (arr_13 [i_0])))) ? -27576 : (arr_22 [i_0] [i_5] [i_5 - 2] [1] [i_7] [i_7 + 1])))));
                            }
                        }
                    }
                    var_21 = (min((((1 ? -91 : -32))), ((201326592 ? (arr_16 [i_5 + 1] [i_1] [i_1]) : 130023424))));
                }
                for (int i_8 = 4; i_8 < 10;i_8 += 1)
                {
                    var_22 = min((((arr_0 [i_8 - 3]) ? (arr_0 [i_8 + 1]) : var_1)), 4226604593258928901);

                    for (int i_9 = 4; i_9 < 10;i_9 += 1)
                    {
                        var_23 += (((((1 & (arr_10 [i_0] [i_8 - 1])))) ? (max((arr_4 [10] [i_9]), (arr_21 [i_8 - 2] [i_8 + 1] [i_9 - 1] [i_9 - 2]))) : (((-26464 != (max(5, 1307331877)))))));
                        arr_31 [i_9] = (min((min(((max((arr_15 [i_8]), var_9))), (arr_24 [i_9] [i_8] [i_1] [i_0] [i_9]))), (((var_5 ? -63 : 0)))));
                        arr_32 [i_0] [i_1] [i_1] [i_0] [i_9] = (((arr_7 [i_0] [i_0] [i_0]) ? (!var_9) : ((((((var_0 ? (arr_9 [i_0] [i_0]) : var_9))) && (((-50 ? -50 : 42706))))))));
                        arr_33 [i_9] [i_9] = 42708;
                        var_24 = (((arr_18 [i_0] [i_1] [i_8] [0]) ? (arr_11 [i_1] [i_1] [i_1] [i_0]) : var_6));
                    }

                    for (int i_10 = 1; i_10 < 8;i_10 += 1)
                    {
                        var_25 = (arr_10 [10] [10]);
                        var_26 = (min(var_26, 90));
                        var_27 ^= (arr_21 [i_0] [i_0] [i_0] [i_0]);
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 7;i_12 += 1)
                    {
                        {
                            arr_41 [i_0] [i_0] [i_0] = ((~((var_2 ? (arr_37 [i_0] [i_12 + 3] [i_12 + 3] [10]) : ((7814 ? 4226604593258928901 : var_4))))));

                            for (int i_13 = 0; i_13 < 11;i_13 += 1)
                            {
                                arr_45 [i_0] [5] [i_11 - 1] [i_1] [i_0] [i_13] [i_13] = (arr_19 [i_13] [i_12 + 1] [i_11] [i_1]);
                                var_28 &= ((var_2 ? (((var_7 / (arr_22 [i_0] [i_13] [i_12 + 4] [i_12 - 3] [i_11 + 1] [2])))) : (max(14220139480450622715, -9153125363906430435))));
                                arr_46 [i_0] [i_1] [i_1] [i_11] [i_11] [i_11] = ((!((((arr_34 [i_12 - 4]) ? 9223372036854775807 : (arr_34 [i_12 - 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (!var_4);
    var_30 = (((((((min(var_4, var_1))) ? (var_7 ^ var_8) : ((var_2 ? var_7 : var_0))))) ? (((max((var_1 != 42687), var_4)))) : ((-5403 ? (((var_8 ? var_8 : var_1))) : 1516360288566199666))));
    #pragma endscop
}
