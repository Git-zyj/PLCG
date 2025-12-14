/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16316
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
                arr_8 [i_0] [i_0] = (((((arr_3 [i_0]) ^ (arr_5 [i_0] [i_1] [i_0]))) == 885888975));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_19 ^= 10763758562574302954;
                    arr_11 [i_0] [i_1] = (((((32685 ? (arr_7 [i_0] [i_0] [i_2]) : 1))) ? (min(62993, (min(var_14, (arr_4 [i_1]))))) : (((((arr_7 [i_2] [i_1] [i_0]) < (min((arr_2 [i_0]), var_0))))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_20 |= (arr_4 [i_0]);
                    var_21 = (arr_12 [i_0] [i_3] [i_3]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_22 = (var_0 == var_17);
                                arr_19 [i_0] &= (arr_1 [i_3] [i_1]);
                                arr_20 [i_0] [i_1] [i_3] = ((var_16 % (arr_16 [i_5] [i_3] [i_1] [i_0])));
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_23 = (((arr_15 [i_3] [i_1] [i_3] [i_1] [i_1] [i_0]) - (arr_15 [i_1] [i_6] [i_1] [i_6] [i_6] [i_1])));
                        arr_23 [i_3] [i_3] [i_3] = -var_14;
                        var_24 |= var_10;
                        var_25 = 3346673612767981738;
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_26 &= (((arr_9 [i_1] [i_0] [i_3]) || (arr_9 [i_0] [i_1] [i_7])));
                        var_27 = (~-21701);
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_3] [i_1] [i_3] = (((~var_17) * ((((arr_3 [i_0]) != 65535)))));
                        var_28 = (min(var_28, (arr_0 [i_0])));
                        var_29 = -7711;
                        var_30 = (max(var_30, var_13));
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                    {
                        var_31 = (max(var_31, (arr_27 [i_1] [i_0])));
                        var_32 = (((arr_24 [i_0] [i_0] [i_1] [i_0] [i_0] [i_1]) ? (arr_30 [i_3] [i_3] [i_1] [i_0] [i_3]) : (arr_30 [i_3] [i_3] [i_3] [i_9] [i_0])));
                    }
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    arr_33 [i_0] [i_1] = (((!var_6) >> (((var_12 == var_6) / (((arr_2 [i_1]) ? 16380 : 2694837876))))));
                    var_33 = (max(var_33, (((!(arr_26 [i_10] [i_1] [i_10] [i_10]))))));
                }
                var_34 |= ((((13044 % (-123 < 242))) > ((-(var_3 + var_3)))));
                var_35 = (max(var_35, (((-((((120 ? 13031 : (arr_14 [i_1] [i_1] [i_0]))) & 65539)))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        {
                            var_36 = (max(var_36, -1492367220));
                            arr_39 [i_0] [i_12] [i_11] [i_1] = (((((214 % var_15) + (((var_4 / (arr_14 [i_1] [i_1] [i_1])))))) - ((((arr_30 [i_0] [i_0] [i_11] [i_11] [i_11]) ? 16380 : -23332)))));
                            var_37 = (min(((min((arr_29 [i_1] [i_1]), (arr_6 [i_0] [i_1])))), 2540475716106544245));

                            for (int i_13 = 0; i_13 < 24;i_13 += 1)
                            {
                                var_38 = ((((((((var_10 ? var_2 : var_9))) ? (min((arr_18 [i_11] [i_12] [i_0] [i_11] [i_1] [i_1] [i_0]), var_17)) : ((((var_2 >= (arr_32 [i_13])))))))) ? (((((min(var_2, (arr_30 [i_13] [i_1] [i_0] [i_12] [i_0])))) ? (var_9 > var_16) : (min(var_17, 1752919941))))) : 3482545009786538025));
                                var_39 = ((9223372036854775807 ? var_10 : (min(1443618735, 1))));
                                arr_43 [i_1] &= ((((((((9223372036854775802 ? 120 : (arr_15 [i_0] [i_1] [i_11] [i_12] [i_11] [i_1])))) ? (((arr_16 [i_12] [i_11] [i_11] [i_12]) ? 9223372036854775802 : 1965060438)) : var_18))) ? ((((var_2 >= -13038) == ((((arr_26 [i_12] [i_12] [i_1] [i_12]) && var_5)))))) : 23331));
                                var_40 = var_0;
                                var_41 = (((arr_21 [i_0] [i_13] [i_13] [i_12] [i_13]) ? (min(((245760 & (arr_27 [i_12] [i_1]))), (arr_15 [i_13] [i_13] [i_11] [i_11] [i_1] [i_0]))) : (arr_14 [i_12] [i_11] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_42 = (((125 - -13024) & ((var_5 * (268435328 == var_4)))));
    #pragma endscop
}
