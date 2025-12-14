/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                var_15 = (max(var_15, 1993034729));
                arr_6 [i_1] = (((((var_13 < (arr_0 [i_0 + 2] [i_2]))))) & (arr_1 [i_0 + 3] [i_0 + 3]));
                arr_7 [i_1] = (255 ? 2308501802 : (arr_3 [i_1] [i_1]));
            }
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                var_16 = (((((((((arr_5 [i_1] [i_1]) ? var_11 : (arr_1 [i_1] [i_3 + 1])))) ? 1986465493 : (((max(55, var_4))))))) ? (((!((!(arr_4 [i_0] [i_1] [i_1] [i_3])))))) : (!var_2)));
                arr_10 [i_1] = ((!((max(var_9, (arr_5 [i_1] [i_0 - 1]))))));
                var_17 += ((((!((min(-6509, (arr_3 [i_3] [i_3 - 1])))))) || ((max(((min(var_2, var_5))), (((arr_5 [i_3] [i_3]) ? var_9 : (arr_4 [i_0] [i_1] [i_0] [i_3]))))))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_18 = (((arr_1 [i_0 - 2] [i_0 + 2]) ? (arr_12 [i_1]) : var_14));
                arr_14 [i_1] [i_1] [14] [i_4] = (arr_5 [i_1] [i_4]);
            }
            arr_15 [i_1] = ((!((!((min(55, (arr_4 [i_0] [i_0 + 3] [i_1] [i_0]))))))));
            arr_16 [i_1] [i_1] = (arr_1 [i_1] [i_0]);
        }
        var_19 &= (min(((((((!(arr_11 [i_0] [i_0] [i_0]))))) % var_10)), (((arr_4 [1] [18] [i_0] [i_0 + 2]) ? ((((!(arr_8 [i_0 + 3] [6] [i_0] [i_0]))))) : (arr_12 [i_0])))));
        arr_17 [i_0] = ((var_6 >= (max((var_11 >= 55), var_10))));

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_20 = (max(var_20, var_12));
            var_21 -= (max(0, 237));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_22 [i_0] |= (var_2 ? (arr_21 [7] [i_6] [i_0 - 2]) : ((var_8 ? 0 : (arr_4 [i_0] [i_0] [i_6] [i_6]))));
            arr_23 [5] = (((arr_4 [i_6] [i_6] [i_6] [i_0]) != (arr_4 [i_0] [i_6] [i_6] [i_0])));
            arr_24 [i_0] [i_0] [i_6] = (((var_1 != -814829925) < (((!(arr_3 [i_0] [i_6]))))));

            for (int i_7 = 4; i_7 < 19;i_7 += 1)
            {
                arr_27 [i_0] [i_6] [i_7] &= ((!(arr_19 [i_7 + 2] [i_0 + 2] [i_0 + 2])));
                arr_28 [i_7] [i_7] = (arr_2 [i_7]);
                arr_29 [i_7] = var_2;
                arr_30 [i_6] [i_7] = ((!((((arr_4 [i_0] [1] [i_7] [i_7]) | 9120)))));
            }

            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                arr_35 [i_0] [i_6] [i_0] = (((arr_11 [i_0] [i_6] [i_6]) / ((((arr_21 [i_8] [i_8] [i_8]) ? (arr_5 [i_6] [i_6]) : (arr_1 [i_0] [i_8]))))));
                arr_36 [i_8] [i_6] [i_6] [i_0] = ((arr_26 [i_0 + 2] [i_0] [i_8]) ? var_10 : (arr_26 [i_0] [i_6] [i_6]));
                var_22 *= ((((((arr_3 [i_6] [i_6]) ? (arr_32 [i_0] [2] [1]) : (arr_31 [i_0] [19])))) ? 3 : 21));
                arr_37 [i_0] = (((arr_26 [i_0] [i_6] [i_6]) >> (((((arr_11 [i_8] [15] [i_0]) - (arr_0 [i_0] [i_6]))) + 823886313693061057))));
            }
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                arr_41 [15] [i_0] [i_6] [i_0] = var_2;
                arr_42 [i_6] = var_7;
                arr_43 [i_0] [i_0] [i_6] [i_9] = ((((((arr_20 [i_0] [i_6] [i_0]) ? var_14 : (arr_9 [i_9] [i_6] [i_6] [i_0 + 1])))) ? var_1 : 1));
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {

        for (int i_11 = 1; i_11 < 12;i_11 += 1)
        {
            arr_50 [i_11] = (arr_11 [i_11 + 2] [i_11 + 2] [i_11 - 1]);
            var_23 ^= (((1 && var_1) >> ((((var_12 ? 3304546850 : (arr_9 [i_10] [i_11] [i_10] [i_10]))) - 3304546830))));
            var_24 = (var_2 != var_5);
        }

        for (int i_12 = 1; i_12 < 12;i_12 += 1)
        {
            arr_54 [i_12] [i_12 - 1] = (arr_12 [i_12]);
            var_25 = (min(var_25, 157622874));
        }
    }
    for (int i_13 = 3; i_13 < 20;i_13 += 1)
    {
        var_26 *= (max((((arr_9 [i_13] [i_13 - 2] [20] [i_13 - 2]) ? (arr_9 [8] [i_13 - 3] [12] [i_13 - 3]) : (arr_0 [i_13] [i_13 + 1]))), ((((arr_9 [i_13] [i_13 + 1] [2] [i_13 - 1]) == (arr_9 [i_13] [i_13 + 1] [14] [i_13 - 1]))))));
        arr_57 [i_13] = min((((-127 - 1) + 7)), ((max(var_2, (arr_31 [i_13 - 2] [i_13 - 3])))));
    }
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        arr_61 [i_14] = (((!1) ? ((max((arr_32 [i_14] [17] [i_14]), (arr_32 [i_14] [i_14] [i_14])))) : (min((arr_34 [i_14] [i_14] [i_14] [17]), 7473292249593619749))));
        arr_62 [i_14] [i_14] = -71;
    }
    var_27 = ((((((var_9 ^ var_2) ? (min(var_5, 2308501802)) : var_7))) || var_4));
    #pragma endscop
}
