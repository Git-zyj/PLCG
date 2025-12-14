/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (55 & 514780619);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = (((min(-45, -43))));
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) & var_11));
        arr_3 [i_0] [1] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = var_0;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = ((((((arr_1 [i_0] [i_1]) & (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((arr_0 [1]) & var_3))));
            arr_8 [i_0] = var_8;
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                arr_15 [i_2] = ((+(((8008280456563972535 <= var_3) & -39))));
                arr_16 [i_0] [i_0] [i_3] [i_2] = min(var_8, ((min(((var_4 & (arr_14 [i_0] [i_0] [i_0]))), (arr_12 [i_0] [i_2] [i_3])))));
            }
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_25 [i_0] [i_5] [9] [i_5] [i_2] [i_0] = (arr_17 [i_0] [10] [i_4] [2]);
                    var_14 ^= (!var_10);
                    arr_26 [i_0] [i_4] [i_4] [i_2] [i_5] [i_2] = (min((((((arr_22 [i_0] [0] [i_5]) ? (arr_12 [i_4] [i_4] [i_4]) : (arr_23 [i_5]))))), ((((arr_19 [i_0] [i_0] [i_0] [i_0]) < var_9)))));
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_32 [i_0] [i_4] [i_6] [i_7] = var_7;
                        arr_33 [i_0] [i_0] [2] [i_0] [7] = (arr_29 [i_0] [i_2] [i_2] [6] [6] [i_7]);
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [0] &= (((((var_9 && (arr_20 [i_0])))) / ((21799 ? 82 : 6))));
                        arr_35 [i_0] [i_0] = (((((arr_13 [9] [i_2] [i_2] [i_2]) % (arr_28 [i_6] [i_6] [i_6]))) < (arr_10 [i_0])));
                    }
                    var_15 = (min(var_15, (((((+((max((arr_22 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_2] [i_4]))))))) && var_1))));
                    var_16 ^= (((((var_0 * (((var_9 ? (arr_22 [i_4] [i_4] [i_4]) : (arr_11 [i_0] [i_0] [i_0] [i_6]))))))) ? (arr_18 [i_0] [i_0] [i_0] [i_0]) : ((((arr_0 [i_2]) - var_10)))));
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_17 = ((max(((min(39, -6))), ((var_11 & (arr_6 [i_0] [i_2] [i_4]))))) * (((min((((arr_9 [i_9] [i_9] [11]) < (arr_37 [i_8] [i_8] [i_4] [i_0] [i_8]))), (((arr_9 [i_0] [i_0] [i_0]) && (arr_20 [i_0]))))))));
                            arr_40 [i_8] = (((((((arr_28 [4] [4] [i_9]) || (arr_22 [i_2] [i_2] [i_4]))))) ? (max(55, (arr_6 [i_4] [i_2] [i_4]))) : (((max((arr_14 [i_0] [i_2] [i_0]), (arr_14 [i_0] [i_2] [i_4])))))));
                        }
                    }
                }
            }
            arr_41 [i_0] [i_0] = (min(((((arr_24 [i_0] [4] [i_0] [i_2]) % (arr_24 [8] [i_2] [8] [i_2])))), (min(var_6, (arr_27 [i_2] [i_2] [i_2] [5])))));
        }
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        arr_44 [i_10] = (arr_42 [i_10] [i_10]);
        arr_45 [i_10] = (max(((((((arr_43 [i_10] [13]) ? var_1 : var_1)) == (((((arr_43 [i_10] [i_10]) == var_7))))))), (+-124)));
        var_18 = (((3170 >> (-323789238 + 323789258))));
        arr_46 [i_10] = max(((((arr_43 [i_10] [i_10]) <= (arr_43 [i_10] [i_10])))), ((-((-(arr_42 [i_10] [i_10]))))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        arr_49 [i_11] = ((~(arr_30 [i_11] [i_11] [i_11] [11] [i_11] [i_11])));
        var_19 = (min(var_19, (((var_11 % (arr_36 [i_11] [i_11] [i_11]))))));
        var_20 = (arr_28 [1] [i_11] [i_11]);
    }
    #pragma endscop
}
