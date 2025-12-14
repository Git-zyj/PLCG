/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [1] = ((min((arr_1 [i_0]), (arr_1 [i_0]))));
        arr_3 [i_0] = (arr_0 [14]);
        arr_4 [i_0] [i_0] = var_11;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            arr_13 [i_1] [i_2] [i_1] = ((arr_11 [i_1] [i_1]) == (arr_5 [i_2 - 1]));
            var_14 = arr_1 [i_2 + 2];
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_24 [i_3] [i_4] [i_1] = (arr_18 [i_2 - 1] [i_2 + 1]);
                            arr_25 [i_4] [i_1] [i_1] [i_1] = (((arr_21 [i_5] [i_4] [i_3] [i_2 + 2] [i_1]) ? ((((var_6 == (arr_14 [i_4] [i_3] [i_2 + 1] [i_1]))))) : (((arr_15 [12] [i_1] [i_3]) ? (arr_0 [i_1]) : var_10))));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            arr_28 [i_1] [i_6] = ((-(arr_10 [i_1] [i_6])));
            var_15 = (~(arr_1 [i_1]));
        }
        arr_29 [i_1] [i_1] = (((arr_16 [10] [10]) & (arr_26 [i_1])));
        var_16 = var_0;
        var_17 = (min(var_17, (((arr_16 [i_1] [i_1]) ? (arr_10 [i_1] [i_1]) : (arr_27 [i_1])))));
    }

    /* vectorizable */
    for (int i_7 = 2; i_7 < 18;i_7 += 1)
    {
        var_18 = ((-(((!(arr_30 [i_7] [i_7]))))));
        var_19 = (min(var_19, (((-(arr_31 [i_7 - 2] [i_7 - 2]))))));
    }
    for (int i_8 = 1; i_8 < 18;i_8 += 1)
    {

        for (int i_9 = 3; i_9 < 20;i_9 += 1)
        {
            arr_37 [18] [i_9 + 2] [i_9] |= (((arr_31 [i_8] [i_9]) > (((arr_35 [i_8 - 1] [i_8 + 1] [i_9 + 1]) ? var_1 : ((max(8393877764857708749, 32063)))))));
            arr_38 [i_9] [i_9] = ((~(arr_35 [i_8 + 2] [i_8 - 1] [i_9 - 3])));
            var_20 |= var_11;
        }
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            arr_41 [i_10] = ((((((arr_32 [i_8 + 1] [i_8]) ^ ((~(arr_30 [i_8 + 4] [i_10])))))) ? (((arr_32 [i_8 + 4] [i_8 + 3]) ? (arr_34 [i_8 + 3]) : (arr_32 [i_8 + 4] [i_8 + 3]))) : ((-(arr_35 [i_8 + 4] [i_8 + 2] [i_10])))));
            arr_42 [i_10] [i_10] [i_8] = (((((54 ? 54 : 12076667693268941537))) ? (((arr_36 [i_10] [i_10]) & (arr_36 [i_10] [i_10]))) : var_13));
            var_21 = (min(var_21, ((((arr_34 [i_10]) == ((~(arr_36 [0] [0]))))))));
        }
        arr_43 [i_8] = (max(((min(-6947782018608050649, 28))), var_3));

        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            arr_47 [i_8 + 1] [i_8] [i_11] |= (((((((var_7 ? (arr_36 [i_8] [i_11]) : (arr_35 [i_8] [i_11] [i_11])))) && (((arr_36 [i_11] [i_11]) >= (arr_45 [i_8]))))) ? (max(1, 6947782018608050637)) : (max((((~(arr_31 [i_8 - 1] [i_11])))), var_2))));
            arr_48 [i_8] [i_11] = (((((arr_32 [i_8 + 3] [i_8 + 3]) ? (arr_45 [i_8 + 3]) : (arr_45 [i_8]))) == (arr_39 [i_8 + 3] [i_11] [i_11])));
        }
        for (int i_12 = 2; i_12 < 21;i_12 += 1)
        {
            var_22 = (min(var_22, var_1));
            arr_51 [i_8 + 4] [i_12] = ((((max(var_9, -57))) ? (arr_44 [i_8 + 1] [i_12 + 1]) : ((((max(var_1, (arr_33 [i_8 + 1])))) ? (arr_32 [i_12 - 1] [i_8 + 4]) : var_13))));
        }
        for (int i_13 = 2; i_13 < 20;i_13 += 1)
        {
            arr_54 [i_13] [i_13] = (arr_49 [i_8]);
            var_23 = (max(var_23, (((~(((((var_9 ? (arr_45 [i_8]) : (arr_49 [i_8 - 1]))) > ((((arr_52 [11]) > (arr_31 [i_8 + 2] [i_13]))))))))))));
            var_24 = (min((((arr_45 [i_8 + 4]) >= (arr_45 [i_8 - 1]))), (arr_45 [i_8 + 1])));
            arr_55 [i_13] [i_13] = ((+((((arr_45 [i_13]) == (arr_46 [i_8] [i_13 + 2] [i_13]))))));
        }
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            var_25 = ((+((-((var_0 ? (arr_30 [i_8] [i_14]) : (arr_40 [i_14] [i_14])))))));
            arr_58 [i_8] = ((((((!(arr_49 [i_8 + 2]))))) > (arr_40 [i_14] [i_14])));
        }
        var_26 = (max(((((((arr_40 [6] [6]) ? var_12 : var_7))) ? ((~(arr_40 [i_8 + 3] [6]))) : ((((arr_49 [i_8 + 1]) ^ (arr_45 [i_8])))))), (((var_11 * (~67))))));
    }
    #pragma endscop
}
