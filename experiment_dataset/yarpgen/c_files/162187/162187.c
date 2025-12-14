/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!((max(var_13, (var_1 + 2276115666498612304))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (min(4294967293, ((((((((arr_0 [i_0]) <= 0)))) < 1284231345)))));
                var_15 = ((((((var_7 ? (arr_2 [i_0]) : 843529895949367581))) ? 28155 : (((arr_1 [7]) ? var_6 : var_0)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = var_12;
                                var_16 ^= (((((arr_13 [i_0]) ? (((arr_3 [i_3]) ? (arr_8 [i_1] [i_4]) : var_8)) : ((((var_6 == (arr_12 [i_0] [6] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) & var_3));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_17 = (min((((!(~var_5)))), (((((var_3 ? 255 : (arr_16 [12])))) ? (~var_4) : (~32758)))));
        var_18 = ((((~(var_5 || 255))) / var_3));
        var_19 = (((max((!var_6), (255 / var_5))) < var_3));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_20 = ((((7594319019584173005 ? (arr_12 [i_6] [17] [i_6] [i_6] [i_6] [12] [i_6]) : (arr_18 [i_6])))) ? (arr_8 [i_6] [i_6]) : (((((0 < (arr_16 [i_6])))))));
        var_21 += ((((max((arr_17 [i_6]), 227)))) > (min(var_7, (arr_17 [i_6]))));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 16;i_9 += 1)
            {
                {
                    arr_30 [i_8] [i_8] [3] = (max((min(((max(-8164784575525640495, var_1))), (max(var_9, 0)))), (12200661620078259303 & 31)));
                    arr_31 [i_7] [i_8] [i_7] [i_7] = ((((((min(5, 5)) == (arr_27 [i_9 + 2] [i_9 + 2] [i_9 + 3])))) < var_10));
                    var_22 = (arr_26 [i_8] [i_8] [i_9]);

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_34 [15] [i_8] = (((arr_28 [i_7] [i_7] [i_8] [i_7]) < var_13));
                        var_23 = (((!9) ^ ((~(arr_28 [14] [i_8] [i_8] [1])))));
                        var_24 = (min(var_24, var_2));
                    }
                    arr_35 [i_9] [13] [i_8] = 255;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    {
                        var_25 = ((((((14 * -127) & (-2147483647 - 1)))) ? (((((arr_36 [i_7] [i_7] [i_7]) || 12200661620078259303)))) : 26317));
                        var_26 = (var_10 * ((var_6 ? (~0) : var_9)));
                        arr_46 [7] [i_13] [i_13] [i_11] [12] [i_13] = (max(((((var_4 ? 18014398509481983 : (arr_42 [i_7] [i_11] [i_11] [i_11]))) < (((max((arr_36 [0] [i_11] [8]), 255)))))), (-18446744073709551609 == var_11)));
                        var_27 = (((arr_22 [i_7]) || ((max(-25762, 1328383819549870205)))));
                    }
                }
            }
        }
        var_28 += (max(((min((arr_39 [i_7]), (arr_39 [i_7])))), ((((var_0 != (arr_15 [i_7]))) ? (arr_45 [i_7] [i_7] [i_7] [i_7] [i_7]) : (~var_10)))));
    }
    var_29 = (!(((((var_13 ? var_5 : var_0)) + 150))));
    #pragma endscop
}
