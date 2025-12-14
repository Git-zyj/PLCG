/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = var_4;

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            var_12 -= (arr_0 [4]);
            arr_6 [8] [8] [8] = ((min(17908707965794748292, (arr_5 [1] [i_0] [i_0 - 3]))));
        }

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_10 [2] [i_2] [0] = (((((((arr_7 [i_0] [i_0] [0]) ? (arr_3 [i_0 - 1] [i_0] [1]) : (arr_0 [1]))) & 35083)) << (!-var_4)));

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_13 = (arr_3 [i_0] [i_0] [5]);
                arr_13 [i_0] [i_0] [i_3] [i_0] = (((arr_1 [i_0] [i_0 + 1]) ? (((arr_7 [i_0] [i_2] [6]) + var_2)) : (((arr_5 [i_3] [i_2] [13]) * 35083))));
            }
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_14 -= var_7;
                    var_15 = (((min(var_4, ((var_7 ? var_4 : var_3)))) > (min(0, (((30448 > (arr_12 [i_0] [0]))))))));
                    var_16 = ((((((51171 ? var_4 : var_6)) > (1 & 253))) ? (max(70, var_9)) : -var_5));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                {
                    var_17 = (arr_3 [i_0] [i_0] [i_0 + 1]);
                    arr_24 [i_0 - 3] [i_0] [1] [i_0 - 2] = ((((!(arr_7 [i_0] [i_2] [i_2])))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                {
                    var_18 = (min(var_18, (((((var_9 ? (arr_17 [i_0] [0] [13]) : 1)) - ((1 ? 30448 : var_2)))))));
                    arr_28 [i_0 - 3] [i_0] [i_2] [i_4 - 1] [i_7] = (((arr_27 [i_0 + 1] [i_4 + 3] [i_4] [i_2]) / (arr_27 [i_0 + 2] [i_4 + 3] [i_4] [i_2])));
                }
                arr_29 [4] [13] = (((max(5, (arr_5 [i_0] [i_2] [i_4])))));
                arr_30 [i_2] [i_2] [i_4] [i_2] = var_2;
            }
            arr_31 [i_0] [i_2] [i_2] = (((max(var_10, (~7074158248576251027))) >= (arr_3 [0] [i_0 + 1] [i_2])));
            var_19 = (max(var_19, -125));
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    {
                        var_20 &= (((((min(250, -16587)))) || (((-122 ? 127 : 1)))));
                        var_21 ^= (((((-53 ? var_9 : (arr_36 [4] [4] [i_9 - 2] [i_10 + 1])))) ? (min((max(var_9, var_0)), (arr_15 [13] [i_9 + 3] [i_0]))) : (((18446744073709551615 ? 1 : 1)))));
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        var_22 -= (arr_40 [i_11] [i_11]);
        var_23 = (min(var_23, (arr_41 [i_11] [i_11])));
        var_24 = (max(var_24, 32767));
        var_25 = (min(var_25, ((max((((((var_10 ? (arr_39 [i_11]) : var_10)) * (arr_40 [i_11] [i_11])))), (max((((250 ? (arr_39 [i_11]) : (arr_39 [i_11])))), var_11)))))));
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        arr_46 [i_12] [i_12] = (((((((((-127 - 1) / -49))) ? (((arr_43 [i_12]) ? (arr_45 [i_12] [i_12]) : (arr_43 [i_12]))) : (arr_43 [i_12])))) ? (arr_41 [12] [i_12]) : ((min((arr_43 [1]), (var_4 > var_4))))));
        var_26 = var_8;
    }

    for (int i_13 = 1; i_13 < 19;i_13 += 1) /* same iter space */
    {
        var_27 -= ((var_0 > (var_1 * var_10)));
        var_28 = ((((max(var_0, ((38 ? var_1 : (arr_49 [i_13] [i_13])))))) ? (max((max(538036107914803323, 1)), (((253 ? (arr_49 [i_13] [i_13]) : var_5))))) : ((((((var_5 ? (arr_47 [i_13]) : (arr_48 [i_13])))) ? (arr_47 [i_13 + 3]) : var_2)))));
        var_29 -= ((~(arr_48 [i_13 + 2])));
        var_30 = (max(var_30, (((-((-(((arr_48 [i_13 - 1]) - (arr_48 [i_13 + 3]))))))))));
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 19;i_14 += 1) /* same iter space */
    {
        var_31 = (arr_47 [i_14]);
        arr_53 [i_14] = (((arr_48 [i_14 + 1]) ? (arr_47 [8]) : ((var_11 ? var_3 : var_10))));
        var_32 = var_1;
    }
    var_33 = (~65534);
    var_34 = ((((1 ? 15 : var_1)) << var_10));
    #pragma endscop
}
