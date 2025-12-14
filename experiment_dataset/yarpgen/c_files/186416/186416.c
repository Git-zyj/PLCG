/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (((((-4896593661868106795 < (1 + 119)))) < (((47 / var_15) ^ ((var_6 ? 1879048192 : -55))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = ((((arr_0 [22] [i_0]) + 13550150411841444820)));
        var_19 -= ((~(arr_0 [8] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (arr_2 [i_1 - 1]);

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    arr_14 [i_1] [i_2] [i_1] [i_1] = (((((var_0 ? 0 : var_2))) + (13550150411841444820 | 8126464)));
                    arr_15 [i_2] [i_2] = (59 ? -18411 : 1);
                }
                arr_16 [0] [0] &= ((!((((arr_0 [i_2] [3]) ? (arr_3 [i_1] [i_2]) : (arr_9 [0] [i_2] [0]))))));

                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    var_20 = (min(var_20, (var_0 % 6675289933791472266)));
                    var_21 = (((arr_19 [i_1 + 1] [i_2]) + var_5));
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 9;i_7 += 1)
                    {
                        {
                            var_22 = (max(var_22, 23));
                            arr_27 [i_2] [i_6] = var_12;
                            var_23 = var_7;
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_24 = ((((147 ? var_6 : 2552378281371794754)) <= -6675289933791472268));
                var_25 = ((((-429256766 ? var_5 : 117))) ? 0 : (arr_22 [i_1 + 1] [i_1 - 1] [i_2]));
                var_26 *= (arr_12 [i_1 + 1] [i_1 + 1] [i_8]);
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {
                        var_27 = -1422678436;

                        for (int i_11 = 1; i_11 < 9;i_11 += 1)
                        {
                            var_28 = (min(var_28, ((((1983681233 ? var_16 : (arr_22 [2] [i_9] [i_9])))))));
                            var_29 = (min(var_29, var_10));
                        }
                        var_30 -= 0;
                    }
                }
            }
            var_31 = -11;

            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                arr_40 [i_12] [i_2] [7] [i_2] = ((1 < (((arr_8 [i_12] [i_2]) >> (var_16 - 1017390560144805931)))));
                arr_41 [i_2] [i_2] = (~59);
            }
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {

                for (int i_14 = 2; i_14 < 10;i_14 += 1)
                {
                    arr_50 [1] [1] [i_13] [i_13 - 1] [i_2] = 13550150411841444821;
                    var_32 = (~var_8);
                    arr_51 [i_2] = ((!(arr_1 [i_1])));
                }
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    arr_56 [i_2] = (((170033837 << 0) != -333919629));
                    var_33 = (min(var_33, -786875259125579975));
                    var_34 -= (!8604204181460729820);
                    arr_57 [i_2] [i_2] [i_2] [4] [i_2] = (arr_1 [i_1 + 1]);
                }
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    arr_60 [i_1] [i_1] [i_2] = ((((!(arr_43 [i_2] [i_2] [i_2]))) && -14));
                    var_35 = (((arr_23 [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1] [i_2] [i_1]) ? (arr_49 [i_13 - 1] [i_13] [i_13 - 1] [i_16] [i_2]) : var_9));
                }
                var_36 = (min(var_36, (arr_6 [0] [i_13 - 1])));
                var_37 = (min(var_37, var_8));
            }
            for (int i_17 = 2; i_17 < 10;i_17 += 1)
            {
                var_38 = (min(var_38, (!var_1)));
                var_39 ^= ((((arr_29 [i_17]) <= (arr_55 [i_1 - 1] [i_17] [i_17] [i_17] [i_17]))));
                var_40 = (((arr_25 [i_17 - 1] [i_2] [i_1 + 1] [i_1] [i_1 + 1] [i_2] [i_1]) ? -1983681234 : (arr_24 [i_2])));
                var_41 = (((arr_28 [i_2] [i_17 - 2] [i_2]) ? (arr_47 [i_17 - 2] [i_17 - 2] [i_17 - 1] [i_2]) : (arr_28 [i_2] [i_17 - 1] [i_2])));
            }
            var_42 = ((-((((arr_45 [i_2]) == 639101535240182786)))));
        }
    }
    #pragma endscop
}
