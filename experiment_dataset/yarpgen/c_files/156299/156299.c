/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (var_0 / var_16)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_18 = (var_3 ? (arr_10 [i_0 - 2] [i_0] [i_3] [i_0 - 2] [i_3]) : (arr_5 [i_0 + 1] [i_0 + 1]));
                        var_19 = (((arr_8 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 + 1]) != (arr_9 [i_0 - 1] [i_1] [i_2] [i_3])));
                        var_20 &= (var_15 ? (arr_4 [i_0] [i_1] [i_0 + 1]) : (arr_3 [i_3]));
                        var_21 |= arr_3 [i_0];
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_22 |= ((var_3 * var_14) ? (var_16 % 1317952272) : 4235664573);
                        var_23 = (var_1 % (arr_7 [8] [i_4]));
                        var_24 = var_12;
                        var_25 += (var_6 & 1824333054);
                    }
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        var_26 = var_12;
                        var_27 *= ((!(arr_10 [i_5 - 3] [i_1] [i_2] [i_0 - 1] [i_5])));
                        var_28 = ((~(arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1])));
                        var_29 = (3246307280 ? 1409011117 : ((~(arr_9 [i_5] [5] [i_0] [i_0]))));
                    }
                    var_30 = (max(var_30, (((((((arr_4 [i_0 - 2] [i_1] [i_1]) && (arr_12 [i_1] [i_1] [i_1] [i_2]))))) & (arr_0 [i_1])))));
                    var_31 = (i_0 % 2 == zero) ? (((var_9 ^ var_5) << (((arr_12 [i_0] [i_1] [i_1] [i_2]) - 1305334424)))) : (((var_9 ^ var_5) << (((((arr_12 [i_0] [i_1] [i_1] [i_2]) - 1305334424)) - 3268688200))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_32 = ((var_8 & 0) ? (arr_17 [i_0] [i_0] [i_0] [4]) : 817423138);
                                var_33 = (2851643374 & 2556484659);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_34 = ((var_12 ? 1322038854 : 0));
                                var_35 = (max(var_35, ((((var_5 < var_10) >= ((-(arr_18 [i_0] [i_1] [i_2] [i_8]))))))));
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                {
                    var_36 = (max(var_36, (((((((2470634248 ? 5 : 2972928442))) ? (arr_27 [i_0] [i_0] [i_0] [i_1] [i_10]) : ((209657684 ? var_5 : var_12)))) ^ ((1322038853 ? (3989467543 + 2972928441) : (var_3 - var_13)))))));
                    var_37 = 2972928442;
                }
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    var_38 ^= max((((!(arr_10 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1] [i_0 + 1])))), (arr_19 [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 1] [i_1] [i_0 - 2]));
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            {
                                var_39 = ((((arr_40 [i_0]) * (arr_40 [i_0]))) + (((arr_37 [i_0] [i_0] [i_0] [4]) - ((23 ? 2556484659 : 2371620722)))));
                                var_40 = (max(var_40, ((((~(~var_4))) ^ (arr_22 [i_12])))));
                            }
                        }
                    }
                    var_41 = (((arr_34 [i_0 - 2]) == (((((min(3338808073, var_2)) < (arr_25 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 2])))))));
                    var_42 = (min(var_42, 2470634254));
                    var_43 &= ((!(!1)));
                }
                var_44 = min((((!(var_3 ^ var_9)))), (((arr_27 [i_0] [i_0] [i_0 + 2] [1] [i_0]) % 1824333054)));
                var_45 = max(1329338627, ((var_11 & (!8388607))));
            }
        }
    }
    var_46 = min((((((var_11 ? var_3 : var_9))) ? 1824333062 : ((var_0 >> (var_11 - 2358886506))))), (min(var_1, ((2809898197 ? 5 : 1329338627)))));
    var_47 = ((((min((var_11 > var_7), (!var_8))))) + ((-(max(4104643185, 0)))));
    var_48 = ((var_13 ? ((var_2 ? 434722824 : var_7) : var_1)));
    #pragma endscop
}
