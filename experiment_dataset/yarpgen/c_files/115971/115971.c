/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max((!var_4), var_12);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_6 [8] [5] [5] = 66;

            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                var_16 &= (((var_7 <= 85) ? (arr_1 [i_0]) : (arr_2 [i_2 + 3])));
                var_17 = (((-(arr_2 [1]))) - (arr_1 [i_2 + 1]));
                var_18 = ((((arr_1 [i_2]) ? var_5 : (arr_9 [i_0] [i_1] [i_2]))));
            }
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        arr_17 [i_3] [i_4] [i_3] = (arr_4 [i_0]);
                        var_19 = (((var_3 > var_12) ? ((1044480 ? 14 : 0)) : var_14));
                        var_20 = (((54983 <= 22183) ? (((!(arr_14 [i_0] [i_3] [i_4] [i_5])))) : (5839 || 33554428)));
                        arr_18 [i_3] [i_3] [i_3] [4] [i_3] = var_10;
                    }
                }
            }
            var_21 = (!-62);
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_22 = 15;
            var_23 = ((!(arr_1 [i_0])));
            arr_21 [i_0] [i_0] [i_0] = 25;
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        var_24 = 3463736886;
                        var_25 = (min(var_25, (!var_11)));
                        arr_30 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((((4261412866 ? 10553 : 13113415672708065086)) + (arr_24 [i_7] [i_7])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        arr_38 [i_7] [i_7] [i_7] [i_7] = (((arr_7 [i_0] [i_0] [i_0]) << (((arr_7 [i_0] [i_0] [i_10]) - 22386))));
                        arr_39 [i_7] [3] [i_7] [i_7] = (((arr_9 [i_0] [i_10] [i_11]) ? var_2 : 0));
                    }
                }
            }
            var_26 = ((((!(arr_5 [i_0] [i_7] [i_7]))) ? ((((arr_37 [i_7]) ? var_9 : var_10))) : (arr_20 [i_0] [i_7])));
        }
        arr_40 [i_0] [i_0] &= var_14;
    }
    /* vectorizable */
    for (int i_12 = 3; i_12 < 18;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 3; i_13 < 17;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 18;i_14 += 1)
            {
                {

                    for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
                    {
                        var_27 = ((32767 ? -10848 : 5333328401001486529));
                        arr_49 [i_12] = arr_48 [i_12 - 1] [1] [i_13] [1] [i_15];
                        var_28 = ((-((4294967295 ? 2279 : (arr_47 [i_14])))));
                        var_29 ^= ((((!(arr_47 [i_12 - 3]))) ? (!66) : (((arr_45 [0] [i_14] [i_13 - 1]) ? (arr_44 [i_14] [i_15]) : 255))));
                        arr_50 [i_12] [i_13] [i_14] [i_14] = ((-(arr_48 [i_12] [i_12 - 1] [i_13 + 2] [6] [i_15])));
                    }
                    for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
                    {
                        arr_53 [i_12 - 3] [i_13] [i_12 - 3] [i_12 - 3] = (-22 >= var_1);
                        arr_54 [i_12] [i_13] [i_14] [12] [i_16] = (-14967 ? 54980 : 20);
                        var_30 = (((((21 ? 54963 : 9223372036854775807))) ? (!4294967295) : ((0 ? 1023 : (-9223372036854775807 - 1)))));
                    }
                    arr_55 [i_12] = var_7;
                }
            }
        }
        var_31 += (329244270 | 9223372036854775807);

        for (int i_17 = 2; i_17 < 17;i_17 += 1)
        {
            var_32 = (((~var_2) | ((var_14 ? (arr_46 [i_12 + 1] [i_17] [i_17]) : -9223372036854775791))));
            var_33 = (max(var_33, ((((arr_57 [i_12 + 1]) * (arr_57 [i_12 + 1]))))));
        }
        for (int i_18 = 1; i_18 < 17;i_18 += 1)
        {
            arr_62 [i_12] [15] = (((arr_45 [i_12] [i_12 + 1] [i_18 + 1]) == (arr_56 [i_18] [i_18 + 1] [i_18 - 1])));
            arr_63 [9] [9] [9] = 5333328401001486524;
        }
    }
    #pragma endscop
}
