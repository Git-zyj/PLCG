/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 *= min((min((max(8795824586752, 8795824586752)), 18328521133794891805)), -158);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 1] [i_0 - 1] [i_0] = (min((((!(arr_0 [i_0 - 1])))), (arr_0 [i_0 - 1])));
                    var_20 = (max(var_20, (((((max((arr_3 [20] [20]), ((((arr_4 [i_1]) ? (arr_0 [i_0]) : var_0)))))) ? var_3 : ((((var_10 <= (arr_1 [i_1]))) ? (var_13 & var_2) : (arr_6 [i_0 - 1] [i_1] [i_2 + 2]))))))));
                }
            }
        }
        var_21 = (max(var_21, (((-((((min((arr_6 [i_0] [i_0 - 1] [i_0 - 1]), (arr_7 [i_0] [8] [8])))) << (((arr_3 [i_0 - 1] [i_0 - 1]) - 2169992252823037347)))))))));
    }
    for (int i_3 = 3; i_3 < 18;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = (max(((-(arr_0 [i_3 + 2]))), (arr_0 [i_3 + 2])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    var_22 = (((arr_1 [i_3 - 3]) ? (((max((arr_15 [i_4] [i_4] [1]), (arr_15 [i_4] [i_4] [i_5]))))) : var_2));
                    var_23 = (i_4 % 2 == zero) ? (((((((arr_0 [i_3 + 2]) + 2147483647)) << (((arr_16 [i_4] [i_4] [i_5]) - 4292314260)))))) : (((((((arr_0 [i_3 + 2]) + 2147483647)) << (((((arr_16 [i_4] [i_4] [i_5]) - 4292314260)) - 2252755155))))));
                    var_24 -= (max((((arr_16 [i_5] [i_3 + 2] [i_3]) ? (arr_16 [i_5] [i_3 + 3] [i_3 + 3]) : (arr_16 [i_5] [i_3 + 3] [i_5]))), var_8));
                    var_25 &= var_6;
                }
            }
        }
    }
    var_26 = ((~((var_13 ? var_1 : (var_9 == var_3)))));

    for (int i_6 = 3; i_6 < 19;i_6 += 1)
    {
        var_27 = ((~(max((arr_17 [i_6 - 2] [i_6 - 1]), (arr_13 [i_6 - 1] [i_6 - 2])))));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_28 = (((((arr_17 [6] [17]) | (arr_4 [i_6])))) ? ((((var_9 && (arr_14 [i_6] [i_7]))))) : (arr_16 [i_6] [i_6 - 2] [i_6]));
            arr_21 [i_6] [i_6] = (arr_12 [i_6] [i_7]);

            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                arr_24 [i_6] = var_17;
                arr_25 [i_7] [i_7] [i_6] = -8795824586752;
                var_29 = (((arr_22 [i_6 - 3] [i_6 - 3] [i_6]) & (arr_12 [i_6] [i_6 - 2])));
            }
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                var_30 = (max(var_30, ((((arr_22 [i_6] [1] [i_6 - 3]) ? (arr_16 [14] [i_7] [14]) : (((arr_6 [i_6] [i_7] [i_9]) ? var_17 : (arr_7 [i_7] [i_7] [i_7]))))))));
                var_31 *= (((arr_15 [6] [6] [6]) ^ ((((arr_26 [i_7] [i_7] [i_7] [i_6]) > var_3)))));
                arr_29 [i_6] [i_7] [i_6] = 6162;
            }
            arr_30 [16] [16] [i_7] |= (arr_1 [i_7]);
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_32 = ((((((arr_4 [i_6 + 1]) ? (arr_4 [i_10]) : (arr_4 [i_10])))) ? (((arr_4 [i_6 - 3]) / (arr_4 [i_6 - 3]))) : (((arr_4 [i_6 - 3]) ? (arr_4 [i_6 - 3]) : (arr_4 [i_6 + 1])))));
            var_33 = (min(var_33, (((((min(var_18, var_4))) ? ((-(arr_10 [i_6] [i_6 + 1]))) : (arr_10 [i_6] [i_6 - 2]))))));
            var_34 = (min(((((max((arr_2 [i_10]), (arr_13 [i_6] [i_10])))) ? (((-(arr_7 [i_6] [i_10] [i_10])))) : (arr_10 [i_6] [i_10]))), (((~(arr_33 [i_10]))))));
        }
        var_35 = (((((var_15 + 2147483647) << (((arr_6 [i_6] [1] [i_6]) - 50970))))));
    }
    var_36 = var_12;
    #pragma endscop
}
