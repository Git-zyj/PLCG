/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_16 = ((!(((arr_2 [i_0 + 4]) != ((((arr_2 [i_0]) < 42411)))))));
        arr_3 [i_0] &= var_0;
    }
    var_17 += var_13;
    var_18 = ((var_2 * (((14 == 65106) ^ (max(var_14, var_15))))));
    var_19 ^= -var_13;

    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] [i_1] |= -42402;
        var_20 = (-var_3 ? var_9 : (23125 * 18446744073709551615));
        var_21 = ((-(min(31, var_4))));
        var_22 = ((((-var_10 ? ((-1 ? (arr_4 [i_1] [i_1]) : (arr_2 [i_1]))) : (var_8 ^ 1954513725))) < ((~(~16383)))));
        var_23 = -1;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        var_24 *= (((15 % 1954513725) ? ((var_15 ? 1025530890 : var_11)) : 16383));
        var_25 = (-(arr_8 [i_2 - 2]));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_14 [i_3] = ((((!(arr_9 [12]))) || ((max(23125, 3829386568)))));
        var_26 -= (((((-26568 % (arr_9 [0])))) % 606880420));
        arr_15 [i_3] &= ((((((((arr_7 [i_3]) || 1)) && (arr_8 [i_3])))) << ((((var_4 ? (arr_10 [i_3]) : 7706157876161489559)) - 1989))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 4; i_5 < 11;i_5 += 1)
        {
            arr_22 [i_5] [7] [i_4] = (((var_11 != -26575) >= ((-(arr_21 [3] [i_5])))));
            var_27 = (min(var_27, (((-(!32767))))));
            arr_23 [i_4] [i_4] [i_5] = ((~(arr_2 [i_4])));
        }

        /* vectorizable */
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            arr_26 [i_6] [i_4] = (1038713753619388396 - 140);
            var_28 -= ((1300847243 ? var_4 : (arr_8 [i_6 - 1])));
            arr_27 [i_6] [i_6] [i_4] = (5511933167861000392 ^ 1300847266);
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_29 = ((!(((-(arr_19 [8] [i_4] [i_7]))))));
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 9;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_38 [i_4] [i_7] [i_7] [i_8] [i_9] &= ((~(min(625295686, -3392430167652642981))));
                        arr_39 [i_8] [i_7] [i_8] |= ((!148) ? (((max((arr_25 [8] [i_7] [i_8 - 1]), (arr_25 [i_4] [i_7] [i_8 - 1]))))) : (((arr_25 [i_7] [i_8] [i_8 - 1]) ? 625295686 : var_12)));
                        var_30 += (min((((!((max(-124, 31)))))), (max((~3151640694259451259), var_2))));
                    }
                }
            }
            var_31 = ((!(arr_20 [i_4] [i_4] [i_7])));

            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                arr_42 [i_10] [i_10] [4] [i_10] = arr_17 [i_4];
                arr_43 [i_10] [i_7] [i_7] = (arr_36 [i_4] [i_4] [i_10] [i_7] [i_4] [i_4]);
            }
            for (int i_11 = 3; i_11 < 9;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    arr_49 [i_11] [i_12] = (max(((((((((arr_19 [i_4] [i_7] [i_4]) && -1)))) < var_15))), ((~((var_12 ? var_6 : (arr_35 [i_4] [i_7] [i_11] [i_12])))))));
                    var_32 += ((-var_12 * (((!(((var_5 + (arr_20 [i_4] [i_12] [i_11])))))))));
                    arr_50 [i_4] [i_11] [i_4] [i_4] = 8329;
                    arr_51 [4] [i_11] [i_12] = (max(((164 >> (17592186044415 - 238))), (arr_30 [i_11 - 1])));
                }
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    arr_54 [i_4] [i_4] [i_11] [i_4] = var_3;
                    arr_55 [i_4] [i_7] [i_11] [i_13] |= (!var_3);
                }
                var_33 -= -1288512659;
            }
        }
        var_34 = (max((!203038362), var_1));
    }
    #pragma endscop
}
