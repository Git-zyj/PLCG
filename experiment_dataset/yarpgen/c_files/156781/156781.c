/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = ((-(arr_1 [i_0])));
        arr_2 [i_0] = ((((((arr_0 [1] [1]) / (1129148022037524067 >= 1)))) ? ((((arr_1 [i_0]) != (max(-1129148022037524090, (arr_0 [i_0] [i_0])))))) : 65535));
    }

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = 5911;
        arr_8 [i_1] = var_6;
        arr_9 [i_1] &= (((!-229944473) / (max((~59615), (arr_4 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_12 [i_2] = var_0;

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_11 = (min(65523, ((29 ? 1 : (!65510)))));
            arr_16 [i_3] [24] = (((arr_15 [i_2] [i_3] [i_3]) && ((min(((~(arr_11 [i_2]))), (65511 % 241))))));
        }
        for (int i_4 = 1; i_4 < 24;i_4 += 1)
        {
            arr_21 [i_4] = (arr_14 [24] [8]);
            arr_22 [i_2] [i_2] = ((((min(var_9, var_5))) ? (((-(arr_20 [i_4 - 1] [i_4 + 1] [i_4 + 1])))) : 1606176240));
        }
        var_12 = 1;
    }
    var_13 ^= 3;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {

                /* vectorizable */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    arr_30 [i_7] [i_6] [i_6] [i_6] = (((arr_13 [7]) ? (((arr_10 [i_5]) ? (arr_6 [i_5]) : (arr_14 [i_7] [i_6]))) : ((~(arr_28 [i_5])))));
                    var_14 ^= 281200098803712;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_35 [i_8] [1] [i_5] [i_5] [i_8] &= (arr_29 [i_6] [i_8] [i_9]);
                                var_15 = (max(var_15, (!var_0)));
                                var_16 = 44259;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_17 = arr_18 [i_5];

                            for (int i_12 = 4; i_12 < 8;i_12 += 1) /* same iter space */
                            {
                                arr_44 [i_5] [7] [i_5] [i_5] [i_5] [i_5] = 1073741823;
                                var_18 = ((+((((arr_0 [i_5] [8]) == (arr_33 [8] [i_6] [8] [i_11] [6]))))));
                            }
                            /* vectorizable */
                            for (int i_13 = 4; i_13 < 8;i_13 += 1) /* same iter space */
                            {
                                var_19 = ((-(arr_3 [i_13 - 1])));
                                var_20 = var_2;
                                arr_48 [i_5] [i_5] [i_5] [i_5] = (((((arr_1 [14]) & var_4)) < (((65493 | (arr_15 [14] [i_6] [i_10]))))));
                                arr_49 [i_5] [i_10] [i_13 - 3] = ((!129) ? var_8 : 59614);
                            }
                            for (int i_14 = 1; i_14 < 10;i_14 += 1)
                            {
                                arr_52 [i_5] [i_6] [i_6] [i_11] [i_14] = (!var_3);
                                arr_53 [5] [5] [i_6] [i_10] [i_11] [2] [i_14 - 1] = (((arr_19 [i_14] [23] [i_14 + 1]) ? (((arr_19 [9] [i_14] [i_14 - 1]) ? (arr_19 [i_14 + 1] [i_14] [i_14 + 1]) : (arr_19 [22] [i_14 + 1] [i_14 + 1]))) : (((arr_19 [i_14] [i_14] [i_14 - 1]) ? (arr_19 [i_14] [i_14 + 1] [i_14 + 1]) : (arr_19 [i_14] [i_14 + 1] [i_14 + 1])))));
                                arr_54 [i_5] [i_5] [i_6] [i_5] [i_11] [1] [i_6] = 8994943087346815419;
                            }
                            arr_55 [i_5] [i_6] [i_10] [3] [i_5] = (~var_9);
                            arr_56 [i_5] [7] [4] [5] = 25355059;
                            arr_57 [i_11] [i_10] [i_6] [7] = (((max(-25647, (arr_3 [i_11])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            {
                                var_21 = ((((!(!1)))));
                                var_22 = (max(var_22, (arr_27 [i_5] [i_5] [i_5])));
                                arr_65 [i_5] [1] [7] [i_5] [i_5] = (max((min((arr_26 [i_5] [i_5] [i_5]), var_0)), var_3));
                                arr_66 [i_5] [10] [i_15] [i_16] [i_5] [i_17] [i_17] = (-6028291932123217491 ? ((1073741807 + (((arr_3 [i_5]) + (-9223372036854775807 - 1))))) : (arr_36 [i_6]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_7;
    #pragma endscop
}
