/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_20 = var_5;
                    var_21 = (min(var_21, (((!(arr_2 [i_1 - 3] [i_1 - 2]))))));
                }
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    var_22 = 3;
                    var_23 = (((arr_3 [i_1 - 3] [i_3 - 1] [i_3]) > 3));
                    var_24 = (arr_6 [i_3 + 1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_25 = ((((1 > (((10 == (-32767 - 1)))))) ? ((~(arr_3 [11] [i_1 - 1] [i_3 + 1]))) : ((1 >> (480 - 474)))));
                                var_26 = ((((!(((var_13 ? 1 : 7))))) && (!var_12)));
                                var_27 ^= ((11319494559199630166 << (1055 || 1074)));
                                var_28 = ((-1051 > ((((arr_11 [i_1 - 3] [i_1 + 1] [i_1 + 1]) < -4056312670355813182)))));
                            }
                        }
                    }
                }
                for (int i_6 = 3; i_6 < 12;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_27 [i_8] [i_1] [i_1] [i_1] &= 49;
                                var_29 = (((+((((arr_8 [i_0] [i_1] [i_6] [i_8]) >= var_19))))));
                                arr_28 [i_6] [i_1] [i_6] [i_7] [i_8] = (((1 != 1) < 1));
                            }
                        }
                    }
                    var_30 = (170818147 > 1559716601);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_31 = var_5;
                                arr_36 [i_6] [i_1] [i_1] [i_9] [i_10] = -1506;
                            }
                        }
                    }
                    var_32 = (((((arr_5 [i_1] [i_1 - 2] [i_1 - 1]) ? (((arr_34 [6] [6] [i_6] [i_1] [i_6] [6]) / var_14)) : (var_11 / 1229695272669657217))) != (-7971174697342371444 + 20)));
                }
                var_33 = (((((224 ? (((arr_19 [6] [i_1] [i_0] [6]) ? (arr_30 [12]) : 1)) : (20581 < var_3)))) ? (((((-1489 ? var_9 : var_19))) / (159 + -9223372036854775792))) : (((-(arr_25 [0] [i_1 - 1] [0]))))));
            }
        }
    }
    var_34 = ((((((var_13 ? var_11 : 1241544293)) != ((var_14 ? 1 : 1)))) ? (((((1082 ? var_7 : 1))) ? var_1 : (var_12 == var_16))) : -1506));

    /* vectorizable */
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        arr_39 [i_11] = (((((var_10 ? (arr_37 [i_11] [i_11]) : (arr_38 [i_11])))) ? (arr_38 [i_11]) : var_12));
        var_35 -= (1 == -2147483629);
    }
    var_36 = (min(var_36, ((((var_0 | var_18) ? 1 : ((var_8 << (22 - 22))))))));
    #pragma endscop
}
