/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_2 ? ((max(var_12, var_2))) : var_11)));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = var_9;
        arr_3 [i_0] [i_0] = var_14;
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        var_21 = (((((((arr_5 [i_1]) ? var_6 : var_16)))) ? var_6 : (((!((max((arr_5 [i_1]), (arr_5 [i_1])))))))));
        var_22 += (arr_4 [2]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_23 = ((var_19 ? (((arr_7 [i_2]) & var_8)) : (var_16 | var_10)));

        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            var_24 = (~(arr_6 [i_3 - 1]));
            var_25 = ((((var_12 || (arr_9 [i_3] [i_2] [2]))) ? var_10 : var_4));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_26 = var_18;

            for (int i_5 = 2; i_5 < 22;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_27 &= arr_14 [i_2] [i_2];

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        arr_22 [i_2] [i_4] [i_5 + 1] [i_6] [i_7] = var_7;
                        var_28 = (~var_0);
                    }
                    for (int i_8 = 3; i_8 < 20;i_8 += 1)
                    {
                        var_29 = (max(var_29, var_8));
                        arr_27 [i_4] [i_4] [5] [i_6] [i_8 + 3] = (((arr_15 [i_8 + 1] [i_5 - 2]) == (arr_6 [i_5 - 2])));
                        var_30 = (arr_16 [i_2] [i_8 - 2] [i_5] [i_5 - 2] [i_8]);
                        var_31 = (max(var_31, (((var_0 ? ((168 ? var_19 : 3746673867)) : var_1)))));
                    }
                }
                for (int i_9 = 2; i_9 < 22;i_9 += 1)
                {
                    var_32 = ((-2048 ? 2858 : 2019629783));

                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_33 *= ((arr_6 [i_5 - 1]) >> (((arr_19 [i_2] [i_5 - 2] [i_5] [15] [i_9] [i_10]) + 1550093716198905307)));
                        var_34 -= var_4;
                    }
                    for (int i_11 = 2; i_11 < 22;i_11 += 1)
                    {
                        var_35 |= var_6;
                        arr_35 [9] [i_4] [16] [i_9] [i_11 - 2] = ((-(arr_20 [i_11 - 1] [i_11] [i_11 + 1] [i_11] [i_11 - 1])));
                        arr_36 [i_4] = var_19;
                    }
                    for (int i_12 = 2; i_12 < 21;i_12 += 1)
                    {
                        var_36 = ((var_19 - (var_14 / var_13)));
                        var_37 = (((arr_10 [i_4] [i_12 - 2] [i_4]) / ((((arr_25 [i_9 - 1] [i_4] [i_4] [i_2]) != var_3)))));
                    }

                    for (int i_13 = 3; i_13 < 21;i_13 += 1)
                    {
                        var_38 = (arr_32 [i_2] [i_4] [i_5] [i_9] [i_2]);
                        var_39 = var_7;
                    }
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        var_40 |= (((arr_16 [i_5 - 1] [i_5] [i_5 - 1] [i_9 - 1] [i_14]) ? var_3 : (arr_40 [i_2] [i_2] [i_5 + 1] [i_5 - 2] [i_9 + 1])));
                        var_41 = var_19;
                        var_42 = (arr_17 [i_2] [i_9 - 1] [i_4] [i_4]);
                        var_43 = (max(var_43, (!var_2)));
                        arr_46 [i_4] [i_4] [i_5] [19] [i_9] [15] [i_14] = ((var_0 ? (arr_31 [i_5 - 2]) : ((var_11 ? var_9 : var_5))));
                    }
                    var_44 = (max(var_44, (arr_8 [i_5 - 2])));
                    var_45 &= (((arr_34 [i_2]) ? (arr_34 [i_2]) : (arr_34 [i_2])));
                }
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    var_46 = ((var_7 ? var_16 : (arr_43 [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 2])));

                    for (int i_16 = 2; i_16 < 22;i_16 += 1)
                    {
                        arr_53 [i_4] [i_4] [i_5] [i_5] [i_15] [2] [i_16] = arr_48 [7] [i_4] [i_4];
                        arr_54 [i_2] [i_4] [i_2] [11] [i_15] = ((var_0 ? var_4 : (arr_16 [i_2] [11] [i_2] [i_16 + 1] [i_16 - 1])));
                        arr_55 [i_2] [i_4] [i_5] [1] [i_4] [i_5] = (arr_50 [i_5 - 2] [i_5 - 2] [i_15] [i_16] [i_16]);
                        arr_56 [i_2] [i_2] [i_2] [i_5] [18] [i_15] [i_16] |= (((((arr_40 [i_2] [i_5 - 2] [i_5] [i_15] [i_15]) && (arr_52 [i_2] [i_15] [i_5 - 2] [i_4] [i_2] [i_2]))) ? (arr_51 [i_15]) : (arr_32 [i_2] [i_2] [i_5] [i_16 - 2] [i_16])));
                    }
                    for (int i_17 = 4; i_17 < 22;i_17 += 1)
                    {
                        var_47 = (arr_32 [i_17 - 4] [i_4] [i_5 - 1] [i_4] [i_2]);
                        arr_59 [10] [i_4] [i_4] [10] [10] = var_4;
                    }
                    var_48 = var_0;
                }
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    var_49 += 9223372036854775807;
                    var_50 = var_3;
                    var_51 += ((arr_23 [15] [i_5 - 1] [i_5 - 1]) ? (arr_51 [i_2]) : (arr_23 [i_5] [i_5 + 1] [i_5]));
                    var_52 = (max(var_52, 18209696821458280496));
                }
                var_53 = (max(var_53, ((((((var_3 ? var_1 : var_5))) ? var_7 : (arr_61 [i_2] [i_2] [i_2] [i_2]))))));
                var_54 = (min(var_54, (arr_11 [i_5] [i_2])));
                arr_62 [2] [i_4] [11] [16] = ((+(((arr_34 [i_4]) ? var_5 : (arr_41 [i_4])))));
            }
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 23;i_19 += 1)
            {
                for (int i_20 = 1; i_20 < 22;i_20 += 1)
                {
                    {
                        arr_70 [i_4] [i_4] [i_4] [16] = var_17;
                        var_55 = (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << (15941205141032736426 - 15941205141032736426)));
                    }
                }
            }
            arr_71 [i_4] [i_4] = ((var_13 & (arr_39 [16] [i_4])));
        }
        for (int i_21 = 4; i_21 < 20;i_21 += 1)
        {
            var_56 = var_18;
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 23;i_23 += 1)
                {
                    {
                        arr_81 [16] [i_23] = ((((((arr_21 [i_21] [i_2] [i_22] [i_21] [i_2]) ? var_18 : var_15))) ? var_16 : ((~(arr_26 [i_2] [3] [i_23] [i_2] [i_22] [i_23])))));
                        var_57 &= ((((~(arr_74 [i_2] [i_2] [i_2]))) ^ var_2));
                        arr_82 [i_2] [i_21] [i_23] = (((arr_51 [i_23]) ? (arr_51 [i_23]) : var_10));
                    }
                }
            }
        }
        var_58 = var_7;
    }
    #pragma endscop
}
