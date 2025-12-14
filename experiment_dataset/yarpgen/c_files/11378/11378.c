/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_8 ? (((var_5 + var_11) + var_17)) : (min((~217), (var_9 * 40)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 += (((arr_1 [i_0] [i_0]) ? (((!(arr_1 [i_0] [i_0])))) : (((max((arr_1 [i_0] [i_0]), var_13)) ^ (((!(arr_1 [i_0] [2]))))))));
        var_22 = 31;
        var_23 = (max(var_12, (arr_0 [i_0])));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        arr_4 [i_1] = (min(((((((arr_2 [i_1 - 1] [i_1]) ? 40 : -20))) ? (arr_2 [i_1] [i_1]) : var_18)), ((~(12967955274485347786 | 20)))));
        arr_5 [i_1 - 1] [i_1 - 2] = var_17;
    }
    var_24 = (((((var_9 ? var_13 : var_0))) << (var_10 - 3977447297575117060)));
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_16 [i_4] [i_4] [6] = (max((arr_8 [i_2]), (arr_7 [i_2])));
                    var_25 = var_9;
                    arr_17 [10] [i_4] = (max((arr_10 [i_2 - 2]), (arr_13 [i_3 + 1] [i_2 + 1] [i_2] [2])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                arr_22 [i_6] = (arr_0 [i_5]);
                arr_23 [i_5 + 2] [i_6] [i_5 + 2] = (arr_20 [i_5] [1] [i_6]);
                arr_24 [i_5 + 2] [i_6] = (((arr_1 [i_5 - 1] [i_5 + 3]) < ((((arr_1 [i_5 + 2] [i_5 + 2]) <= (arr_1 [i_5 - 1] [i_5 - 1]))))));
                var_26 = (arr_19 [i_5] [i_6]);

                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_27 = (arr_19 [i_5] [i_6]);

                    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_28 ^= (((31 ^ 64) ? (min(var_4, (var_12 & var_12))) : (arr_18 [i_5 + 2] [i_6])));
                            var_29 = (max(var_29, (((var_12 - ((8188 >> (var_4 - 677771021))))))));
                        }
                        for (int i_10 = 2; i_10 < 13;i_10 += 1) /* same iter space */
                        {
                            var_30 = ((~((~(((arr_27 [i_5] [i_5 + 2]) & -13))))));
                            var_31 = (min(var_31, ((min(var_7, var_2)))));
                            arr_34 [i_6] [i_7] [i_8] = ((((var_3 && 1) ? ((((!(arr_33 [i_6] [i_7] [i_8]))))) : (min(12967955274485347786, (arr_25 [i_6] [i_7]))))));
                            var_32 = (min(var_32, ((((((((-15 * (arr_2 [i_5] [i_6])))) ? ((~(arr_21 [i_5] [i_5] [i_5]))) : -110))) ? (((-(4294967294 / 127)))) : (((~8542726409529794690) ? var_16 : ((var_8 ? var_18 : 221))))))));
                            var_33 = (min(var_33, ((((arr_26 [i_10 - 1] [i_5 - 1] [i_5 + 1]) ? 128 : (((((arr_2 [i_7] [i_7]) >> (arr_30 [i_5] [i_6] [i_7] [i_8] [i_10]))) >> (var_4 - 677771042))))))));
                        }
                        for (int i_11 = 2; i_11 < 13;i_11 += 1) /* same iter space */
                        {
                            var_34 = var_10;
                            var_35 ^= ((229 & ((1 | (max(40, 2047745252))))));
                        }
                        arr_37 [i_8] [i_7] [i_5] [i_5] = arr_3 [i_5];
                    }
                    for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                    {
                        arr_40 [i_12] [3] [i_5] [i_5] = (arr_32 [i_12] [i_5]);
                        var_36 = (max(var_36, 228));
                        arr_41 [i_5] [i_6] [i_7] [i_12] = ((var_14 ? (arr_31 [i_5 + 2]) : (arr_19 [i_5 + 3] [i_5 + 2])));
                    }
                }
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    arr_44 [i_5] [i_13] [1] [i_5] = (max((arr_26 [i_5] [i_5 + 3] [i_5 - 1]), (var_5 || var_14)));
                    arr_45 [i_13] = ((arr_38 [i_5 + 3] [i_5 + 3] [i_5] [i_5 - 1]) ? ((((var_4 ? var_2 : 212)))) : (49 - -40));
                    arr_46 [i_5 + 2] [i_5 + 1] [i_13] [i_5 + 3] = (arr_25 [i_5] [10]);
                    var_37 = (arr_29 [2] [i_6] [i_6] [i_13]);
                }
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    var_38 = ((((max((((arr_32 [i_5] [i_6]) >> (((arr_2 [i_6] [i_6]) - 7145)))), 1))) / (((arr_28 [i_5 - 1] [i_5 + 1] [i_5 + 2]) ? (arr_28 [i_5 + 1] [i_5 - 1] [i_5 - 1]) : (arr_28 [i_5 - 1] [i_5 + 3] [i_5 + 1])))));
                    var_39 = (max(var_39, ((max((arr_20 [i_5] [i_14] [10]), (((1357602166 - var_14) ? (arr_33 [i_5] [i_6] [i_14]) : (((arr_21 [2] [i_6] [i_14]) ? (arr_28 [i_6] [i_6] [i_6]) : (arr_48 [i_5]))))))))));
                    arr_49 [i_14] [i_6] [i_5] = ((!((var_1 == (arr_39 [i_5 + 1] [i_6] [i_14] [i_14])))));
                }
                for (int i_15 = 1; i_15 < 13;i_15 += 1)
                {
                    arr_52 [i_6] [i_6] [i_15] = (((var_15 * 4294967295) ? ((min((((arr_19 [2] [i_6]) ? (arr_19 [i_15 + 1] [i_6]) : var_4)), -11066))) : ((var_13 ? (arr_30 [i_5] [i_15] [i_15] [i_15 - 1] [i_15 + 1]) : (min(var_18, (arr_47 [i_5])))))));
                    var_40 = (max(var_40, var_13));
                    var_41 = ((1 ? (((+(((arr_35 [i_5] [i_5] [i_5 + 1] [i_6] [1]) ? (arr_20 [i_5 + 2] [i_6] [i_15]) : var_3))))) : (((min(0, var_9)) | (max(96, 11341102535401810618))))));
                    var_42 = (min(((-(~6917529027641081856))), (var_2 / var_3)));
                }
            }
        }
    }
    #pragma endscop
}
