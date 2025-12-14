/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (var_1 % var_15)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((var_4 ? (0 ^ var_6) : ((var_3 ? var_8 : -12836)))))));

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        var_18 |= ((1 ? 173 : 3857478862));
                        var_19 = ((min(var_2, (arr_3 [i_0]))));

                        for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
                        {
                            var_20 = (max(var_20, (((((((((var_4 % (arr_9 [i_0] [1])))) ? 149 : var_7))) ? (min(5178699402309682536, (min(1, var_5)))) : var_12)))));
                            var_21 *= ((var_5 ? (((~((var_7 ? 1 : var_6))))) : var_0));
                            var_22 ^= ((((arr_13 [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4]) > 1)));
                            var_23 = (max(var_23, var_10));
                            var_24 *= var_6;
                        }
                        for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            var_25 = (arr_11 [i_5 - 1]);
                            var_26 ^= (32768 / 26499);
                            var_27 = (min(var_27, ((max(var_4, ((var_9 ? (arr_8 [i_0 + 3] [12]) : var_3)))))));
                        }
                        for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = 92;
                            arr_22 [i_6 + 2] [i_0] [i_0] [2] [i_0] [2] [i_0] = var_0;
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_28 -= var_12;
                            var_29 = (max(var_29, var_3));
                        }
                        var_30 = (min(var_30, (arr_2 [i_1] [i_0 + 2])));
                        var_31 = ((11803 != ((-((1 ? var_10 : var_7))))));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_29 [i_0] [i_1] [i_2] [i_1] [0] = ((var_15 ? 13268044671399869091 : (((var_8 / (arr_15 [i_0] [i_0 - 1] [i_0] [i_0 - 3] [i_0 + 3] [i_0 + 2] [i_0 + 4]))))));
                        var_32 ^= (arr_1 [i_1] [i_2]);
                        var_33 = (min(var_33, ((min(13268044671399869072, 13268044671399869080)))));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_34 -= (var_13 / var_11);
                        var_35 *= ((((((-127 - 1) & 1))) ? ((~(arr_4 [i_0 - 3] [10] [10]))) : ((var_14 & (arr_4 [i_0 + 4] [4] [i_2])))));

                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_36 *= (((((-32750 ? (arr_4 [i_0] [12] [i_0 + 2]) : 65535))) ? (1 % 5178699402309682536) : (~-3815)));
                            var_37 = (min(-var_0, (max(var_0, (1 > var_9)))));
                            var_38 = (max(var_38, ((max(((var_13 ? var_5 : var_9)), (var_13 * var_5))))));
                            var_39 = ((!var_12) ? (var_4 && var_11) : ((var_12 ? var_11 : (arr_10 [i_0] [i_0] [i_0 - 2] [12]))));
                            var_40 ^= 1;
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_41 = (((arr_5 [i_0] [i_0 - 3]) ? (arr_5 [i_0 - 3] [i_0 + 1]) : var_10));
                            var_42 |= (var_9 && (!var_0));
                        }
                        for (int i_12 = 3; i_12 < 18;i_12 += 1)
                        {
                            var_43 ^= var_8;
                            var_44 = (max(var_44, (((26500 ? (((13268044671399869070 ? 1 : 1))) : var_5)))));
                        }
                        var_45 = (max((((-var_9 << ((1 ? (arr_19 [i_0] [i_0 + 3] [i_1] [i_0 + 3] [i_2] [i_9] [i_9]) : var_13))))), var_5));
                        var_46 &= (arr_11 [i_0 + 1]);
                    }
                    var_47 ^= (arr_11 [i_0 - 2]);
                    var_48 = (max((min(var_15, (((arr_7 [i_0]) ? var_5 : var_3)))), 248));
                }
            }
        }
    }
    #pragma endscop
}
