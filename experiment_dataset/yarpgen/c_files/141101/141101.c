/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!18);
        var_14 = (((((112 ? 127 : -8574137632145321688))) ? 881581045884515893 : 881581045884515893));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 = (max(var_15, (arr_5 [6])));
        arr_7 [i_1] = (arr_4 [12]);

        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_16 = ((-var_3 | (((~(arr_9 [23] [i_2] [i_2]))))));

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                arr_12 [i_1] [1] [i_2] [7] = (((arr_9 [i_1] [11] [i_3]) >= ((-4433806905906971242 ? (arr_5 [i_2]) : (arr_4 [5])))));
                var_17 = (max(var_17, var_3));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_18 *= (((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]) | (((var_12 ? (arr_3 [i_1]) : (arr_3 [i_4]))))));
                    var_19 = (max(var_19, (((((19 ? -4364700015544853956 : var_1))) ? ((var_12 ? var_1 : var_9)) : (arr_9 [i_1] [i_2] [i_3])))));

                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        var_20 = (var_13 ? var_13 : var_2);
                        var_21 += ((var_12 | (0 < 130)));
                        var_22 = (min(var_22, ((((arr_13 [i_2] [i_2] [i_5] [8] [i_5 - 2] [i_5]) ? (arr_13 [i_5] [i_5] [i_5] [i_5] [i_5 - 2] [i_5]) : (arr_15 [14] [8] [i_5] [i_5] [i_5 - 2]))))));
                    }
                    var_23 = (min(var_23, ((((!1) ? (var_7 - var_2) : var_11)))));
                }
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    arr_22 [i_1] [23] [23] [i_1] |= ((17565163027825035713 ? (arr_17 [i_2] [i_6] [i_6] [i_6 + 2] [i_6] [i_2]) : 881581045884515893));
                    arr_23 [i_1] [i_1] [i_2] [i_3] [i_6] = ((~((var_3 * (arr_19 [i_1] [i_2] [1] [i_6 + 1])))));
                    arr_24 [i_1] [i_1] [i_1] [i_1] = (((arr_10 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 2]) ? (arr_10 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 2]) : var_13));
                }
            }
            for (int i_7 = 1; i_7 < 23;i_7 += 1)
            {

                for (int i_8 = 2; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    arr_29 [i_1] [i_2] [i_7] [i_7 - 1] [i_7 - 1] [i_8 + 1] = (((arr_25 [i_8 + 1] [i_7 - 1] [i_7]) ? (((var_3 ? (arr_8 [i_2]) : var_9))) : (arr_18 [i_8 - 1] [i_8 + 2] [i_8 - 1] [i_8] [i_8 - 2])));
                    arr_30 [3] [3] [i_2] [15] [i_8 - 1] = ((((((arr_14 [i_1] [i_7]) ? var_6 : (arr_21 [18] [i_2] [i_7] [i_8])))) ? (((arr_5 [19]) ? 112 : 112)) : ((var_12 ? var_6 : 255))));
                    var_24 = (max(var_24, (((~(arr_18 [i_7 + 1] [i_1] [1] [19] [19]))))));
                }
                for (int i_9 = 2; i_9 < 22;i_9 += 1) /* same iter space */
                {
                    var_25 -= ((143 >> (((((arr_11 [i_1] [i_2] [i_7] [i_2]) ? var_6 : var_0)) - 31039))));
                    var_26 = (min(var_26, 143));
                    var_27 = (max(var_27, ((((arr_13 [10] [10] [10] [13] [i_9 + 2] [i_9]) ? (arr_13 [i_7] [6] [i_7 + 1] [i_7] [i_9 + 1] [i_9]) : (arr_13 [i_2] [i_7] [i_9] [i_9] [i_9 + 2] [i_9]))))));
                    var_28 = (((arr_16 [i_1] [i_2] [i_1] [i_1]) ? 112 : (arr_28 [i_1] [i_2] [i_7] [i_2])));
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    var_29 = var_4;
                    var_30 = ((112 ? -5214548306070692387 : 4294967295));
                }
                var_31 = (min(var_31, ((((arr_18 [i_1] [1] [1] [i_2] [i_1]) ? var_2 : ((var_7 ? var_8 : 881581045884515893)))))));
            }
        }
        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
        {
            arr_38 [i_1] = var_7;
            arr_39 [i_1] [i_1] = ((!(((112 ? var_5 : (arr_10 [i_1] [i_11] [i_11] [i_11]))))));
            var_32 = ((((((arr_25 [i_1] [i_1] [i_1]) ? -146854705 : var_3))) ? (arr_4 [i_11]) : (((var_5 ? (arr_10 [i_1] [i_1] [i_11] [17]) : -1)))));
            var_33 = (max(var_33, (((!(((var_8 ? (arr_20 [1] [i_1] [i_1] [i_11]) : (arr_8 [i_11])))))))));
        }
        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
        {
            var_34 = (((arr_9 [i_1] [i_1] [15]) ? (arr_3 [i_1]) : 4188145078782269648));
            var_35 = 255;
            var_36 = (max(var_36, (((arr_26 [i_12]) | (arr_26 [i_1])))));
            var_37 = 1079677312;
        }
        arr_43 [i_1] = ((var_8 ? var_7 : ((var_12 ? (arr_36 [i_1] [i_1]) : var_0))));
        var_38 = (min(var_38, ((((((881581045884515875 ? var_3 : (arr_19 [i_1] [i_1] [i_1] [21])))) ? ((var_11 ? var_9 : 881581045884515876)) : (arr_40 [i_1] [i_1]))))));
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 9;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                {
                    arr_50 [8] [8] [i_14 + 2] [i_15] = var_10;
                    arr_51 [i_13] [10] [7] [9] |= var_4;
                    var_39 = (min(var_39, ((min((((!var_5) ? (max(var_6, (arr_4 [i_13]))) : var_11)), ((((((var_13 ? var_11 : var_10))) ? var_5 : ((~(arr_26 [i_13])))))))))));
                    var_40 = ((((var_12 > (arr_37 [i_14] [i_14]))) ? (((-(arr_21 [i_14 + 1] [i_14] [i_14] [i_14])))) : (arr_37 [19] [i_14])));
                }
            }
        }
    }
    var_41 += min(var_3, ((((((var_10 ? var_2 : var_12))) ? var_3 : (~var_0)))));
    var_42 = (((((!var_0) ? 1641562620 : (((var_13 ? var_4 : var_6)))))) ? (((((var_5 >> (var_6 - 31054)))) ? (((max(var_8, var_4)))) : var_12)) : var_10);
    #pragma endscop
}
