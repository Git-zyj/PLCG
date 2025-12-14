/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_19 = (max(var_19, ((min((((arr_1 [i_0]) | (min(8345767483234072063, var_10)))), -22350)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((39033 ? (((arr_4 [i_1] [4]) ? 12857 : var_16)) : var_13));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_20 += ((255 | (arr_5 [i_1])));
            arr_9 [i_1] [i_2] = (((((arr_5 [i_1]) ? 4 : (arr_3 [11]))) < (((((arr_4 [i_1] [i_1]) || 11))))));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_21 = (arr_4 [i_3] [i_1]);
            arr_12 [5] [i_1] [i_1] = ((((((~(arr_5 [4]))) + 2147483647)) << (((arr_11 [8] [i_3]) - 1))));
            var_22 = (max(var_22, var_2));
        }
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        var_23 = (min(((((arr_11 [i_4] [9]) <= (((((arr_8 [i_4] [i_4] [i_4 - 1]) >= var_6))))))), ((~((var_3 ? -9 : (arr_8 [i_4] [i_4] [i_4])))))));
        var_24 = ((min(var_1, ((min(61962, 1762878063))))));
        var_25 -= ((max((arr_3 [i_4]), 0)));
        var_26 &= (arr_10 [i_4 + 3] [i_4]);
    }
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        var_27 = (max(var_27, (arr_5 [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    var_28 += (max((((!var_12) ? 63637 : (~var_10))), var_2));
                    var_29 += ((-((15 ? (arr_1 [i_5 + 2]) : var_17))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                        {
                            var_30 += var_17;
                            arr_32 [i_5] [i_5] [i_5] [i_5] [4] [i_11] &= (((~5464333444785139223) ? 0 : ((var_0 ? var_12 : (arr_21 [i_11])))));
                            var_31 &= (((((-(arr_30 [i_5] [i_5])))) ? 1 : (2060702568 - 9)));
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                        {
                            arr_35 [i_5] [i_8] [i_5] = var_18;
                            arr_36 [i_5] [i_5] [i_10] [i_10] = ((63634 << (((arr_5 [i_9]) - 216))));
                            arr_37 [i_5] [9] [i_9] [i_10] [i_12] = ((min((2060702568 && 17867093720683851524), ((var_13 ? var_7 : 2532089234)))));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                        {
                            var_32 = (((arr_10 [i_9 + 1] [i_5 - 2]) | (arr_20 [i_9 + 1] [i_13] [i_5 + 1] [i_10])));
                            var_33 = ((~(arr_26 [i_5] [i_9] [12])));
                            arr_40 [i_13] &= (arr_3 [i_9 - 1]);
                            arr_41 [8] [1] [i_5] [1] = (arr_17 [i_5] [0] [i_13]);
                            arr_42 [i_13] [i_5] [i_9] [i_10] = (1762878041 ? (arr_4 [i_5] [i_5]) : var_4);
                        }
                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            var_34 ^= (arr_17 [i_5] [i_8] [i_14]);
                            var_35 = (max(var_35, ((max(((~(!-1))), (((max(1762878062, 99)))))))));
                            var_36 = ((1899 ? var_1 : (((arr_24 [i_5]) - (arr_21 [i_5])))));
                        }
                        arr_45 [i_5] [i_8] [i_9] [i_5] = (arr_18 [i_9] [i_9] [i_9]);
                        var_37 = var_13;

                        /* vectorizable */
                        for (int i_15 = 2; i_15 < 11;i_15 += 1)
                        {
                            arr_48 [i_5 + 3] [12] [12] [6] [i_5 + 3] [i_5] [i_15] = 99;
                            var_38 = (((((arr_3 [i_8]) ? (arr_15 [i_5]) : 133))) >= (((arr_31 [i_15]) | (arr_21 [i_5]))));
                        }
                        for (int i_16 = 0; i_16 < 14;i_16 += 1)
                        {
                            arr_52 [i_5] [i_8] [i_5] [i_5] [0] = (((min(var_17, (arr_1 [i_5 + 2])))));
                            var_39 += max((arr_3 [i_16]), ((((1 || 126) >= ((((arr_18 [i_10] [i_10] [i_10]) >= (arr_0 [i_8]))))))));
                        }
                    }
                }
            }
        }
    }
    var_40 = (min(var_40, -var_14));

    for (int i_17 = 0; i_17 < 12;i_17 += 1)
    {
        var_41 = (max(var_41, (((((((min(var_0, 65535))) ? 92 : ((var_13 ? -7484985139257732648 : (-2147483647 - 1)))))) ? ((min(1, (arr_46 [i_17] [i_17] [i_17] [i_17] [i_17])))) : ((min(var_6, (min(var_2, -1)))))))));

        /* vectorizable */
        for (int i_18 = 2; i_18 < 10;i_18 += 1)
        {
            var_42 += (arr_11 [i_17] [i_17]);
            var_43 &= 58410;
        }
        var_44 ^= (~26103);
    }
    for (int i_19 = 0; i_19 < 20;i_19 += 1)
    {
        var_45 = (((~(arr_14 [i_19]))));
        var_46 ^= (min((min((min(18446744073709551611, 61974)), -99)), (((!(arr_62 [i_19] [i_19]))))));
        arr_63 [i_19] = ((-var_11 ? (((min(2970, (arr_8 [i_19] [i_19] [10]))))) : ((((min(-2147483646, (arr_3 [i_19])))) ? ((((arr_3 [i_19]) ? var_4 : -2980))) : (arr_5 [i_19])))));
    }
    #pragma endscop
}
