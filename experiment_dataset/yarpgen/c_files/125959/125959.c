/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (arr_2 [i_0] [i_1]);
            var_20 = (max(-var_14, (arr_3 [i_0] [i_0])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_7 [i_0] = var_9;
            var_21 = (max(var_21, (((arr_6 [i_2]) ? (arr_6 [i_0]) : (arr_6 [i_2])))));
            arr_8 [i_0] [i_0] = 3605840545;
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_12 [i_0] [1] [i_0] = (((~689126764) ? (((min((-1996 > var_15), (arr_5 [i_0] [i_0]))))) : ((((var_8 != (arr_2 [i_0] [i_3]))) ? 689126750 : -var_18))));
            var_22 = (max(((((((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_5 [i_3] [i_0])))) ? (-8250995480744216743 % -8250995480744216769) : (-1998 || 72057044282114048))), ((max(-var_3, (min(4294967295, -13977)))))));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_23 = ((((max(91, (arr_9 [i_0]))))) | ((max(var_17, var_15))));
            arr_15 [i_0] = (((((((min((arr_0 [i_0] [i_4]), 3605840566))) ? (200 ^ var_12) : (var_16 | 11839)))) ? (min((((1 ? 27395 : 1))), (arr_0 [i_0] [i_0]))) : var_19));
            var_24 = (min(var_24, var_13));
            arr_16 [i_0] [i_0] [i_4] = (min((((arr_14 [i_0]) ? (arr_14 [i_0]) : 8547177838197240342)), ((min((arr_14 [i_0]), var_16)))));
            arr_17 [i_0] = ((+((((max((arr_10 [i_0] [i_4] [i_0]), 1570265856))) ? (arr_1 [i_0]) : 8547177838197240364))));
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    arr_23 [i_0] [i_5] [i_0] = (((((max((arr_0 [i_0] [i_0]), var_1)))) ^ (((!(var_16 ^ 18374687029427437569))))));
                    var_25 = (max(var_25, (((+(min((arr_0 [4] [i_5]), var_18)))))));
                    var_26 ^= (max((max((((var_19 ? 49152 : var_16))), 18446744073709551612)), (((max(var_2, 91))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_0] [i_0] [i_7] [i_8] = (((((((arr_13 [i_0] [i_0]) ? var_15 : 0)) * (((max((arr_25 [i_7] [i_8]), (arr_18 [i_0]))))))) << (min(((1570265856 ? (arr_11 [i_0] [i_5]) : var_18)), (((var_11 == (arr_21 [i_0] [i_0]))))))));
                                var_27 = arr_0 [i_0] [i_0];
                                var_28 = (arr_10 [i_5] [i_5] [i_0]);
                            }
                        }
                    }
                }
            }
        }
        var_29 = (((arr_6 [i_0]) + (min((arr_20 [i_0]), ((var_6 ? (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_17))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 0;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                {
                    var_30 &= ((3605840556 ? 1 : var_19));

                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        arr_40 [i_9] [i_10] [i_11] [i_12] [i_11] = var_0;
                        var_31 = -106;
                        var_32 = ((var_9 ? var_14 : 0));
                        var_33 = ((((((arr_38 [i_11] [i_10] [i_11] [i_9 + 1]) ? (arr_2 [i_10] [i_12]) : var_16))) >= 72057044282114048));
                    }
                }
            }
        }
        arr_41 [i_9] = ((arr_0 [1] [i_9 + 1]) ? (~var_15) : (arr_30 [i_9 + 1] [i_9 + 1]));
        arr_42 [i_9] = var_18;
        arr_43 [i_9 + 1] = var_8;
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 1;i_13 += 1)
    {
        arr_47 [i_13] = (((arr_45 [i_13]) <= 1));
        var_34 = (max(var_34, (~-232)));
    }
    var_35 = var_2;
    var_36 = (((((var_18 >= var_12) >> ((((var_3 ? -1500602868 : 214)) - 204)))) != var_5));
    #pragma endscop
}
