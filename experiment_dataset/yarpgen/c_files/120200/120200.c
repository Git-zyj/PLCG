/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((var_9 ? var_9 : var_5)), var_5));

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_11 = (+((-(((arr_3 [i_0]) ? var_2 : (arr_1 [5]))))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            arr_6 [3] [i_1 - 1] [i_0] = 330849825;
            var_12 += (((arr_2 [i_0]) ? var_0 : 8745554230248875728));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_13 = (arr_5 [i_0 - 1] [i_0 + 2] [14]);
            arr_9 [i_0] [2] = 9701189843460675880;
            arr_10 [i_0] [i_0] [i_2] = (min((min((748752269 != 13624), (arr_1 [i_0]))), ((max((arr_7 [i_0 + 1]), 748752269)))));
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_3] = arr_11 [i_0 + 3] [i_3] [i_3];

            for (int i_4 = 1; i_4 < 24;i_4 += 1)
            {
                var_14 -= (arr_16 [i_4] [i_4] [i_0]);
                var_15 += ((~((-(arr_7 [i_0 + 3])))));
                var_16 = max(((((arr_0 [i_0 + 1]) || (arr_0 [i_0 + 2])))), ((((!(arr_5 [i_0] [17] [i_0]))) ? -var_7 : (arr_8 [i_3 - 1] [i_3 - 1] [i_4 + 1]))));
            }
            arr_18 [i_0] [i_0] [15] = ((+((var_3 ? (arr_16 [i_0 - 2] [i_3 - 1] [i_3]) : (arr_15 [6] [i_0] [i_3 - 1])))));
            arr_19 [i_0] [i_0] [i_0] = (min(((-(arr_15 [i_0] [i_0] [i_3]))), (((((max((arr_7 [i_3]), 27))) ? (((~(arr_5 [i_3] [i_3] [i_3])))) : (arr_7 [i_3]))))));
        }
        var_17 = (((((4538829927314669679 ? var_3 : (arr_7 [i_0 + 3])))) ? (arr_7 [9]) : (((arr_7 [i_0 - 1]) ? (arr_7 [i_0 + 2]) : (arr_7 [i_0 - 2])))));
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = var_2;
        var_18 += (min(330849825, 1501041602513437501));

        /* vectorizable */
        for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_19 = var_9;
            arr_26 [i_5] [1] = (arr_24 [i_5] [14] [i_5]);
            arr_27 [11] = (((arr_4 [i_6 - 1] [i_5 + 3]) ? (arr_4 [i_6 - 1] [i_5 - 2]) : (arr_4 [i_6 - 1] [i_5 + 2])));
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
        {
            arr_32 [i_5] [i_7] = 240;
            arr_33 [i_7 - 1] [i_5] [i_5 - 2] = (arr_15 [i_7] [i_5] [i_5]);
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_36 [i_5] &= (arr_2 [i_5 - 1]);
            var_20 = (((arr_1 [i_5 + 3]) | 1148173362247235836));
            var_21 = 1593633057;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_22 = ((arr_43 [i_5 - 2] [i_5 - 2] [23] [i_5 - 2]) ? (((arr_28 [i_10] [i_8] [i_5]) ? (arr_37 [i_5] [17] [17] [17]) : var_1)) : (arr_7 [20]));

                        for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                        {
                            var_23 = (min(var_23, (arr_45 [i_5] [i_8 - 1] [i_9] [i_10] [i_9] [3])));
                            arr_46 [i_5 + 1] [i_5 + 3] [i_8] [5] [i_11] [i_10] [i_10] = ((var_2 ? (arr_45 [i_5] [i_5 + 1] [i_8 - 1] [i_10] [i_11] [i_8 - 1]) : (arr_31 [i_5 + 1] [i_5 + 3] [i_8 - 1])));
                        }
                        for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                        {
                            arr_50 [i_12] = 31;
                            var_24 = (65534 - 12288);
                            arr_51 [i_5] [i_12] [i_12] [i_10] [i_10] [i_12] = ((((arr_41 [i_5]) - 12750128942074139568)) * (arr_2 [i_8 - 1]));
                        }
                    }
                }
            }
        }
    }
    for (int i_13 = 3; i_13 < 13;i_13 += 1) /* same iter space */
    {
        var_25 = (arr_44 [21] [i_13 + 1]);
        arr_55 [i_13 - 3] = ((((min((arr_35 [i_13] [i_13]), (arr_2 [i_13 + 3])))) ? 16746 : (arr_42 [i_13 + 1] [i_13] [i_13] [i_13 - 1])));
        arr_56 [i_13] = ((!(arr_31 [i_13] [i_13] [i_13])));
        arr_57 [i_13] = -var_1;
    }
    for (int i_14 = 3; i_14 < 13;i_14 += 1) /* same iter space */
    {

        for (int i_15 = 0; i_15 < 0;i_15 += 1)
        {
            var_26 = ((-(((arr_21 [i_14 + 2] [i_15 + 1]) ? (arr_21 [i_14 - 3] [i_15 + 1]) : (arr_21 [i_14 - 2] [i_15 + 1])))));
            arr_65 [i_14] [i_15] = ((-6766477903055515937 ? 16789289478692457273 : (min((((-20 ? 65529 : 1))), 1))));
            var_27 = (((arr_44 [7] [i_15]) ? ((~(arr_34 [i_14]))) : 1));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 16;i_16 += 1)
        {
            var_28 = (arr_25 [i_16]);
            var_29 = (((arr_58 [i_16]) > (arr_58 [i_14 + 2])));
        }
        /* LoopNest 3 */
        for (int i_17 = 3; i_17 < 13;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 16;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 16;i_19 += 1)
                {
                    {
                        var_30 += ((max(var_3, ((var_6 * (arr_31 [i_14] [i_18] [i_19]))))));
                        var_31 = (!var_6);
                    }
                }
            }
        }
        arr_74 [i_14] [i_14] = arr_69 [i_14] [1];
        var_32 = ((((min((arr_20 [i_14 + 2] [i_14]), (arr_20 [i_14 + 1] [i_14])))) * ((~(arr_63 [i_14 - 2] [i_14] [1])))));
    }
    var_33 = var_6;
    var_34 = var_2;
    #pragma endscop
}
