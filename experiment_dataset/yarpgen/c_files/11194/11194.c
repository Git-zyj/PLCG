/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_21 |= (min(var_1, (max((arr_0 [0]), (((var_4 ? (arr_1 [i_0 - 1] [i_0]) : var_16)))))));
        arr_2 [i_0] = (((-(arr_0 [i_0]))) == ((max((arr_0 [i_0]), 1))));
        arr_3 [i_0] [i_0] = min(((((((arr_0 [i_0]) ? var_5 : (arr_0 [i_0])))) ? (min(var_1, 4194303)) : (arr_0 [i_0]))), (((arr_1 [i_0] [i_0 - 1]) ? ((var_16 & (arr_1 [19] [18]))) : (arr_1 [i_0 - 1] [i_0 - 1]))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = 163;

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_14 [i_4 + 3] [i_1] [i_1] [i_3] [i_1] [i_1] = (~(min((~3782690367), var_10)));

                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] = ((1 || ((((var_18 ^ (arr_11 [i_4] [i_3] [i_2] [i_1])))))));
                            var_23 += (min((arr_15 [i_3] [1] [i_4 + 4] [i_5 + 3] [i_5]), ((1 ? 255 : 19431))));
                        }
                        var_24 = var_3;
                    }
                }
            }

            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                var_25 = (min((min((min(183, 1659914746184954050)), var_13)), -1585600986));
                var_26 = var_5;
                var_27 = (min(var_27, (((((min((((var_11 ? (arr_9 [i_1]) : var_10))), (min(var_4, (arr_4 [1] [i_6])))))) && (((arr_1 [i_1] [i_1]) && ((min((arr_20 [i_6] [i_1] [i_1]), (arr_5 [16])))))))))));

                for (int i_7 = 2; i_7 < 18;i_7 += 1)
                {
                    arr_24 [i_1] [i_1] [i_6] [i_6] = (min((((1 < ((var_12 & (arr_21 [i_2] [i_1] [0] [i_2] [3])))))), (arr_22 [9])));
                    var_28 = (((var_14 ? var_16 : var_15)));
                    arr_25 [i_2] [i_1] = (min((min(1, var_8)), (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])));
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        arr_31 [i_1] [i_1] [i_1] [i_1] [i_9] = (-(min((arr_4 [i_1] [i_2]), (arr_10 [i_1] [14] [i_1]))));
                        var_29 = ((-(min((min((arr_5 [i_1]), (arr_20 [i_1] [i_1] [i_1]))), ((min((arr_26 [i_9]), 1)))))));
                    }
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        var_30 ^= var_17;
                        var_31 = (min(((max((arr_7 [i_1] [i_1]), ((0 ? (arr_7 [i_1] [i_1]) : var_18))))), (min((arr_1 [i_1] [i_6]), ((min((arr_16 [i_10 + 1] [i_1] [i_1] [i_1] [i_1]), var_0)))))));
                    }
                    arr_35 [i_1] [i_2] [i_1] [i_1] = (min(1, ((~(arr_6 [i_8])))));
                    var_32 = 17075852063243929617;
                    arr_36 [i_6] [i_1] [i_6] = (((((arr_32 [7] [i_6] [i_1] [i_1] [i_1]) ? (arr_18 [i_1]) : (arr_0 [i_1]))) / ((((min(8715392121586587604, 1)))))));
                    var_33 = (min((((arr_23 [i_1]) ? (((min(22, 0)))) : var_17)), (arr_32 [i_1] [i_1] [i_2] [i_6] [i_2])));
                }
            }

            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                arr_39 [i_1] [i_2] [i_1] = arr_11 [i_11] [i_2] [i_1] [i_1];
                var_34 = var_16;
                var_35 = (min((min((arr_29 [i_1] [i_11] [i_11] [i_2] [i_2] [i_2] [i_2]), 1)), 74));
                var_36 = (min(var_19, (((var_18 > (min(1, var_14)))))));
            }
            var_37 = ((((((arr_38 [i_1] [i_1] [i_1] [i_1]) ? (min(var_16, (arr_27 [i_1] [i_1]))) : (arr_23 [i_1])))) ? (arr_37 [i_2]) : (((arr_26 [i_1]) ? (((max(var_7, var_0)))) : (((arr_33 [i_1] [i_1] [i_1] [13] [i_2]) ? 18446744073709551615 : var_17))))));
        }
        /* vectorizable */
        for (int i_12 = 4; i_12 < 18;i_12 += 1) /* same iter space */
        {
            var_38 = (arr_9 [i_12 - 3]);
            var_39 = var_7;
            var_40 = var_14;
            var_41 = (((arr_21 [i_12 + 1] [i_1] [i_12 + 1] [i_12 - 4] [i_12 - 1]) / var_14));
        }
        /* vectorizable */
        for (int i_13 = 4; i_13 < 18;i_13 += 1) /* same iter space */
        {
            var_42 = (((arr_32 [i_1] [i_13] [i_1] [i_1] [i_13 + 1]) ? (arr_32 [i_1] [5] [i_13] [i_1] [i_13]) : 3782690365));
            var_43 = (((arr_26 [i_13 + 1]) ? (arr_6 [i_13 - 3]) : (arr_6 [i_13 + 1])));
            var_44 = ((9343379818600104756 ? 32767 : (arr_8 [i_13 - 4] [1])));
        }
        arr_44 [i_1] = (~var_14);
    }
    var_45 = ((var_8 ? var_6 : ((var_9 ? var_19 : 0))));
    var_46 = var_17;
    #pragma endscop
}
