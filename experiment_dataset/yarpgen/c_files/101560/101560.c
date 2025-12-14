/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            arr_10 [i_0] [i_4] [i_2] [i_3] [i_4] = 631800872;
                            var_12 -= (((((-29374 ? 631800872 : 39495))) && (((var_8 ? -631800872 : var_4)))));
                            var_13 = (max(var_13, (((((((-631800863 ? var_5 : var_2))) ? (arr_2 [i_1 - 2]) : ((var_5 ? var_7 : var_10))))))));
                            arr_11 [i_0] [i_1 - 2] [i_1 - 2] [i_3 - 1] [i_4] [i_4] = (min(var_10, (!26041)));
                        }
                        var_14 = (min((1 * -20304), var_9));
                        arr_12 [i_0 + 3] [i_0] [i_0] [i_0 - 2] = var_0;
                    }
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        var_15 = (((var_4 & 39495) ? ((481982019797964701 & (arr_9 [i_0 + 2] [i_1] [i_0 + 1] [i_1 - 2] [i_5 + 1]))) : (((((-1905816708 ? 248 : 631800862)) ^ (var_8 | var_7))))));
                        var_16 -= ((~(-2147483647 - 1)));
                        var_17 = ((-18 ? (-2147483647 - 1) : 6488127367451875097));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_18 = (max(var_3, 481982019797964699));

                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            arr_24 [i_0] [i_0] [i_7] [i_6] = (max((481982019797964689 * var_8), var_7));
                            var_19 = (min(var_19, ((((((var_5 * var_4) / -var_8)) * (var_9 - 5))))));
                            var_20 = var_4;
                        }
                        var_21 = (min(var_21, (((((max(((0 << (((arr_16 [2] [i_1] [i_1] [i_6] [i_1] [i_1]) - 73)))), (arr_7 [i_0] [i_2] [i_2] [i_6] [i_0] [i_0])))) ? (min((26040 <= 253), (79 - 9))) : (((!(-919353823 && 26056)))))))));

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            var_22 = (arr_22 [i_6] [i_2] [14]);
                            var_23 += (((((arr_25 [i_0] [i_0] [i_6] [i_0]) ? (arr_20 [i_0] [i_1] [8] [i_6] [i_6]) : -409043586)) != (arr_6 [i_0 + 3] [i_0] [i_0])));
                        }
                        var_24 |= var_10;
                    }
                    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                    {
                        var_25 = (min(17964762053911586916, -32757));
                        var_26 += (min((((-((var_5 + (arr_7 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 1] [i_0] [4])))))), var_10));
                    }
                    var_27 &= ((var_0 ? (max((arr_9 [i_2] [i_2] [i_1] [i_0 + 3] [i_0]), 17964762053911586932)) : (((max(var_11, (arr_5 [i_0 + 1])))))));
                    var_28 = ((((((var_6 <= var_3) != (-3873 & -631800851)))) + (7885876100242338815 <= 30)));
                    var_29 *= ((((var_0 & (~226))) & ((var_5 >> ((((1 ^ (arr_2 [i_0 - 1]))) - 59))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            {
                arr_35 [1] [i_10] [i_10] = (((((arr_5 [i_11]) + (arr_0 [i_10]))) - (((0 <= var_10) << var_0))));
                var_30 = (((var_9 <= var_6) ? var_8 : (arr_16 [i_11] [i_10] [i_10] [i_10] [i_10] [i_10])));
            }
        }
    }
    var_31 = var_4;
    #pragma endscop
}
