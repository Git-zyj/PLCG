/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_17 = (((!(arr_4 [i_0] [i_1 + 2] [i_2 + 4] [i_2 + 2]))));
                        var_18 = ((((!(arr_2 [i_3] [i_1]))) && ((((arr_7 [i_0] [i_2 + 2] [i_1] [i_1 + 3] [i_1]) ? (arr_7 [i_1] [i_2 + 2] [13] [i_1 + 3] [i_1]) : (arr_7 [i_0] [i_2 + 2] [i_0] [i_1 + 3] [10]))))));
                        var_19 ^= ((((min((arr_4 [i_0] [i_1 + 3] [i_2] [i_3]), 109)) > ((~(arr_7 [16] [i_1] [16] [12] [i_3]))))));
                        var_20 = ((~(!24745)));
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_21 = 3;
                        var_22 = (((arr_2 [i_1] [i_1 + 1]) ? (arr_2 [i_1] [i_1 + 3]) : (arr_2 [10] [i_1 + 3])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_23 = (((arr_6 [i_1] [i_2 - 2] [i_5]) & ((((arr_0 [i_0]) > var_3)))));
                        var_24 = (((var_10 & var_7) ? (arr_9 [2] [i_2]) : (((arr_8 [i_0] [19] [i_1] [i_2] [i_5] [i_2]) ? -120 : (arr_11 [i_0] [i_1] [7])))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_25 = (min((arr_3 [23]), ((~(arr_1 [i_2 - 3] [i_2 + 4])))));
                        var_26 += ((!(((((((!(arr_6 [i_6] [i_2] [i_1 + 2]))))) ^ (min(-4310404642319374085, 1)))))));
                        var_27 = ((((((min(-27081, -32752))) ^ (arr_13 [i_2] [i_2] [i_2 + 4] [i_2 - 3] [i_2 - 2] [i_2 + 2])))));
                        var_28 = ((((arr_2 [17] [i_1 + 3]) ? 18446744073709551615 : (arr_2 [i_6] [i_1 - 1]))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
    {
        var_29 = (~-1);
        var_30 = (((27101 == 131071) ? (arr_14 [i_7] [i_7]) : 511));
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
    {
        var_31 ^= (max((arr_15 [i_8]), (arr_10 [i_8] [i_8] [i_8])));

        /* vectorizable */
        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
        {
            var_32 = ((1 ? ((((arr_4 [i_8] [i_9] [1] [i_9]) ? (arr_11 [i_8] [i_8] [i_8]) : 27091))) : 18446744073709551610));
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 15;i_11 += 1)
                {
                    {
                        var_33 = (arr_11 [i_10 - 1] [i_10 - 1] [i_11 - 1]);
                        var_34 = (((((arr_24 [1] [i_9] [i_9]) & 3583407881238963163)) ^ (268435456 == 9223372036854775807)));
                        var_35 &= ((~(arr_1 [i_11 + 1] [i_11 - 1])));
                    }
                }
            }

            for (int i_12 = 1; i_12 < 16;i_12 += 1)
            {
                var_36 = (((((var_1 || (arr_2 [i_8] [i_9])))) % (arr_15 [i_8])));
                var_37 = ((-(!-26141)));
            }
            var_38 = (((arr_4 [i_8] [i_8] [i_8] [i_8]) ? 15 : (arr_10 [i_8] [i_8] [i_8])));
            var_39 = (arr_17 [i_8] [i_9]);
        }
        for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
        {
            var_40 = (arr_11 [i_8] [23] [i_13]);
            var_41 = (max(var_41, (arr_8 [i_8] [i_13] [i_13] [i_13] [i_13] [i_8])));
            var_42 = (min((((!((((arr_16 [i_8]) ? (arr_28 [i_8] [i_8] [i_8]) : (arr_16 [6]))))))), (arr_10 [i_8] [i_8] [18])));
        }
        for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
        {
            var_43 = 14;
            var_44 = (min(((-0 * (arr_21 [i_8]))), ((min((arr_10 [i_8] [i_8] [i_14]), (arr_30 [i_8] [i_14]))))));
            var_45 = (max(var_45, ((((-255 & (min(5, (arr_26 [i_14] [i_14] [4] [i_8] [i_8] [i_8])))))))));
        }
        for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
        {
            var_46 = (min(var_46, (((-(arr_14 [10] [i_15]))))));
            var_47 = (((((arr_15 [i_15]) ? (arr_15 [i_8]) : (arr_15 [i_8]))) < (arr_15 [i_15])));
            var_48 = ((!(((~(arr_16 [i_15]))))));
            var_49 = (((((min(-12334, (arr_32 [i_15]))))) & (((!((max(2926641434237077633, 27701))))))));
        }
        var_50 = (((arr_7 [i_8] [i_8] [i_8] [i_8] [i_8]) ? (((((!(arr_4 [8] [i_8] [i_8] [15]))) || (arr_20 [10] [i_8])))) : ((((var_14 ? 8 : 247))))));
        var_51 = var_11;
        var_52 = 14014760165734939085;
    }
    for (int i_16 = 1; i_16 < 9;i_16 += 1)
    {
        var_53 = ((!((max((arr_17 [i_16] [i_16 + 1]), (arr_17 [13] [i_16 + 1]))))));
        var_54 = (max(var_54, (((!((!(arr_32 [i_16 - 1]))))))));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 10;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 0;i_18 += 1)
            {
                {
                    var_55 = (arr_20 [14] [i_17]);
                    var_56 += (min(((~(arr_15 [i_17]))), ((((arr_15 [i_18]) > (arr_15 [i_16 + 1]))))));
                }
            }
        }
    }
    var_57 = (min(var_57, (min((min(var_0, ((min(7, 237))))), ((max((~var_11), (1 <= var_9))))))));
    var_58 = 3658920200877260037;
    #pragma endscop
}
