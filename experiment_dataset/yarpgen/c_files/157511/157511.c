/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [13] = (max((arr_2 [i_0]), ((((!(arr_2 [3]))) ? var_9 : ((~(arr_2 [i_0])))))));

        for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
        {
            var_10 = (max(var_10, (((((((((max(1, var_4)))) >= (((arr_7 [i_0] [0] [i_0]) ? 127 : 3438010399882750399))))) | ((((min((arr_7 [i_0] [6] [16]), (arr_2 [i_0])))) ? var_5 : ((var_6 ? var_7 : (arr_3 [4]))))))))));

            /* vectorizable */
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                var_11 |= ((-(arr_1 [i_1 - 1] [i_1 - 1])));
                var_12 -= ((arr_3 [i_0]) ? (arr_5 [i_1] [i_1 - 3] [14]) : (arr_11 [i_0] [12]));
            }
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                arr_15 [i_0] [i_3] = (((((((max((arr_11 [i_0] [i_0]), (arr_1 [i_3] [i_1])))) ? (((arr_6 [i_0]) ? var_0 : (arr_13 [i_0] [i_1] [i_0]))) : (((max((arr_13 [i_0] [i_1] [i_3]), 1))))))) ? (arr_9 [12] [i_1] [i_3]) : (min((arr_5 [i_1 - 3] [i_1 - 2] [i_0]), var_7))));

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_18 [i_0] [i_0] [1] [i_0] = (max((((arr_11 [i_1 + 4] [i_0]) ? (arr_11 [i_1 + 3] [i_0]) : 34)), (arr_11 [i_1 - 3] [i_0])));

                    for (int i_5 = 4; i_5 < 16;i_5 += 1)
                    {
                        var_13 |= ((((((arr_19 [i_0] [i_1] [i_3] [i_1] [i_4] [i_4] [i_3]) ? (arr_19 [i_0] [i_1] [i_3] [15] [13] [i_5] [i_5]) : (arr_19 [i_0] [i_0] [i_5] [i_3] [i_5 - 2] [0] [i_1])))) ? (((-(arr_17 [5] [5] [i_3] [5] [i_1] [11])))) : ((-(arr_19 [i_1 + 3] [i_5] [i_5] [i_5] [i_5 + 2] [i_5 - 2] [1])))));
                        var_14 = (min(((3907237160259662518 / (arr_10 [i_3] [i_4])), (((867049056014723763 ? 107 : (arr_13 [i_0] [i_3] [i_0])))))));
                        var_15 += ((~(arr_20 [6] [i_1] [i_5 + 2] [6] [i_5])));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        var_16 -= (97 | var_4);
                        var_17 = 116;
                        var_18 *= (arr_20 [i_0] [i_1 - 2] [i_3] [i_4] [i_3]);
                    }
                }
            }
            var_19 += ((((((arr_23 [i_1] [i_1] [i_1] [5] [11]) >> ((((7 ? var_7 : (arr_9 [17] [i_1] [i_1 + 3]))) + 325334541))))) | (arr_7 [i_0] [6] [i_1])));
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 14;i_7 += 1) /* same iter space */
        {
            arr_27 [i_0] [i_0] = 1432681632;
            var_20 = (min(var_20, (arr_2 [i_7 + 3])));
            var_21 = (max(var_21, ((((((var_7 ? (arr_14 [2] [i_0] [10] [i_7]) : (arr_23 [i_7] [i_0] [i_0] [i_0] [i_0])))) ? var_4 : ((var_4 ? var_0 : var_7)))))));
            var_22 *= (~25012);
        }
    }
    var_23 -= ((!(((-23248 ? var_3 : (min(0, var_5)))))));
    #pragma endscop
}
