/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (min((((arr_4 [i_0 + 1] [i_0 - 1] [i_0 + 3]) ? (arr_3 [i_0] [i_0] [i_0 + 3]) : (arr_3 [i_0] [i_0] [i_0 + 2]))), -32751));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_21 = ((((min(((2 ? 124 : 19)), ((var_7 ? 2411327773 : (arr_5 [i_2] [i_1] [i_2])))))) ? (min(var_12, var_2)) : ((~(((!(arr_6 [i_2] [i_2] [i_0] [i_0]))))))));

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        arr_13 [i_3] [8] [i_2] = (((((22764 <= 42) || ((min(1883639515, -6619240721369009483))))) ? ((~(arr_12 [i_3 + 4] [i_3] [i_3 - 1] [i_3 + 2] [i_3 + 4] [i_3]))) : ((min((arr_12 [i_3] [i_3] [i_3] [i_3 + 2] [i_0 - 1] [i_0]), 43506)))));
                        var_22 = (arr_8 [i_1] [i_1] [i_1] [i_1]);
                        arr_14 [i_0] [i_1] [i_1] [i_3] = (min(3280765779, -1054506435));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_1] [15] [i_4] [15] = (((arr_4 [i_0 + 2] [i_1] [i_5 - 3]) - (arr_20 [i_0 + 3])));
                            var_23 = var_19;
                            arr_22 [i_0 - 1] [i_5 - 2] [i_2] = (((var_19 + 2411327782) == (1883639515 % 1883639526)));
                            var_24 = (((arr_7 [i_1] [i_4] [i_5]) | 2305843008676823040));
                        }
                        for (int i_6 = 3; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_25 = var_14;
                            var_26 ^= (((arr_5 [i_6 - 3] [i_1] [i_0 + 3]) & (arr_5 [i_6 + 2] [i_6 - 3] [i_0 + 1])));
                            var_27 = 3683378948;
                        }
                        var_28 |= ((arr_0 [i_0 + 3] [i_0 + 1]) | 2047);
                        arr_26 [5] [i_1] [i_0] = var_9;
                        var_29 = (max(var_29, (arr_7 [i_4] [0] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_30 = (((arr_8 [i_0] [i_0 - 1] [i_0] [i_0 + 2]) ? (arr_8 [i_0 - 1] [i_0 + 3] [i_0] [i_0 + 2]) : var_1));
                        var_31 = (~22764);
                        var_32 = (((arr_8 [i_7] [i_2] [i_1] [i_0 + 1]) <= (arr_8 [i_0 + 1] [i_1] [i_2] [i_7])));
                        var_33 = (arr_23 [i_0] [17] [i_2] [i_7] [i_2] [i_1] [i_7]);

                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_34 = ((1523522235 / (arr_29 [i_0 + 1] [i_0] [i_0 + 2] [i_0 + 3] [i_0 + 1])));
                            var_35 = ((1883639528 / (arr_31 [i_0] [i_1] [i_2])));
                            arr_32 [i_0] [i_1] [i_2] [8] [i_8] = (((arr_8 [i_1] [i_1] [16] [i_1]) >> (((arr_25 [i_0] [i_0] [3] [i_0] [i_0 + 3]) - 878066946))));
                            var_36 = (((arr_7 [i_0 + 2] [i_0 - 1] [i_8]) / (1883639518 & 22790)));
                            var_37 = (min(var_37, (var_6 & var_1)));
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            var_38 = (max(var_38, (arr_2 [i_0 + 2] [i_0])));
                            arr_35 [5] [5] [5] [i_7] [i_9] = ((1054506434 ? (arr_34 [i_9] [i_0 + 1] [i_9]) : (arr_34 [i_0] [i_0 + 1] [i_0])));
                            var_39 = (((arr_27 [i_0 + 3] [9] [i_0 + 2] [i_0 + 1] [i_0 - 1]) != 2411327779));
                            var_40 = (arr_23 [0] [i_9] [i_7] [i_7] [i_0] [i_1] [i_0]);
                        }
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            var_41 -= (((arr_18 [i_0 + 2] [i_0 + 1] [i_0 - 1]) + (arr_18 [i_0 - 1] [i_0 + 1] [i_0 + 1])));
                            arr_38 [i_0] [i_10] [i_0] [i_0] = 27448;
                        }
                    }
                    arr_39 [i_0] [i_0] [i_2] = (min((min(94035527642025445, 12307)), 632305061));
                    arr_40 [i_1] [0] [i_2] = (+-22764);
                }
                arr_41 [i_1] = (min(var_7, (((((1048320 + (arr_29 [6] [i_1] [i_1] [i_1] [i_1])))) - (94035527642025453 + 1048322)))));
            }
        }
    }
    var_42 = (max(var_2, var_4));
    var_43 = var_12;
    var_44 &= var_7;
    #pragma endscop
}
