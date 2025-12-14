/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (arr_0 [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 *= (((((arr_13 [i_3] [i_3 + 1] [i_0 - 1]) == 5))) % ((((arr_6 [i_0 + 1]) != (arr_10 [i_4] [i_3 - 1] [i_3] [i_4] [i_4])))));
                                var_20 = -var_14;
                                var_21 = min(((0 ^ (-11 & -115))), 14);
                                var_22 = (((((-var_0 ? (((0 && (arr_5 [i_4] [i_3] [5])))) : (var_4 && 17)))) || 4294967295));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                var_23 *= (((((!(-2147483647 - 1)))) << (18446744073709551611 - 18446744073709551589)));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_24 = (((((~(arr_25 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5] [i_5])))) ? (((arr_19 [i_5]) % (arr_25 [i_5] [i_5 + 1] [i_5 - 1] [i_5] [13]))) : ((((arr_19 [i_5]) % var_5)))));
                            var_25 = (min(var_25, (((!((((min((arr_18 [i_7]), 6))) <= ((252 << (((arr_25 [i_8] [i_8] [i_7] [i_6] [i_5]) - 12896017130387378810)))))))))));
                            var_26 -= (arr_21 [i_5] [i_5 - 1] [8] [i_5]);
                            var_27 |= ((((!(arr_22 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 1]))) ? (((!(arr_22 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1])))) : (arr_22 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 - 1])));
                            var_28 = 1;
                        }
                    }
                }

                for (int i_9 = 3; i_9 < 16;i_9 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_10 = 4; i_10 < 15;i_10 += 1)
                    {
                        var_29 = (arr_18 [i_6]);
                        var_30 = (((arr_25 [i_9 + 1] [i_9 - 2] [i_9 - 3] [i_9 - 1] [i_9 - 2]) & (arr_25 [i_9 + 2] [i_9 - 2] [i_9 + 1] [i_9 - 3] [i_9 - 3])));
                        var_31 = (arr_24 [i_5] [i_9 + 2] [i_6] [i_5 - 1]);
                    }

                    for (int i_11 = 4; i_11 < 16;i_11 += 1)
                    {
                        var_32 = ((-2047 + (min(((var_13 ? -9223372036854775796 : (arr_21 [i_5] [12] [i_9] [i_11 - 4]))), (arr_23 [i_5] [i_9])))));
                        var_33 = (+((((arr_22 [i_5] [i_5] [i_5 - 1] [i_5 + 1]) > (min((arr_20 [i_6] [i_9]), 0))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 15;i_12 += 1) /* same iter space */
                    {
                        var_34 = var_8;
                        var_35 = -1;
                        var_36 = (arr_19 [i_5 - 1]);
                        var_37 = (--0);
                        var_38 = 23;
                    }
                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 15;i_13 += 1) /* same iter space */
                    {
                        var_39 = 2;
                        var_40 = (arr_33 [i_5] [i_5] [i_5] [i_5] [11]);
                        var_41 = ((-18 ? ((((arr_19 [i_5]) >> (var_3 + 24901)))) : -511));
                        var_42 = ((0 | (arr_25 [i_5 + 1] [i_9 - 2] [i_13] [i_13 + 1] [i_13])));
                        var_43 |= (arr_16 [i_9 - 3]);
                    }
                }
                /* vectorizable */
                for (int i_14 = 3; i_14 < 16;i_14 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 18;i_16 += 1)
                        {
                            {
                                var_44 -= ((((arr_32 [i_5] [i_6] [15] [i_15] [i_16]) == (arr_22 [4] [i_6] [i_6] [3]))));
                                var_45 &= var_5;
                                var_46 |= ((!(arr_42 [i_16] [i_5 + 1] [i_5])));
                                var_47 = var_0;
                            }
                        }
                    }
                    var_48 = (max(var_48, ((((arr_15 [i_14 - 3]) ? 0 : (arr_15 [i_14 - 3]))))));
                }
                for (int i_17 = 3; i_17 < 16;i_17 += 1) /* same iter space */
                {
                    var_49 = ((-1 && ((!((min(20, var_7)))))));
                    var_50 = (((((min((arr_19 [i_5]), var_14)))) > (min((arr_41 [i_6] [i_17 - 2] [i_17]), 6))));
                    var_51 = (arr_18 [i_6]);
                    var_52 = (((var_3 ? 12 : (arr_22 [i_17] [10] [i_17 + 1] [i_5 + 1]))) >> (((arr_22 [i_17] [i_17] [i_17 + 1] [i_5 - 1]) * (arr_22 [i_17] [i_17] [i_17 - 3] [i_5 + 1]))));
                }
            }
        }
    }
    #pragma endscop
}
