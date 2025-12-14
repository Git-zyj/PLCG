/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = var_12;
                    var_19 = -20952;
                    var_20 = (min(var_20, ((((((!3302106590) || (((var_17 ? 0 : (arr_7 [i_0] [i_1] [i_0] [i_0])))))) || ((!((var_14 && (arr_1 [i_0]))))))))));
                    var_21 = (max(var_21, (((1 ? 0 : 3687547139)))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    {
                        var_22 = (min(var_22, (((~(((arr_7 [i_5] [i_5] [i_5 - 2] [i_3]) ^ (arr_12 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_4]))))))));
                        var_23 -= (((arr_6 [i_0] [i_4] [i_4]) < (~var_7)));
                    }
                }
            }
        }
        var_24 *= ((-(arr_6 [0] [i_0] [0])));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_16 [4] [4] [1] = (arr_0 [i_0]);
            var_25 = (((arr_1 [i_0]) % 1));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_26 = (min(var_26, ((max((((((var_13 ? (arr_4 [i_7]) : var_10))) ? (arr_11 [i_7] [i_0] [i_0]) : (((!(arr_4 [4])))))), (((!(arr_10 [i_0])))))))));
            var_27 -= ((((((arr_14 [i_0] [i_0] [2]) - 1))) ? (((arr_11 [i_0] [i_7] [i_7]) ? (arr_11 [i_0] [1] [i_0]) : (arr_14 [i_0] [i_0] [i_0]))) : (arr_14 [1] [i_7] [i_0])));
            var_28 = (arr_3 [i_0] [i_0]);
            var_29 *= (((((-(((1332646224 || (arr_11 [0] [0] [i_7]))))))) ? ((((((arr_17 [i_0] [i_7]) < var_13))) << (((((arr_5 [i_7]) ? (arr_9 [8]) : 2962321073)) - 4294952059)))) : -0));
        }
        arr_19 [i_0] [4] = ((+(((arr_15 [i_0]) ? (arr_15 [i_0]) : (arr_15 [i_0])))));
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 20;i_10 += 1)
            {
                {
                    var_30 = var_14;
                    var_31 *= ((871552901 ? (((((arr_20 [i_9]) && (arr_27 [i_8] [i_8]))))) : (arr_26 [i_9])));
                    var_32 = (arr_26 [i_8]);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 19;i_12 += 1)
                        {
                            {
                                arr_35 [i_12] [i_9] [i_9] [i_9] [i_12] [i_10] [i_9] &= -1332646222;
                                var_33 = (max(((((arr_33 [i_12 - 2] [i_12 - 2] [i_12 - 2] [i_12] [i_12] [i_12 - 2]) ? 105 : (arr_32 [i_12 + 4] [i_12 + 2] [i_10 + 2] [i_10 + 2] [i_10 - 2] [i_10 + 2])))), (max((((24576 ? 1 : 1332646224))), (arr_31 [3] [i_12] [i_12] [i_12 + 1] [i_12] [i_12])))));
                            }
                        }
                    }
                    var_34 = (arr_30 [i_10]);
                }
            }
        }
        var_35 = (min(var_35, (arr_33 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])));
        var_36 &= (((arr_29 [i_8] [i_8]) ? ((~(arr_29 [i_8] [i_8]))) : (((arr_29 [i_8] [12]) ? (arr_29 [i_8] [i_8]) : (arr_29 [i_8] [i_8])))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            for (int i_14 = 4; i_14 < 21;i_14 += 1)
            {
                {
                    arr_42 [i_8] [i_8] [13] &= ((!(arr_26 [i_14 - 2])));
                    arr_43 [i_14] &= ((~(((arr_38 [i_14 + 2] [i_14 + 1] [i_14 + 1]) + (arr_41 [i_14 + 2] [i_14 + 2] [i_14 + 1] [i_14 + 1])))));

                    for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
                    {
                        var_37 *= var_10;
                        var_38 = var_11;
                    }
                    for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
                    {
                        arr_48 [i_14] = (((arr_29 [i_14 - 2] [i_14 - 1]) ? (arr_28 [i_8] [i_8]) : ((((arr_24 [i_14 + 1]) != (0 - var_0))))));
                        var_39 -= (((((((~(arr_34 [i_14] [i_16])))) & (arr_40 [16] [1] [21]))) >> (((((max(var_16, (arr_31 [i_13] [i_8] [i_14 - 4] [i_13] [i_8] [i_8]))))) - 39))));
                        arr_49 [i_8] [i_8] [i_8] [i_8] &= ((~(arr_40 [i_8] [i_13] [i_13])));
                    }
                    for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
                    {
                        var_40 *= (var_10 / (((1332646224 + (arr_23 [i_14])))));
                        var_41 ^= ((((((((arr_51 [i_14 - 4] [i_14 - 1] [i_14 + 2] [21] [i_17]) + 9223372036854775807)) >> (((arr_51 [i_14 - 4] [i_14 - 4] [i_14 - 1] [i_14] [i_17]) + 4289361820506476083))))) ? (max(4095, -2251799813685248)) : (arr_38 [14] [i_8] [16])));
                        var_42 = var_8;
                    }
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 24;i_18 += 1)
    {
        var_43 = 1;
        var_44 = (((~(arr_52 [i_18]))));
        arr_55 [i_18] [i_18] = var_14;
        arr_56 [1] = (arr_52 [i_18]);
        var_45 = (min(var_45, (arr_53 [i_18] [i_18])));
    }
    var_46 -= var_5;
    #pragma endscop
}
