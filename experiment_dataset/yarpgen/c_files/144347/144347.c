/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((var_9 ? (~40) : (((arr_1 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : var_5))));
        var_10 = ((((((arr_1 [i_0 - 1]) ? (arr_0 [i_0 + 1]) : var_0))) ? ((min((arr_0 [i_0 + 1]), (arr_1 [i_0 - 1])))) : var_3));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_11 = ((arr_5 [9] [i_0 - 1]) ? 216 : (arr_5 [i_0 - 1] [i_0 + 1]));
            arr_6 [i_0] [i_0] = ((~(arr_5 [i_0 - 1] [i_0 - 1])));
        }
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_12 = (min(var_12, (((!((min((arr_7 [16] [i_0 - 1] [i_2 + 2]), var_6))))))));
                var_13 = ((var_4 ? (((arr_10 [i_0] [i_2 - 3] [i_0] [i_3]) ? var_7 : (arr_3 [i_2 + 1] [i_0] [i_2 - 1]))) : ((((-2684375040174030017 >= (!var_1)))))));
                arr_12 [i_0] [i_0] [i_0] = var_3;
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        var_14 = ((((((arr_3 [i_0 - 1] [i_0] [i_2 + 1]) ? (arr_3 [i_0 - 1] [i_0] [i_2 - 3]) : (arr_3 [i_0 - 1] [i_0] [i_2 - 2])))) ? (((arr_3 [i_0 - 1] [i_0] [i_2 + 1]) ^ (arr_3 [i_0 + 1] [i_0] [i_2 + 1]))) : 40));
                        var_15 = (min(1, ((~(~var_3)))));
                        var_16 = (max(var_16, (((0 ? (min(((var_1 ? -103 : var_4)), ((0 ? 216 : 1)))) : 28085)))));
                        var_17 = (min(((((arr_18 [i_0] [0] [i_0 - 1] [i_2 - 3] [i_2 - 2] [0]) || (arr_18 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))), ((~(arr_18 [i_0] [i_0 - 1] [i_0 - 1] [i_2 + 1] [i_2 + 1] [i_0])))));
                    }
                }
            }
        }
        var_18 ^= ((16492674416640 ? var_8 : (((((4294967295 ? (arr_14 [16]) : var_1))) ? (max(var_7, 2802488705)) : (arr_1 [i_0 + 1])))));
        var_19 = (!var_2);
    }
    for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    {
                        arr_29 [i_6] [i_9] [i_8 + 3] [i_7 + 2] [i_6] = (((var_2 ^ 2802488705) ? (arr_8 [i_7 - 2] [i_6 - 1] [i_8 + 2]) : ((max((arr_8 [i_7 - 3] [i_6 - 1] [i_8]), (arr_8 [i_7 - 2] [i_6 + 1] [5]))))));
                        var_20 = (max(var_20, 853506353));

                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_21 = ((((min(var_6, (arr_11 [i_6 - 1] [i_8 + 1])))) ^ (((((var_5 ? var_6 : var_5))) ? (min((arr_4 [i_6 - 1] [i_6]), var_6)) : ((min(-1949480687, 59)))))));
                            arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] = (min(((((arr_15 [i_7 - 1] [i_9 + 2]) ? (arr_8 [i_6 + 1] [i_8 + 3] [i_9]) : var_2))), ((~((0 ? var_7 : (arr_30 [i_10] [i_6] [i_8] [i_6] [i_6])))))));
                            var_22 = (min((arr_15 [i_7 - 1] [i_7 - 1]), (min(var_8, ((var_4 ? var_4 : (arr_27 [i_6] [i_8] [i_9])))))));
                            arr_33 [i_6] [i_6] [i_6] [i_6] [i_6] = (min((((((var_5 ? var_7 : var_8)) < (var_5 / var_4)))), (max((arr_11 [i_6 - 1] [i_9 - 1]), (arr_11 [i_6 + 1] [i_9 + 2])))));
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                        {
                            arr_38 [14] [i_8 - 1] [14] |= (((((arr_8 [i_6 - 1] [i_8 + 2] [i_9 - 1]) || (arr_20 [16]))) ? var_8 : ((((min(var_3, (arr_1 [i_7])))) ? (arr_3 [i_7 - 3] [14] [i_7 + 1]) : (arr_22 [i_6 - 1] [i_7 - 3])))));
                            arr_39 [i_6] [i_7] [1] [i_9] [i_11] [10] = (arr_14 [i_6]);
                            arr_40 [i_6] = (min((((((var_0 ? var_3 : var_9))) ? (((742309038 ? var_9 : var_2))) : 11)), (min(-103, 0))));
                            var_23 = (max(var_23, var_0));
                        }
                        for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
                        {
                            var_24 |= (max(var_1, (((((min(2928308282, 59))) == ((var_9 ? (arr_22 [i_6] [i_6]) : 4410698578174595879)))))));
                            var_25 = ((var_1 ? var_2 : (max(4359071264596062173, 145))));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 14;i_14 += 1)
            {
                for (int i_15 = 3; i_15 < 14;i_15 += 1)
                {
                    {
                        var_26 = (max(var_26, var_9));
                        var_27 = ((215 == (!-var_3)));
                        var_28 = (((((arr_18 [i_6 + 1] [i_6 + 1] [i_14 + 2] [i_15 - 3] [i_13] [i_14 + 2]) || ((!(arr_13 [i_6]))))) ? (((((!(arr_14 [i_6]))) ? (arr_47 [i_14 + 2] [i_13] [i_6 + 1] [i_15]) : ((var_8 ? 216 : 1))))) : var_3));
                        var_29 ^= ((var_5 ? 891052139 : ((var_9 ? (~59) : (min(var_6, (arr_36 [i_6 - 1] [12] [i_6 - 1] [i_6 - 1] [i_13] [i_6 - 1] [i_6 - 1])))))));
                        var_30 = (min(var_30, (((((min((arr_10 [i_6 - 1] [i_14 + 2] [i_14 + 2] [i_15 - 3]), (arr_24 [i_6 + 1] [i_14 + 1])))) ? ((((var_2 >= var_3) ? var_4 : (arr_30 [i_6] [i_6] [i_6] [i_13] [i_15 - 1])))) : 0)))));
                    }
                }
            }
        }
    }
    for (int i_16 = 1; i_16 < 16;i_16 += 1) /* same iter space */
    {
        var_31 &= (((~1048575) ? (min((arr_44 [i_16 + 1] [i_16 + 1] [i_16 - 1]), (((arr_52 [i_16] [10]) ? var_1 : 30)))) : (min(127, (arr_10 [5] [i_16] [5] [i_16 - 1])))));
        var_32 *= ((((var_4 ? var_8 : ((~(arr_9 [i_16] [i_16 - 1]))))) << ((((-123 ? var_8 : var_4)) + 537235610))));
        arr_56 [i_16] = var_0;
    }
    var_33 = var_9;
    var_34 = var_8;
    #pragma endscop
}
