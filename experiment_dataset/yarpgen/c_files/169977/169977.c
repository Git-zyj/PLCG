/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = ((!(((var_7 ? 12795269350672169918 : var_10)))));
        arr_2 [i_0] &= ((((var_8 ? var_8 : var_13)) < (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_17 = (min(var_17, (arr_4 [14])));
        var_18 = ((+(((arr_4 [i_1]) + (arr_3 [i_1])))));
        var_19 ^= (~(((arr_5 [i_1]) % 1577920567)));
        arr_6 [i_1] = ((arr_4 [i_1]) ? 680550813 : (arr_5 [i_1 - 1]));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_20 ^= (arr_14 [i_1] [i_2] [5] [i_4] [i_1]);
                            var_21 = (arr_12 [i_1] [16] [i_3] [i_1]);
                        }
                        var_22 -= (arr_11 [i_1] [i_1 - 1] [i_1] [i_1 - 1]);

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_23 |= (((arr_10 [i_2 - 1] [i_2 - 1] [i_4] [i_4]) ^ (((arr_9 [i_2] [i_4]) ? (arr_15 [i_1] [i_2] [i_3] [i_4] [i_3] [i_4]) : var_1))));
                            var_24 = var_2;
                            arr_21 [i_1] [i_2] [15] [i_3] [i_1] [15] = ((arr_9 [i_1 + 1] [i_1 - 1]) ? (arr_9 [i_1 - 1] [i_1 - 1]) : (arr_5 [i_1 - 1]));
                            var_25 |= (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]);
                            var_26 = (min(var_26, (((1 ? var_6 : (arr_19 [i_4 - 3] [i_3] [i_3] [i_6] [i_6]))))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_24 [i_3] [i_3] [i_3] [i_1] [i_7] = ((((((arr_17 [i_4] [i_4] [i_4] [i_4 + 1] [i_4]) ? (arr_8 [i_1]) : 2096527757))) || 10381309839143232739));
                            arr_25 [i_1] [i_1] [i_2] [i_1] = ((-(98 || -99)));
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_29 [i_1] = (!-921838440);
                            var_27 -= ((!(((~(arr_15 [i_1] [i_2] [i_2] [i_2] [i_3] [18]))))));
                            var_28 -= ((-(((!(arr_3 [i_3]))))));
                            arr_30 [i_1] [i_8] [i_8] [i_8] [i_8] [i_1] [i_8] = (arr_28 [i_4]);
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 3; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    {
                        var_29 *= ((((var_13 ? (arr_22 [i_11] [i_10 - 1] [i_9] [i_11]) : (arr_22 [i_12] [i_10 - 2] [i_12] [i_12]))) / ((-(arr_22 [i_11] [i_10 - 1] [i_11] [i_11])))));
                        var_30 = ((((min(var_8, var_6))) ? var_6 : ((-(!10926)))));
                        var_31 = ((((34315 - (max((arr_13 [i_9] [i_9] [i_9] [i_9]), (arr_5 [i_10 - 1]))))) < ((1598796300 ? var_14 : 2746))));
                        var_32 = (min(var_32, ((min((!222), (arr_17 [i_9] [i_9] [i_9] [i_9] [i_9]))))));
                    }
                }
            }
        }
        var_33 = ((~((~((~(arr_8 [i_9])))))));
        arr_42 [i_9] = var_12;
        var_34 = (max((((arr_27 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) ? (arr_15 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) : (var_8 != var_15))), (max(((((arr_15 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) && 23872))), (arr_41 [i_9] [i_9])))));
        var_35 = (max(-238, (arr_33 [i_9])));
    }
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        var_36 = ((~(((((arr_44 [i_13] [i_13]) && var_6)) ? var_0 : -676823725))));
        var_37 = (max((arr_45 [i_13] [i_13]), (~var_5)));
    }
    var_38 = ((((var_13 || ((min(var_11, 24189))))) ? var_6 : ((17530359379800318775 ? 1689783054 : -767924364))));
    var_39 -= (-5 >= (((((~var_1) + 2147483647)) << (var_12 - 1))));
    var_40 |= (~var_3);
    #pragma endscop
}
