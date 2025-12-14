/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = var_2;
        arr_2 [i_0] = (var_10 | 1524192610);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_12 = (((arr_1 [i_1] [i_0]) & (((var_5 >> (((arr_1 [i_0] [i_0]) - 457493899362485478)))))));
            var_13 = 38;
        }
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            var_14 -= ((((max(var_5, var_10)) >> var_3)));

            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                var_15 = (var_4 ? var_6 : ((((max(8039, (arr_4 [i_3] [i_3] [i_3 - 1])))))));
                arr_10 [i_0] [i_0] &= (max(var_4, (((((var_9 * (arr_6 [i_3])))) - var_3))));
                var_16 &= var_10;
                var_17 = (max((((max(91, (arr_8 [2] [2] [i_0] [i_0]))))), ((((((arr_9 [i_2] [i_0] [i_3 + 1] [i_3]) ? (arr_6 [i_0]) : var_10))) ? var_4 : 4475245014854300306))));

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_13 [i_4] [i_2] [i_2] [i_2] = (min((min(var_0, (((var_2 ? (arr_3 [i_0] [i_3] [i_4]) : 0))))), (((max(31190, 1))))));
                    var_18 = (arr_11 [i_0] [i_2 - 3] [i_3] [i_2 - 3]);
                    arr_14 [i_0] [i_0] [6] [i_2] [i_0] |= var_4;
                    arr_15 [i_0] [i_4] [i_3 + 1] = var_8;
                    var_19 = ((((-(7414608965305456170 > var_2))) | (arr_0 [i_0])));
                }
            }
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                var_20 = 13486289605286525994;
                var_21 = ((var_1 / var_10) | var_6);
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_22 += (-7347146347931498777 & -12616);
                            var_23 += var_8;
                            var_24 = ((+((((((arr_5 [i_5]) ? var_9 : (arr_22 [i_0] [i_2] [i_6] [i_6]))) > var_8)))));
                            var_25 = (max(((-55085 ? ((0 - (arr_24 [i_7] [i_7] [i_7] [i_7]))) : ((var_6 ? var_1 : 8264)))), (arr_4 [i_0] [i_2] [i_6])));
                        }
                    }
                }
            }
            var_26 = (((arr_17 [i_2] [i_2] [i_2] [i_2]) > ((((arr_4 [i_0] [i_0] [i_2 - 2]) || var_5)))));
            var_27 = 18446744073709551592;
            arr_25 [i_0] [i_0] [i_2] = (arr_24 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 + 1]);
        }
    }
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        var_28 = 3;
        var_29 = (min(-8, 44));
        var_30 -= (((~((min(1, 127))))));
        var_31 &= (((((arr_22 [i_8 - 1] [i_8 - 1] [i_8] [i_8]) << (((((arr_9 [i_8] [i_8 - 1] [6] [i_8]) + 51)) - 11))))));
    }
    var_32 = var_5;
    #pragma endscop
}
