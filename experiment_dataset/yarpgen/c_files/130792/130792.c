/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min((min(var_1, var_4)), -var_6))) & ((var_3 ? 86 : var_7))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = (((max(252, (arr_2 [i_0] [i_0]))) % ((252 ? 447 : 252))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_3] [i_0] [i_0] = (arr_0 [i_2 - 3]);
                        var_13 = (max(var_13, (((min(((max(var_2, (arr_8 [i_3] [i_0])))), (((arr_6 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_3 [i_0])))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                {
                    var_14 = ((((min(var_3, (arr_5 [i_4 + 2] [13])))) ? ((((((9878 ? 32767 : 1))) ? (arr_5 [i_4 + 1] [i_4 + 4]) : ((127 ? -10419 : var_9))))) : (((arr_4 [i_4 - 2] [i_4 - 1]) ? (arr_10 [i_4] [i_4] [i_4 + 3] [i_5] [i_5] [i_5 - 2]) : ((-(arr_10 [i_5] [i_5] [i_4] [i_0] [i_0] [i_0])))))));
                    var_15 = ((!(-10419 == 2147483647)));
                }
            }
        }
        arr_17 [i_0] = (!119);
        arr_18 [i_0] = ((var_9 ? ((((~58938) ? (arr_8 [i_0] [4]) : ((1 ? -1244527841 : -11606))))) : (((arr_14 [i_0] [i_0] [1]) / (arr_13 [i_0] [i_0] [i_0])))));
    }
    for (int i_6 = 2; i_6 < 20;i_6 += 1)
    {
        arr_22 [i_6 + 1] [i_6] = (min((arr_21 [i_6 + 3]), ((((((arr_19 [i_6]) ? var_4 : (arr_20 [i_6] [i_6]))) * (arr_20 [i_6 + 2] [i_6 + 1]))))));
        arr_23 [i_6] = (min(((((((arr_21 [i_6]) ? (arr_20 [i_6 - 2] [i_6]) : (arr_21 [16])))) ? (arr_21 [i_6 + 1]) : (-1244527841 == var_2))), ((min(var_5, (arr_20 [i_6 + 3] [i_6 - 2]))))));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                {
                    var_16 -= (min((((var_2 != -1927833390) ? 739406418625562667 : ((((0 || (arr_24 [i_7]))))))), ((((arr_25 [i_9 + 1] [i_9 + 1]) ? (arr_26 [i_9 + 1]) : ((var_0 ? -10419 : 1)))))));
                    arr_31 [3] [i_8] [i_8] [20] = (((-(~var_2))));

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        arr_34 [i_7] = (((-119 ^ -8834) >> (((~var_1) - 1425975737))));
                        arr_35 [i_10] [i_8] = (arr_21 [i_9 - 1]);
                        var_17 = var_7;
                        arr_36 [15] [8] [4] [15] = var_6;
                        arr_37 [i_7] [7] [0] [1] |= ((~(arr_28 [i_10] [i_9 - 1] [i_7])));
                    }
                }
            }
        }

        for (int i_11 = 1; i_11 < 20;i_11 += 1)
        {
            var_18 = (((((((var_8 < (arr_30 [i_7] [i_11 + 2] [i_11 + 2]))) ? (((arr_39 [i_7] [i_7]) ? (arr_19 [18]) : 26)) : (arr_27 [7] [7])))) ? ((3989955875739506816 ? (min(6567588052999874465, var_0)) : (((-(arr_38 [6] [i_11 - 1])))))) : ((((-(arr_33 [14] [i_7] [14] [i_11])))))));
            var_19 = ((((max((arr_26 [i_7]), 82))) ? 10418 : (!16924)));
            var_20 -= ((3989955875739506816 % (arr_39 [i_11 - 1] [i_11 + 1])));
        }
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
    {
        var_21 = var_9;
        arr_42 [7] [i_12] = ((((!(arr_21 [i_12]))) || (((-58 ? 2181956379 : 1244527834)))));
    }
    var_22 = ((-(6567588052999874465 - var_4)));
    var_23 = (max(var_23, var_8));
    var_24 = ((8238661385674724879 ? 1 : (min(3989955875739506823, 14456788197970044793))));
    #pragma endscop
}
