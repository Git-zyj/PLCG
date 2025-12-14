/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_20 -= ((+((7516231697748342528 ? (18446744073709551615 != var_5) : var_16))));
                            var_21 = ((((((arr_9 [8] [8] [i_3] [8] [i_4]) ? (arr_9 [i_0] [i_1] [2] [2] [i_0]) : (!7516231697748342528)))) <= (((~54323) ? (((arr_3 [i_4]) ? 0 : var_15)) : (arr_13 [i_1 - 2] [i_1] [i_2] [i_2] [i_1] [i_1 - 2])))));
                            var_22 = (((7516231697748342542 ^ 26183) && ((min(91, var_6)))));
                        }
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            var_23 = var_18;
                            var_24 = ((var_0 ? 125 : ((((min((arr_18 [6] [6] [i_2] [i_3] [i_5 + 1] [i_2]), (arr_0 [i_3])))) ? var_4 : var_19))));
                            var_25 = ((((-(arr_2 [i_1 + 1]))) ^ ((((!(arr_2 [i_1 + 1])))))));
                            var_26 += (min((min(117, 3452851917659376033)), ((((((2147483628 ? -4739 : -118))) ? (min(27174, 17)) : (-2147483647 - 1))))));
                            var_27 = 18446744073709551596;
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_21 [i_3] [i_6] = (arr_3 [i_6]);
                            var_28 = 1985219504;
                            var_29 = (min(var_29, ((((arr_15 [i_0] [0] [i_2] [i_0] [i_0]) | (arr_4 [i_0] [4]))))));
                            var_30 = (175 ? (arr_10 [i_3]) : (((arr_9 [i_2] [5] [2] [i_1 - 1] [i_6]) | (arr_9 [i_0] [i_1] [i_2] [i_1 + 1] [i_1 + 1]))));
                        }
                        var_31 = (((~((max(0, var_11))))));
                    }
                }
            }
        }
        arr_22 [i_0] = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_23 [i_0] &= ((-(max((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [4]) ? (arr_4 [i_0] [i_0]) : var_14)), 226))));
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        var_32 = (max(var_32, ((((arr_16 [i_0] [i_8] [i_8] [i_7] [7] [i_0] [i_0]) < (((arr_16 [i_0] [i_7 - 1] [i_7 - 1] [i_8] [i_0] [i_9] [0]) ? 18446744073709551596 : (arr_16 [1] [i_9] [i_8] [i_8] [1] [i_8] [i_7 + 1]))))))));
                        var_33 = (min(var_33, ((max((arr_11 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]), (((!(arr_28 [i_7] [i_7] [i_7 - 1] [i_7 - 1])))))))));
                    }
                }
            }
        }
    }
    var_34 = (147 == var_19);
    #pragma endscop
}
