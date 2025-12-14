/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += -48;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_17 += -1;
                    var_18 = (min((-18971 + 1), ((min((arr_3 [i_0 - 2] [i_1]), 18971)))));
                    var_19 += ((max((arr_2 [i_0 + 1] [i_1 + 1] [8]), (arr_5 [6]))));
                    var_20 = (((!var_2) ? (max(((var_12 - (arr_4 [i_1] [i_1] [i_1]))), (1792828192 / -6092452346130314397))) : var_15));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_21 = (max(var_21, var_10));

                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        arr_10 [i_1] = ((var_14 ? (!1) : (arr_7 [i_0 - 2] [i_1] [i_3] [i_1])));
                        var_22 = 0;
                    }
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            var_23 = (max(var_23, (arr_7 [1] [i_1 - 1] [1] [i_1])));
                            var_24 = (~var_8);
                            var_25 = ((!(arr_9 [i_1] [i_6])));
                            var_26 = (!(arr_12 [i_0] [i_0 + 1] [i_1] [i_6 + 2]));
                            var_27 = ((0 ? ((8 ? var_12 : 7721798432398613960)) : var_12));
                        }

                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            var_28 = ((arr_14 [i_7] [i_5 - 2] [i_3] [i_0 + 3] [i_1] [i_0 + 3] [i_0 + 3]) << (arr_14 [i_7] [i_5] [i_5 - 2] [i_3] [i_1 - 3] [i_0] [i_0 - 2]));
                            var_29 = (var_11 ^ ((~(arr_15 [i_0] [6] [6] [i_0] [i_5 + 1] [i_0] [i_1 - 3]))));
                            var_30 = (arr_5 [i_1]);
                        }
                        for (int i_8 = 2; i_8 < 16;i_8 += 1)
                        {
                            var_31 = (var_12 % 66);
                            var_32 -= (arr_6 [9] [i_1 - 2] [i_3] [i_5]);
                            arr_20 [i_8] [i_1] [i_3] [i_1] [i_1] [i_0] = (((0 ? 18971 : -728684925)));
                            var_33 = (2576773031018462310 != 18971);
                        }
                        for (int i_9 = 3; i_9 < 15;i_9 += 1)
                        {
                            arr_25 [i_0] [i_1 + 1] [i_3] [i_5] [i_9 - 2] [i_1] = -24638;
                            var_34 = ((var_4 > var_2) ? var_2 : (var_4 % 66));
                            var_35 = ((arr_3 [i_1] [i_1]) << (arr_3 [i_1] [i_1]));
                            arr_26 [14] [i_1 - 3] [i_1 - 3] [14] |= (((~-1752) << (2576773031018462311 - 2576773031018462296)));
                        }
                        for (int i_10 = 1; i_10 < 18;i_10 += 1)
                        {
                            arr_30 [i_0 + 2] [i_1] [i_3] = ((arr_11 [i_5 + 2]) != 9223372036854775807);
                            var_36 ^= -18971;
                            arr_31 [i_1] [i_0 + 2] [i_1 - 1] [i_3] [i_5] [i_10] = ((-(arr_13 [i_0 + 3] [i_10 + 1])));
                            var_37 ^= (arr_1 [i_5 - 3]);
                            arr_32 [i_0 + 4] [13] [i_1] [1] [9] = -96;
                        }
                        arr_33 [16] [2] [0] [16] |= -6823119122124188835;
                        var_38 ^= var_14;
                    }
                    var_39 *= (arr_1 [i_1]);
                }
                for (int i_11 = 3; i_11 < 17;i_11 += 1)
                {
                    var_40 = (max((arr_14 [i_0] [i_0 + 3] [i_0 + 3] [i_1] [i_1 - 1] [i_11] [i_11 + 2]), (~-18971)));
                    var_41 *= (max((((arr_12 [i_0 + 3] [i_1 - 2] [12] [i_11 - 3]) ? (arr_12 [i_0 + 1] [i_1 - 1] [18] [i_11 - 2]) : -18971)), (arr_12 [i_0 + 3] [i_1 - 3] [18] [i_11 + 1])));
                }
                var_42 ^= (((arr_14 [i_1 + 1] [i_1] [i_1 - 1] [i_0 - 2] [4] [9] [8]) ? (max(var_8, ((min((arr_12 [i_0 + 4] [i_0] [14] [i_0 + 2]), (arr_3 [i_0] [16])))))) : (max((min(1, (arr_22 [i_0] [i_1 + 1] [i_0] [i_1] [i_1 - 3] [8] [i_1 + 1]))), var_9))));
            }
        }
    }
    var_43 ^= -18971;
    var_44 ^= ((32 && ((!(var_8 || 2147483647)))));
    #pragma endscop
}
