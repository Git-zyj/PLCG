/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_0;

    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_1] = ((-((var_6 ? ((((arr_1 [i_0]) || (arr_3 [i_0])))) : ((((arr_4 [10] [i_1] [i_1]) >= -32)))))));
            var_15 = ((5111 ? ((min(((1073709056 ? -9067145666637286181 : 1073709056)), (((159 | (arr_3 [i_0]))))))) : 11409432621422238036));

            for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_16 = ((~((((4 ^ (arr_3 [i_3])))))));
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_1] = (((arr_3 [i_0 - 2]) & 30332));
                        }
                    }
                }
                var_17 = ((((min((~18446744073709551596), (arr_10 [i_1] [i_0 - 1])))) || (((arr_8 [i_0] [i_0] [i_0]) < (arr_2 [i_2])))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_18 = 17466;
                            arr_21 [i_0] [i_0] [i_2] [i_0] [i_1] [i_1] = var_3;
                            arr_22 [i_0] [11] [i_1] [i_1] [i_1] [i_1] = 11409432621422238013;
                        }
                    }
                }
                var_19 = (min(var_19, var_12));
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
            {
                var_20 = (arr_13 [i_1]);
                arr_25 [i_1] = var_7;
                arr_26 [i_1] [i_1] = (min(((((((arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1]) & (arr_18 [i_0] [i_1] [i_0] [i_0])))) ? (((((arr_5 [i_0] [i_1] [i_7]) || (arr_9 [i_0] [i_1] [i_1] [i_1]))))) : (~var_10))), (((((arr_7 [i_0] [i_0] [i_0] [14]) ? (arr_8 [i_0] [i_0] [i_0]) : (arr_2 [i_1]))) & (((3586593465 ? (arr_7 [i_0] [0] [i_0] [0]) : var_0)))))));
            }
            arr_27 [i_1] = (((((arr_3 [i_0 - 1]) != (arr_3 [i_0 + 1]))) ? ((((113 < (arr_3 [i_0 - 2]))))) : (arr_3 [i_0 - 1])));
            arr_28 [i_1] [i_1] = (min(((((((arr_4 [11] [i_1] [9]) ? var_1 : (arr_13 [i_1])))) * 7)), (min(((~(arr_0 [i_1]))), ((1073709033 ? -17466 : (arr_20 [13])))))));
        }
        var_21 = (min(var_21, (((+(((arr_16 [i_0] [i_0] [i_0] [i_0]) & 17583279244640949335)))))));
        var_22 = (arr_18 [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 19;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            arr_41 [i_11] = ((((var_4 != (arr_7 [i_8] [i_9] [i_9] [i_9]))) || (((arr_30 [i_8]) || var_3))));
                            arr_42 [i_11] [i_11] [i_12] = ((51481 ? var_11 : ((var_6 ? (arr_2 [i_10]) : (arr_40 [i_8] [i_9] [i_8] [i_9] [i_8])))));
                            var_23 = (max(var_23, (arr_29 [11] [i_12])));
                            arr_43 [i_8] [i_9] [i_9] [i_10] [i_8] [i_11] = ((var_1 ? (((arr_13 [i_10]) ? (arr_31 [i_9] [i_9]) : (arr_1 [i_10]))) : (164 != var_0)));
                        }
                    }
                }
            }

            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                var_24 &= (arr_12 [i_8] [2]);
                arr_46 [i_9] [i_9] = ((var_1 == (arr_32 [i_9])));
            }
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                arr_51 [i_14] [i_14] [17] = ((arr_24 [i_8 - 1]) & ((((arr_48 [15] [15] [3] [16]) & (arr_30 [i_9])))));
                arr_52 [i_14] [0] = ((var_6 ^ 31060) ? (2377985635409650378 ^ var_4) : (arr_29 [i_8 + 1] [i_14 - 1]));
                var_25 *= (arr_38 [i_8] [4] [i_14] [9]);
                arr_53 [i_9] [i_14] = (((arr_33 [i_8 - 1] [i_14] [1]) ? (arr_33 [i_8 - 1] [2] [i_8 - 1]) : (arr_33 [i_8 - 1] [i_8 - 1] [i_8 - 1])));
            }
        }
        var_26 *= (((arr_45 [i_8] [i_8] [i_8] [i_8]) & (((arr_44 [i_8] [i_8] [17] [13]) ? var_7 : (arr_36 [i_8] [i_8] [i_8] [i_8])))));
    }
    for (int i_15 = 2; i_15 < 19;i_15 += 1) /* same iter space */
    {

        for (int i_16 = 1; i_16 < 19;i_16 += 1)
        {
            var_27 = ((-32767 - 1) && 480725326728599924);
            var_28 = (max(var_28, (((~((((((arr_29 [i_15] [i_15]) ? (arr_37 [i_15] [i_15] [i_15] [i_16]) : var_1))) % (min(179, (arr_20 [i_16]))))))))));
        }
        arr_59 [15] = ((16068758438299901233 ? (((arr_8 [i_15] [i_15] [i_15 + 1]) ? (arr_8 [i_15] [i_15] [i_15 + 1]) : (arr_8 [i_15] [i_15] [i_15 - 1]))) : (arr_31 [i_15] [i_15])));
    }
    var_29 = ((var_12 & (~var_7)));
    var_30 = var_7;
    #pragma endscop
}
