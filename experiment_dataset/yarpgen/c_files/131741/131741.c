/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(((-1 ? ((var_2 ? var_7 : 23999)) : 4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] [i_1] = ((!(min((arr_3 [i_1]), (arr_3 [i_0])))));
                            var_12 *= (min((((((min((arr_3 [i_2]), var_1))) * ((var_3 ? var_0 : 1))))), (((arr_14 [i_0] [i_1] [i_2] [i_3] [i_4]) ? ((((arr_4 [1] [i_1] [i_1]) >> (((arr_11 [i_0] [i_1] [3] [i_3]) - 11811))))) : var_7))));
                        }
                        arr_17 [i_0] [i_0] [i_0] [i_0] = ((((min((arr_2 [i_3]), (min((arr_12 [8]), -28))))) ? (((arr_5 [i_2] [i_1]) ? ((min(var_4, var_4))) : ((-(arr_0 [i_1]))))) : (~var_0)));
                        var_13 ^= (arr_14 [1] [i_1] [i_0] [i_3] [1]);
                    }
                    arr_18 [i_0] [i_1] [i_1] |= var_7;
                    arr_19 [i_2] |= 1;

                    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_14 *= (arr_5 [i_2] [i_1]);
                            arr_25 [i_5] [i_5] [i_5] [i_5] = (min(((min((((!(arr_2 [i_0])))), (arr_23 [i_1] [i_1])))), (min((((arr_22 [i_0] [8] [i_0] [i_0] [i_0]) ? var_10 : (arr_5 [i_0] [i_0]))), (var_3 > var_8)))));
                            arr_26 [i_0] [i_1] [i_2] [i_5] [i_5] [i_6] = 27266;
                            arr_27 [12] [i_6] [i_2] [i_5] [i_5] [i_2] = (min(((var_6 % ((-(arr_6 [i_6] [i_5] [6] [6]))))), var_0));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            var_15 = (min(((((((arr_20 [i_0] [1] [i_5] [i_5]) ? 1 : (arr_3 [i_0]))) < (arr_11 [i_1] [i_2] [i_5] [i_7])))), (min((min(3616664622, 5)), ((var_6 ? (arr_6 [i_1] [i_2] [i_2] [i_7]) : 0))))));
                            arr_31 [i_2] [i_2] [i_5] [i_5] [i_7] [i_7] = ((!(((arr_7 [i_7] [6] [i_1]) < var_2))));
                            var_16 ^= (((((((arr_3 [i_0]) ? 0 : (arr_20 [i_0] [i_1] [i_2] [i_2])))) || (arr_23 [i_0] [i_5]))));
                            var_17 = arr_29 [i_0] [i_1] [i_2] [i_2] [i_5] [i_7];
                        }
                        arr_32 [i_5] [9] [i_2] [i_5] [i_0] [i_5] = ((arr_10 [i_5] [i_2] [i_1] [i_0]) >> (((!(((1 ? 63 : -17)))))));
                        var_18 = ((((var_4 <= (arr_1 [i_1]))) ? ((~(arr_12 [i_2]))) : ((((!(arr_10 [i_0] [i_1] [i_2] [i_0])))))));
                        var_19 += ((var_4 ? 1 : var_7));
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        var_20 += ((-(min(32740, (~var_6)))));
                        var_21 ^= -4667;

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_22 = ((((min(var_5, var_7))) ? (min(((((arr_29 [i_0] [i_1] [i_2] [i_8] [i_8] [i_9]) ? 2242192483 : var_4))), (arr_22 [i_9] [i_8] [i_2] [i_1] [i_0]))) : ((max(((~(arr_36 [i_0] [i_1] [i_1] [i_0] [i_9] [i_1]))), ((-(arr_14 [i_0] [i_1] [i_2] [i_8] [i_8]))))))));
                            arr_38 [i_8] [i_9] [i_0] [i_0] [i_8] = ((min((arr_37 [i_0] [i_0] [2] [10] [i_9]), ((min((arr_10 [i_0] [i_1] [i_2] [i_9]), 117))))));
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_23 = ((-((-6676823375154905243 * (arr_40 [i_8] [i_8])))));
                            arr_42 [i_8] [i_1] [i_2] [i_8] = (min((((var_5 ? ((~(arr_9 [i_0] [i_0] [i_2]))) : ((min(1, 1)))))), ((16 ? (arr_28 [i_0] [i_1] [i_2] [i_1] [i_10]) : ((min(var_2, 649160563)))))));
                            arr_43 [i_8] = (min(((((min((-2147483647 - 1), 3))) ? (max(var_10, (arr_22 [i_10] [i_2] [i_2] [i_2] [i_10]))) : (var_5 > 1))), ((((arr_23 [i_10] [i_1]) ? (((max(var_5, 40)))) : var_0)))));
                            var_24 = (min(4207834341, (((1 ? 48 : (arr_36 [i_0] [i_1] [i_2] [i_8] [i_10] [i_0]))))));
                        }
                        var_25 -= ((((((arr_9 [i_2] [i_8] [i_0]) ? ((var_9 ? 194 : 52)) : (arr_21 [i_0] [i_0])))) ? var_2 : (arr_6 [i_0] [i_1] [i_2] [i_8])));
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_26 = 18446744073709551607;
                            var_27 = (min((((-(arr_8 [i_0] [i_1] [i_11] [i_11] [i_12])))), (9223372036854775807 + var_2)));
                        }
                    }
                }
                var_28 += (((((63 ? (arr_45 [i_0] [i_0] [i_0]) : 41))) ? ((-(arr_46 [i_1] [i_1] [i_1]))) : (max((min(var_2, var_5)), ((min(67, -72)))))));
                arr_49 [i_0] [i_0] = 190;
            }
        }
    }
    #pragma endscop
}
