/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_12 >> (var_8 - 344902253)));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_14 = (((((0 ? 1 : 2147483647))) - (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_10))));
        arr_2 [i_0] = ((var_1 ? (arr_1 [i_0 - 1] [i_0 - 3]) : (arr_0 [i_0 + 3])));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_15 = ((12358 >> ((((var_6 ? (max(1, (arr_4 [13]))) : 1)) - 567227507))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_16 = 1;

            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    var_17 ^= (arr_7 [i_1 + 1] [i_3 + 1] [i_4 + 1]);

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_18 ^= (((arr_9 [i_2] [i_2] [i_2] [i_5]) - (((arr_8 [i_1 + 1] [i_1]) & ((max((arr_13 [13] [13] [i_3] [13] [1] [i_3] [13]), var_2)))))));
                        arr_15 [i_1] [i_2] [i_2] [6] [i_4] [i_2] [i_2] = ((-((var_8 ? (arr_1 [i_4] [i_4 + 2]) : (arr_1 [i_4] [i_4 + 4])))));
                        var_19 = (min(var_19, (((((((((min((arr_0 [i_4]), 1))) ? (max((-127 - 1), var_0)) : (arr_3 [i_1]))) + 2147483647)) >> var_3)))));
                        arr_16 [i_4] [i_5] [i_4] [i_4] [i_1] [i_1] = (((5120 || -12359) ? ((2080768 ? 12339 : (((((arr_6 [i_3] [i_3] [i_3]) + 2147483647)) << (12354 - 12354))))) : (max((-2147483647 - 1), -1486676557))));
                        var_20 = (min(var_4, ((var_12 ^ (arr_13 [i_1] [10] [i_3 + 1] [i_4 - 1] [i_4] [i_3 + 1] [i_1])))));
                    }
                }
                var_21 = (((((1 ? 1 : 294991541))) ? ((-86 - (((-2147483647 - 1) ? 1 : (arr_7 [i_1] [i_1] [i_1]))))) : ((((((arr_7 [i_1] [10] [9]) ? (arr_12 [i_2]) : var_10))) ? (arr_4 [i_1 - 1]) : (arr_12 [i_2])))));

                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    var_22 = ((((60415 ? 1 : 3)) << ((1599715777 ? 1 : ((56 ? (arr_10 [i_1] [i_2] [i_3] [13] [13] [14]) : var_12))))));
                    arr_19 [i_1] [i_6] [6] = (!(arr_5 [i_1]));
                    var_23 = (min(var_23, ((max((max(((var_2 ? var_0 : (arr_4 [8]))), (((var_0 * (arr_10 [i_1] [i_1] [i_3] [i_6] [i_6] [i_1])))))), 1)))));
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_24 = ((104 ? 127 : -115));
                    arr_22 [7] [i_2] [4] [i_7] = (((((arr_1 [i_1 + 3] [i_3 + 1]) < (arr_1 [i_1 - 1] [i_3 + 1]))) ? 1271483148 : ((((arr_5 [i_1]) ? var_9 : (var_2 && var_9))))));
                }
            }
            arr_23 [i_1] &= (((max((arr_12 [i_2]), (arr_12 [i_2]))) | ((((arr_12 [i_2]) <= (arr_12 [i_2]))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_25 = (max(var_25, (((var_11 ? (arr_14 [10] [i_1 - 1] [6] [i_1 + 1] [i_1 + 2]) : var_5)))));
            var_26 = (((var_7 && var_9) && (((var_11 ? var_11 : (arr_6 [i_1] [i_1] [i_8]))))));
        }
        arr_26 [i_1] = (max((((arr_6 [i_1] [i_1] [i_1]) ? (arr_6 [0] [1] [i_1]) : (arr_25 [0] [i_1] [9]))), (arr_25 [i_1] [11] [i_1])));
        arr_27 [i_1] = var_12;
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        var_27 = (((!1615925402) || (((arr_29 [i_9]) || (var_1 && -126)))));
        arr_30 [i_9] = (min((((!((((arr_29 [14]) * (arr_29 [i_9]))))))), (max(1, (min(5120, (arr_28 [i_9] [i_9])))))));
        var_28 = (((var_7 & var_11) >> (((((arr_29 [i_9]) ? (arr_29 [i_9]) : (arr_29 [17]))) - 205))));
        var_29 = -2147483637;
        var_30 = (max((((((arr_28 [i_9] [i_9]) & (arr_28 [1] [i_9]))) >> (((arr_29 [i_9]) - 206)))), (((arr_29 [i_9]) % (((arr_29 [i_9]) ? (arr_28 [i_9] [i_9]) : (arr_28 [i_9] [i_9])))))));
    }
    #pragma endscop
}
