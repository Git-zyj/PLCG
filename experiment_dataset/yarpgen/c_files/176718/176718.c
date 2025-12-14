/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [15] = var_1;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_2] [i_0] = ((((((arr_3 [i_0] [i_1] [i_0]) ? (arr_3 [i_2] [20] [i_0]) : 224))) ? 5932681163930264541 : ((var_3 ? -8414661866415672424 : 1))));

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_18 = (min(var_18, ((((arr_8 [i_3 + 1] [i_3 + 2] [i_3 - 1] [i_1]) ? 2377425511 : (arr_8 [i_3 - 1] [i_3 + 2] [i_3 + 1] [11]))))));
                        arr_10 [13] [i_1] [i_2] [i_3 + 1] = ((1 ? 186827965 : 11));
                        var_19 += ((arr_8 [i_0] [i_3 - 1] [i_2] [i_0]) ? 6 : (arr_8 [i_0] [i_3 - 1] [i_2] [i_3]));
                    }
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_20 = (((((((!(arr_1 [i_0]))) ? (!6) : (arr_0 [i_0] [11])))) ? var_16 : (((((1 ? 1 : var_0)) != var_2)))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {

                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            var_21 &= (+-8);
                            arr_18 [i_0] [i_1] [i_4] [i_5] [i_6 + 3] [i_6] = arr_16 [i_0] [i_6] [i_1] [i_1] [i_4] [i_5] [i_6 + 2];
                            var_22 = ((((var_9 & (arr_6 [i_4])))) ? (((169 ? 1 : 51617))) : (arr_13 [i_0] [i_0]));
                        }
                        var_23 = (((arr_3 [i_5] [i_4] [i_0]) ? (arr_3 [i_5] [i_4] [i_0]) : 198));
                        arr_19 [i_0] [7] [i_0] [i_0] = var_14;
                        var_24 = ((1798623806888533247 & (arr_13 [i_5] [8])));
                        var_25 += ((var_15 ? (arr_14 [i_0]) : var_3));
                    }
                    arr_20 [1] [1] = 1;
                    arr_21 [i_0] [i_0] [i_1] [i_4] = ((17636927575426789125 ? -2809885481787729800 : 2954026934));
                }
                arr_22 [14] [i_1] [1] &= ((((max(var_9, (var_4 && 3341815149)))) ? (((!(arr_13 [i_0] [i_1])))) : 197));
            }
        }
    }
    var_26 = ((((((2377425522 ? 8440559856774333526 : 2208781630)))) ? ((var_6 ? var_16 : -var_15)) : ((min(-var_16, var_1)))));
    var_27 += ((((min((126 & var_3), var_3))) ? ((var_10 ? var_4 : -var_13)) : var_4));
    var_28 = var_12;
    #pragma endscop
}
