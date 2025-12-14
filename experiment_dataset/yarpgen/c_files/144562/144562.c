/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_1] = var_6;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_20 = (max(var_20, (!-32755)));
                            arr_10 [i_1] [11] [i_2] [i_1] [i_1] = (((arr_7 [i_0 - 2] [i_1 + 1] [i_1] [i_0 - 2] [i_0]) ? (!var_1) : (max(var_4, (arr_7 [i_2] [i_2] [i_1] [i_0] [i_0])))));
                            var_21 -= var_19;

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 11;i_4 += 1) /* same iter space */
                            {
                                arr_15 [i_1] = 172;
                                arr_16 [i_0] [i_3] [i_3] [i_2] [8] [i_0] &= var_13;
                                var_22 &= ((!(arr_14 [i_0])));
                            }
                            for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
                            {
                                var_23 += arr_7 [i_1] [i_1 - 1] [i_0] [i_1 + 2] [i_1 + 2];
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_5] = ((-((min(50094, var_7)))));
                            }
                            for (int i_6 = 0; i_6 < 12;i_6 += 1)
                            {
                                var_24 = max((min((arr_18 [i_0 - 2]), (arr_7 [9] [9] [i_1] [i_3] [i_3]))), -32755);
                                var_25 = (max(var_25, var_3));
                                var_26 = (((min((max(18005743119645583123, 51)), var_9))) ? (max(var_18, var_13)) : (((~(arr_14 [i_1])))));
                            }
                        }
                    }
                }
                var_27 = arr_21 [i_1] [1] [i_1] [i_1 - 1] [i_1] [i_1 - 1];
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_28 *= (((((!(arr_12 [i_0]))))) - ((var_14 ? (arr_18 [i_8 - 2]) : var_8)));
                                var_29 = (min(47727, 148));
                                var_30 = (min(32754, -8787029797970140687));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 9;i_11 += 1)
                    {
                        {
                            var_31 = (max(var_31, (((((~((var_11 ? (arr_1 [i_10 + 1] [11]) : (arr_31 [i_0] [i_0])))))) ? (((arr_7 [i_11] [6] [i_0] [4] [i_11]) | var_12)) : 166))));
                            var_32 = 4846;
                            arr_36 [i_1] [i_11 - 1] = min(32767, 10185855594965957443);
                        }
                    }
                }
            }
        }
    }

    for (int i_12 = 1; i_12 < 11;i_12 += 1)
    {
        var_33 = (~16);
        arr_40 [i_12] = ((var_8 ? (((min((arr_39 [i_12] [10]), var_8)) & -32755)) : ((min((arr_39 [i_12] [i_12]), -var_18)))));
    }
    for (int i_13 = 3; i_13 < 12;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 13;i_15 += 1)
            {
                {
                    var_34 = 531788943831026645;
                    arr_49 [i_14] [6] &= 65535;
                    var_35 = (max(((((((((arr_45 [i_13] [0]) >= var_12)))) == (min(var_4, (arr_41 [8])))))), (max(((var_5 ? (arr_47 [i_13] [i_14] [3] [i_14]) : var_13)), 53343))));
                }
            }
        }
        arr_50 [i_13] = (((((3228981881153414132 ? -29229 : 35184372088576))) || ((((arr_44 [i_13] [5]) ? var_2 : (arr_44 [i_13 - 3] [i_13 + 2]))))));
        var_36 &= (((((~((min(var_0, 115)))))) - (min(var_5, 15057247941074298593))));
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 13;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 13;i_17 += 1)
            {
                {
                    var_37 = ((~(((min(17796, 0))))));
                    arr_56 [i_17] [i_16] [i_17] = (min((min(var_16, var_5)), var_18));
                    var_38 = ((var_9 != (min(((3228981881153414150 ? 3577 : 10)), (var_17 & -24791)))));
                    var_39 = ((~(max(var_16, (arr_43 [i_16 - 1])))));
                }
            }
        }
    }
    for (int i_18 = 3; i_18 < 15;i_18 += 1)
    {
        arr_59 [i_18 + 3] [i_18 + 3] &= 68719476732;
        arr_60 [i_18] = arr_58 [i_18] [i_18];
    }
    #pragma endscop
}
