/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((((max(29, 6146)))) - -212);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 -= ((0 ? 0 : 0));
        arr_3 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_10 [i_1] [i_2] [i_2] = (arr_2 [i_1]);
            var_14 &= (((((var_4 > ((~(arr_8 [i_1] [i_2])))))) < (((0 == ((104 << (var_2 + 522738486))))))));
            arr_11 [4] [i_1] &= (max((min((((-127 - 1) ? 252 : 104)), (arr_9 [2]))), (((arr_8 [i_1 + 2] [i_1 + 2]) ? var_7 : (arr_8 [i_1 + 3] [i_1 + 1])))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                var_15 = ((~((max((arr_4 [i_1]), (arr_4 [i_4]))))));

                for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_1] [i_3] [i_3] [i_5] = (((((252 ? 13311 : 191))) ? 13311 : 60311));
                    arr_20 [i_1 + 2] [i_3] [i_4] [i_3] = (arr_9 [i_3]);
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                {
                    var_16 = (max(var_16, ((((((arr_8 [i_1 + 3] [i_1 + 1]) ? (arr_8 [i_1 + 1] [i_1 + 2]) : (arr_7 [i_1 + 2] [i_6] [i_1 - 1]))) + (((((var_9 ? (arr_1 [i_1] [i_1]) : (arr_7 [i_6] [i_6] [i_6])))) ? (arr_5 [i_1]) : (arr_14 [i_1] [i_3] [i_4]))))))));
                    var_17 -= var_6;
                }
                arr_23 [i_3] [i_4] [i_4] = ((~(((arr_7 [i_1 + 3] [i_3] [i_4]) ? (((arr_18 [i_1] [i_3] [i_4]) / (arr_14 [i_4] [i_3] [i_1]))) : (((arr_17 [i_1] [i_3] [i_3] [i_4] [i_1]) ? (arr_7 [i_4] [i_3] [i_1]) : (arr_22 [i_4] [i_3])))))));
                arr_24 [i_4] [i_3] [i_1] = var_11;
                arr_25 [i_3] = var_0;
            }
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                arr_30 [i_3] [i_3] [i_3] = (156 <= -79);
                arr_31 [i_3] = ((~(~1)));
                var_18 = (max(var_18, ((((arr_28 [i_7] [i_7]) - (((!(arr_14 [i_7] [i_3] [i_1 + 1])))))))));
                var_19 = (min(var_19, (((+(((arr_22 [i_1] [i_1 + 1]) - var_2)))))));
                arr_32 [i_3] [i_3] [i_7] [i_1] = (((((var_3 ? ((max((arr_2 [i_7]), (arr_21 [i_1] [i_3] [i_3])))) : (arr_1 [i_1 - 1] [i_1 - 1])))) ? ((((((arr_22 [i_1] [i_7]) ? var_3 : (arr_12 [i_1])))) ? (((arr_29 [i_1] [i_3] [i_3] [11]) >> (arr_17 [i_7] [i_7] [i_3] [i_7] [i_7]))) : var_0)) : (((((var_7 ? (arr_15 [i_7] [8] [i_3] [i_1]) : var_10)) != ((((arr_2 [i_7]) && (arr_29 [17] [i_3] [i_3] [i_1])))))))));
            }
            arr_33 [i_3] = (((((((arr_8 [i_1] [i_3]) + var_9)))) ? (arr_14 [i_1] [i_1] [5]) : (((((var_1 ? var_1 : var_9))) ? var_1 : var_6))));
            var_20 = ((((((((arr_14 [i_1] [i_1] [i_1]) ? var_9 : var_9)) << (var_11 - 161)))) ? ((~(arr_4 [i_1]))) : (!var_7)));
            var_21 += ((((max(((max(var_0, (arr_13 [i_1] [i_3] [i_1])))), -var_6))) ? (max((var_8 < var_11), (arr_27 [1]))) : var_10));
        }
        arr_34 [i_1 + 3] = ((~(((((arr_26 [1]) == var_7)) ? (arr_1 [i_1] [i_1]) : (arr_26 [16])))));
    }
    #pragma endscop
}
