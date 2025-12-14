/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_11 ^= (min(101, (1152921504606846975 & 81)));
                            var_12 = var_2;
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_15 [7] [i_0] [i_3] [i_2] [i_1] [i_0] = (22 / 1);
                            var_13 = (min(var_13, (arr_11 [12] [i_5] [10] [i_5] [i_5] [i_5] [i_5])));
                        }
                        var_14 = ((var_0 ? ((11322078696413439890 ? (((var_8 ? 3141997914823831142 : 0))) : (min((arr_13 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0]), var_5)))) : (arr_7 [i_2 - 2] [i_2] [i_2 + 1] [i_2] [i_1] [i_0])));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_22 [i_1] [i_1] [i_1] = (((arr_12 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0]) / -16));
                            var_15 = 1;
                            var_16 = ((((var_9 && (arr_21 [i_7] [1] [i_7]))) ? (((arr_7 [i_0] [i_1] [i_1] [i_2] [i_6] [i_1]) - var_6)) : (arr_5 [i_6])));
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_17 -= var_7;
                            var_18 = (max(var_18, ((((((288230376151711743 ? 31 : -1612304143))) | (arr_17 [i_0] [i_0 + 1] [i_0 - 2] [i_0] [i_0] [i_0]))))));
                            var_19 = var_2;
                            var_20 = 4532925731986599521;
                            arr_25 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] = ((var_5 > (arr_24 [i_0] [i_1] [i_2] [i_2] [i_6] [i_8])));
                        }
                        var_21 = ((((16483 < ((min(var_0, (arr_23 [i_0] [i_1] [i_0] [i_0]))))))) ^ (arr_6 [i_2] [i_2] [i_2] [i_2 + 2]));
                        var_22 = (((((((min(var_7, 0)))) * ((1152921504606846975 * (arr_4 [i_2 - 2]))))) > (((~(arr_0 [i_0 + 1]))))));
                        var_23 = (max(var_23, var_9));
                        arr_26 [i_6] [i_1] [i_0] = ((((var_5 || var_1) ? (arr_3 [i_0]) : (var_4 + var_2))) * (arr_19 [i_1] [i_1] [i_1] [i_1] [8]));
                    }
                    for (int i_9 = 2; i_9 < 15;i_9 += 1)
                    {
                        var_24 &= (arr_24 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0]);
                        arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] &= (((arr_19 [i_2 - 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1]) ? ((var_1 / (((var_4 ? var_3 : 1))))) : ((((var_3 || (((114 ? var_1 : (arr_7 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0]))))))))));
                        arr_31 [8] [8] [i_2] [i_2] = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    var_25 = (min(var_25, ((min((min(867062359946334364, (arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_1] [i_2 - 1] [i_2 - 2]))), (((min(var_1, 1)) & -23)))))));
                }
            }
        }
    }

    for (int i_10 = 2; i_10 < 19;i_10 += 1) /* same iter space */
    {
        var_26 = (min(var_26, ((min(((((-1219 != -81) ? (var_0 <= var_9) : (arr_33 [i_10] [i_10])))), (arr_34 [i_10]))))));

        for (int i_11 = 1; i_11 < 20;i_11 += 1)
        {
            var_27 ^= ((var_6 ? (arr_32 [i_10 - 1]) : ((var_1 ? (arr_36 [i_10] [i_10] [i_11 + 1]) : var_1))));
            var_28 = (max((((((arr_33 [i_11] [i_11]) ? 192 : var_8)) >> (((min(var_6, -17193)) - 5961078127771585217)))), ((((var_1 % var_10) && ((((arr_39 [i_10] [i_10] [i_11 - 1]) + (arr_35 [i_11] [i_10])))))))));
            var_29 = (min((((~((-4622657897466526535 ? var_7 : (arr_37 [i_10])))))), ((-621997897709293062 ? 5012300215379381871 : (arr_34 [i_10 - 2])))));
        }
    }
    for (int i_12 = 2; i_12 < 19;i_12 += 1) /* same iter space */
    {
        arr_42 [i_12 - 2] = (((((arr_38 [i_12 + 2]) != (min(var_9, 22)))) ? ((((min(var_2, var_6))) ? (arr_34 [i_12 + 1]) : (min(15702670649310975109, 1492235961)))) : ((max(-79, (arr_33 [i_12 - 1] [i_12 + 1]))))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 20;i_14 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        var_30 = ((var_8 ? (arr_47 [i_12 + 2] [i_12 + 2] [i_12 + 2] [i_12 + 2]) : (((arr_48 [i_12] [i_13] [i_15] [i_14] [i_14 - 2] [i_14]) ^ var_7))));
                        arr_50 [i_12 + 2] [i_12] [i_12 + 2] [i_12] [i_12] [i_12 + 2] |= (-48 % 5834462037854187809);
                        var_31 = 1313472991;
                    }
                    var_32 = ((((min(((var_10 ? 3141997914823831150 : 327773484)), 1))) - var_9));
                }
            }
        }
    }
    #pragma endscop
}
