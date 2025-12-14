/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_3 / 1974127469) / ((max(437775406, -437775410))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = 14;
        var_19 &= ((+((-437775406 ? var_13 : (((((arr_3 [i_0] [i_0]) <= 0))))))));
        var_20 = (~2147483648);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = ((~((((max((arr_5 [i_1]), var_10)) <= 4294836224)))));
        arr_7 [i_1] = (((((((var_3 ? (arr_5 [i_1]) : var_4))) ? ((var_16 ? var_7 : (arr_4 [i_1] [i_1]))) : ((-(arr_4 [i_1] [i_1]))))) * (min((arr_4 [i_1] [i_1]), (((arr_4 [i_1] [i_1]) ? var_1 : (arr_4 [i_1] [i_1])))))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                arr_14 [i_3] [i_3] [i_2] [i_3] = ((-var_14 & ((1486 ? (((437775406 < (arr_12 [6] [6] [6])))) : ((((arr_4 [i_2] [i_2]) < var_4)))))));
                arr_15 [i_3] = ((!((max(var_8, 3)))));
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_19 [i_1] [i_1] [i_1] [i_1] = (!((min((arr_12 [22] [i_2] [i_1]), (arr_12 [4] [i_2] [i_2])))));
                arr_20 [i_1] [i_1] [i_4] = var_8;
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_21 = (max(var_21, ((((var_4 && 32740) || -437775406)))));
                arr_23 [3] [i_2] [i_5] = (arr_17 [i_2]);
            }

            /* vectorizable */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_22 *= ((!(arr_17 [i_7])));
                    arr_30 [i_1] [i_1] [i_1] [i_1] = 437775406;
                }
                for (int i_8 = 4; i_8 < 20;i_8 += 1)
                {
                    arr_33 [i_1] [i_1] [10] [10] [i_8] &= (arr_12 [i_8 + 3] [0] [i_8 + 3]);
                    arr_34 [i_8] [i_6] [i_2] [i_1] = (!(var_7 || var_16));

                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        arr_38 [i_1] [i_1] = var_16;
                        arr_39 [i_9] [1] [i_1] = (((-1719686453407932003 && -437775403) && (arr_17 [i_8 + 1])));
                        arr_40 [i_9] [i_8] [i_1] [i_1] [i_1] = arr_12 [i_1] [i_2] [i_6];
                        arr_41 [i_1] [i_1] [i_6] = (14653458271568847110 ? (arr_29 [i_6] [i_6] [i_6] [i_2] [i_1]) : -1542517714);
                        var_23 = (((var_4 ? 5 : -568968963783385936)));
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        arr_44 [i_1] [i_2] [i_6] [i_8 - 2] [i_2] = var_16;
                        arr_45 [i_1] [i_10] [i_1] [i_1] [i_1] [i_10] [i_6] = var_2;
                    }
                    arr_46 [i_8] [20] [20] [i_6] [i_1] [i_1] = -15842;
                }
                for (int i_11 = 1; i_11 < 19;i_11 += 1)
                {
                    arr_49 [i_1] [i_2] = (~var_4);
                    arr_50 [i_1] [i_6] [i_2] [i_1] = (((437775406 <= var_2) <= (arr_42 [i_11 + 3] [i_11] [i_11 + 2] [i_11 - 1] [i_11 + 3] [i_11 + 3] [i_11])));

                    for (int i_12 = 1; i_12 < 22;i_12 += 1) /* same iter space */
                    {
                        var_24 -= (arr_13 [i_6]);
                        var_25 = (max(var_25, var_5));
                    }
                    for (int i_13 = 1; i_13 < 22;i_13 += 1) /* same iter space */
                    {
                        arr_57 [i_13] [i_13] [i_6] [5] [i_13] [i_13] = (arr_18 [i_1] [i_1] [i_1] [i_1]);
                        var_26 = (((arr_12 [i_13] [i_13 - 1] [i_13 - 1]) & (arr_12 [i_11] [i_13 - 1] [i_13 - 1])));
                    }
                }
                var_27 = (max(var_27, var_5));
            }
        }
    }
    #pragma endscop
}
