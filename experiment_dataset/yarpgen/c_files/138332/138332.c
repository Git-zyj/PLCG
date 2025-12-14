/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 3400840674422964249;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((!(!-1622121760)));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = var_2;
                }
            }
        }
        var_19 = (((((-250 ? (arr_0 [i_0] [i_0]) : (((arr_5 [i_0]) ? var_2 : 1298345353))))) ? ((-(arr_2 [i_0] [i_0]))) : (((min(var_0, -914386010))))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 3; i_4 < 23;i_4 += 1)
        {
            arr_14 [12] [i_3] = (~24167);
            arr_15 [i_4] = ((!(arr_0 [i_3] [i_4 + 1])));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        var_20 = 24176;
                        arr_21 [i_5] = (((~87) ? (((((-(arr_3 [i_5])))) % (arr_2 [i_5 - 1] [i_4 - 2]))) : (arr_4 [i_4 + 1] [i_4 - 2] [i_5 - 1])));
                        var_21 = (min((((-24168 <= (arr_19 [i_3] [i_4 - 2] [i_5] [i_5 + 1] [i_4 - 2] [i_3])))), -4443844136820243459));
                        arr_22 [i_3] [i_4] [i_5] [i_5] [i_6] [i_6] = ((((arr_6 [i_4 - 1] [i_5 - 1] [1]) ? var_15 : (arr_6 [i_4 - 3] [i_5 - 1] [i_4]))));
                    }
                }
            }
        }
        arr_23 [i_3] = 914386010;
    }
    var_22 = var_11;

    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        arr_27 [i_7] [i_7] = arr_16 [i_7] [i_7] [i_7] [i_7];
        arr_28 [i_7] = (min(8456654697003599120, 10));
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
    {
        var_23 = 19024;
        arr_32 [i_8] [i_8] = (arr_16 [i_8] [1] [i_8] [i_8]);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 10;i_10 += 1)
            {
                {
                    var_24 = ((((1 ? 144 : ((min(var_4, 100))))) >> 23));
                    var_25 = ((-var_8 ? 3855779371 : var_13));

                    for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                    {
                        var_26 = ((203 + (((0 | 3722392263955813429) ? -5996182706746840160 : -7940))));
                        arr_42 [4] [i_9] [8] [i_9] [i_8] = (min((!1), (!4294967295)));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                    {
                        arr_45 [2] [i_9] = ((((var_7 ? 161 : -4257799835891689215))) ? 14857 : (arr_18 [i_9] [i_9] [i_10 + 1] [i_10] [i_12]));
                        arr_46 [i_9] [i_10] [i_9] = ((arr_10 [i_8] [i_8]) / ((0 ? (arr_26 [i_12]) : var_5)));
                        var_27 = ((-2112913090822016614 ? 8477 : 38157));
                        var_28 = (((arr_25 [i_8]) ? (arr_3 [i_9]) : (arr_35 [i_9] [5] [i_9] [i_9])));
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
    {

        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            arr_51 [i_14] = var_1;
            var_29 = 0;
        }
        /* vectorizable */
        for (int i_15 = 1; i_15 < 9;i_15 += 1)
        {
            var_30 = (arr_36 [i_13] [i_15] [i_13] [i_15 + 2]);
            arr_54 [i_13] [i_15 - 1] = (arr_53 [i_15 - 1]);
        }
        arr_55 [i_13] = (((min(29468, ((var_3 | (arr_5 [i_13]))))) - (((~(arr_25 [i_13]))))));
        arr_56 [i_13] [i_13] = (8456654697003599110 / 250);
    }
    for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
    {
        var_31 = (4193526281 << 251);
        arr_59 [i_16] = ((((-(arr_33 [i_16] [i_16]))) - (~8456654697003599110)));
        arr_60 [i_16] = var_0;
        arr_61 [i_16] [i_16] = ((((((~(var_14 > var_9))) + 2147483647)) >> (-13551 + 13552)));
    }
    #pragma endscop
}
