/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_20 = (((((var_3 + (arr_0 [i_0 - 4] [i_0 + 1])))) ? (((max((arr_0 [i_0 - 4] [i_0 - 3]), (arr_0 [i_0 - 3] [i_0 - 2]))))) : (((arr_0 [i_0 - 2] [i_0 + 2]) ? var_19 : (arr_0 [i_0 + 1] [i_0 - 3])))));
        arr_4 [i_0] = (((((!((((arr_3 [i_0] [i_0]) ? (arr_0 [i_0] [3]) : (arr_1 [i_0]))))))) / 1));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_21 = ((~(~1)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_18 [i_2] [3] [i_2] [i_4] [i_4] = ((~(((!(arr_13 [9] [i_2] [i_2] [i_1]))))));
                        var_22 = ((+((((arr_7 [i_1] [6]) || (((5400660830025065128 ? 1 : -5400660830025065145))))))));
                        arr_19 [i_1] [i_2] [i_3] [i_4] = (((~(((!(arr_1 [i_2])))))));
                    }
                }
            }
        }
        var_23 = (arr_5 [i_1]);
    }
    var_24 = 1;

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_24 [13] = ((53988 ? var_0 : (arr_20 [i_5] [14])));
        arr_25 [i_5] = ((var_18 ? var_13 : 1));
        var_25 = (min((max(14977, 1)), (((((((var_10 && (arr_20 [i_5] [i_5]))))) > var_2)))));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_26 = var_8;
        var_27 = ((((((!(((-(arr_27 [i_6])))))))) * (arr_20 [i_6] [i_6])));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        arr_33 [i_7] [i_7] = var_1;
        var_28 ^= ((var_0 | (min((var_19 ^ var_18), var_15))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            arr_44 [i_7] [i_8] [8] [i_10] [i_9] = ((((1 ? (arr_42 [i_7] [i_7] [i_9] [i_10]) : (((-1421533907158303585 ? (arr_29 [6]) : (arr_41 [23] [i_8])))))) <= (min((arr_40 [3] [i_7] [i_9] [i_9] [i_10 + 2] [16]), (arr_32 [i_7])))));
                            arr_45 [i_9] [16] [i_9] [17] [i_11] = ((((((((1 << (((arr_30 [i_9] [i_9]) - 10075907532626169694))))) ? ((50559 ? 41751 : var_13)) : (arr_39 [i_8] [i_10 + 2] [i_9] [i_10 + 3])))) ? ((max(var_6, (max(var_0, (arr_38 [i_7] [i_8] [i_11])))))) : (((!var_7) | ((-(arr_30 [10] [10])))))));
                            var_29 = ((~(!126)));
                            var_30 = ((1 ? (((((arr_31 [8]) & var_7)))) : (arr_31 [i_7])));
                        }
                        for (int i_12 = 4; i_12 < 21;i_12 += 1)
                        {
                            var_31 = ((((max((arr_43 [i_8] [i_10] [i_12]), (min(var_14, 1))))) * (min((((!(arr_41 [i_7] [i_7])))), ((var_2 + (arr_46 [i_8] [i_10 - 1] [i_8])))))));
                            arr_48 [i_7] [i_9] [i_9] [i_7] = (min((max((min(var_2, var_18)), ((min((arr_47 [i_9] [i_9] [i_9] [i_9] [i_7]), var_5))))), (arr_40 [i_7] [1] [i_9] [i_9] [i_10] [i_12])));
                            var_32 = (arr_42 [i_7] [i_7] [i_9] [i_10]);
                        }
                        arr_49 [i_7] [i_7] [i_9] [i_9] [i_7] = (((!1) || ((((((var_19 ? var_7 : -77))) ? (arr_36 [i_7] [i_8] [i_9] [i_10 - 1]) : (min((arr_47 [0] [i_9] [i_9] [i_10] [i_10]), var_15)))))));
                        var_33 = (arr_46 [i_7] [i_7] [2]);
                        arr_50 [i_9] [i_9] = ((((((arr_39 [i_7] [i_7] [1] [i_10 + 3]) ? var_16 : (arr_39 [1] [5] [5] [i_10 - 1])))) ? (arr_39 [i_9] [i_8] [i_9] [i_10 + 2]) : ((min((arr_39 [i_7] [i_8] [i_9] [i_10 + 2]), (arr_39 [i_7] [i_7] [10] [i_10 + 3]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
