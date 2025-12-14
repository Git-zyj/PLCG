/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = 0;
                var_19 = (max(var_19, (((-(((min(var_6, 7)))))))));
                var_20 = (((arr_0 [i_0]) & (arr_2 [i_0] [i_0])));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_21 = (arr_5 [i_0]);
                        var_22 = (max(var_22, var_2));
                        var_23 = (((65535 % var_15) & (arr_10 [i_0])));
                        var_24 = (0 + var_14);
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_25 = ((((min((arr_2 [i_4] [3]), ((65527 ? var_1 : (arr_2 [6] [i_0])))))) - -var_10));
                            arr_20 [i_2] [i_5] |= ((min(((var_6 ? var_8 : var_9), ((min((arr_6 [i_1] [i_1] [i_1]), (arr_2 [i_0] [i_0]))))))));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_26 = (((((min(1, var_6))) ? (arr_16 [i_0] [i_1] [i_1] [i_2] [1] [i_6]) : var_8)));
                            var_27 = (min(var_27, (arr_13 [i_6] [i_6] [i_6] [i_6] [7] [i_6])));
                            var_28 = var_6;
                            var_29 ^= -1307798314;
                        }

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_30 = (max(var_30, ((min(((98 / ((var_4 | (arr_7 [i_0] [i_0] [i_7]))))), (((min(var_3, (arr_18 [i_0] [i_0] [i_2] [i_4] [i_7]))) / (var_6 != var_1))))))));
                            arr_26 [i_7] [7] [i_1] [i_1] [i_0] &= (((arr_14 [i_0] [i_0] [6]) ^ (((max(var_2, var_8)) * (min(8, var_10))))));
                            arr_27 [i_1] [i_4] [i_2] [i_1] [i_0] = (min((((arr_1 [i_0]) & (arr_1 [i_7]))), (((arr_1 [i_4]) ? 35019 : (arr_1 [i_4])))));
                            var_31 = ((var_6 ? (((min((arr_2 [i_1] [i_0]), (min(65535, 17429)))))) : var_8));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_31 [i_4] [3] [i_0] [i_0] &= (((arr_30 [i_2] [i_1]) | (var_12 ^ 65525)));
                            var_32 = var_4;
                            var_33 = (((arr_23 [i_0] [i_0] [i_1] [i_2] [i_4] [i_8] [i_8]) ? var_1 : 35033));
                            var_34 = 30540;
                        }
                    }
                    var_35 = (min(var_35, (((!((min(var_7, 2825367940050049317))))))));
                    var_36 = ((((var_9 ? 30519 : var_3))) || ((((min((arr_8 [i_0] [i_0] [i_1] [i_2]), var_3))) && ((min((arr_19 [i_0] [i_0] [i_2] [i_1] [i_0] [i_1] [4]), 30516))))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    var_37 = 1;
                    var_38 = (((var_1 ? var_16 : 0)));
                    arr_35 [i_0] [1] [i_9] = (((arr_17 [i_9] [i_1] [i_1] [i_0]) ? var_6 : (arr_17 [i_0] [i_0] [i_0] [i_0])));
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_39 = ((var_10 ? (arr_2 [2] [i_1]) : var_4));
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            {
                                arr_44 [i_11] [i_12] [0] [i_11] [i_10] [1] [i_11] = ((((-(14 * 0))) < (65522 / 65535)));
                                var_40 ^= var_4;
                                var_41 = ((var_1 / (((!((!(arr_17 [i_1] [i_10] [i_11] [i_12]))))))));
                                var_42 -= var_11;
                                var_43 = (max((((-var_4 ? (var_7 != 127) : (arr_16 [1] [i_1] [0] [i_12] [0] [i_11])))), 8958768098878068745));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
