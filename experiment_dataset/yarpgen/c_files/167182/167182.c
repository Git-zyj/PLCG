/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = ((-((+((var_6 ? (arr_3 [i_0] [i_1]) : (arr_0 [i_1] [11])))))));

                for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        var_17 -= (arr_3 [1] [i_1 - 1]);
                        arr_8 [i_0] [i_1 - 1] [i_2] [i_3] [i_0] [i_1 - 1] = ((((arr_1 [i_0 + 2] [i_0 + 3]) || (arr_1 [i_0 + 3] [i_0 + 3]))) || ((!(arr_1 [i_0 + 3] [i_0 + 1]))));
                        var_18 = var_9;
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        arr_11 [8] [i_1] [i_2] [i_4] = ((!(((~((var_10 ? 1669985662 : var_3)))))));
                        var_19 = (((arr_2 [i_4] [i_1] [i_0]) >> ((((~(arr_2 [10] [i_2 + 1] [i_1 - 1]))) + 13365))));

                        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            var_20 |= (((((11644 >= 5280) ^ ((~(arr_5 [i_2] [i_2]))))) < ((((((0 ? 5286 : -676750455))) ? (((arr_1 [i_1] [i_1]) | (arr_6 [i_4] [i_1 - 1]))) : (var_1 < 12592462531944006314))))));
                            var_21 &= (((-(min(var_2, 2147483647)))) / -5288);
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            arr_18 [i_2] = ((~(arr_12 [i_0] [i_4] [i_4] [1] [i_1 - 1] [i_1 - 1] [i_0])));
                            arr_19 [i_2] [i_1] [10] [i_4] = (((arr_13 [i_0] [i_1] [i_0] [i_4] [i_0] [i_0]) || (((~(max((arr_3 [i_0] [i_0]), (arr_6 [i_2] [8]))))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            var_22 = ((var_3 ? var_6 : (arr_6 [i_2] [i_1 - 1])));
                            var_23 &= ((-(arr_10 [i_0 + 3] [2] [i_0] [i_0] [i_1 - 1] [i_4])));
                            arr_22 [i_0] [11] [2] [i_2] [i_2] [i_4] [i_7] = (arr_9 [i_7] [i_4] [i_2] [i_0 - 1] [i_0 - 1]);
                        }
                        arr_23 [i_2 + 1] [i_2] [i_0] = ((36 ^ ((((!(((-(arr_3 [i_0] [0]))))))))));
                        var_24 = (arr_2 [i_0] [i_0 + 1] [i_2 - 2]);
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        var_25 = ((-5271 ? ((-(arr_3 [i_0 - 1] [i_0 - 1]))) : ((var_11 ? (arr_3 [i_0] [i_0 - 1]) : (arr_1 [i_0 - 1] [i_1 - 1])))));
                        var_26 = ((((var_6 == (arr_15 [8] [i_8] [2] [i_8] [i_2]))) ? (arr_16 [i_0 - 1] [i_1] [i_2] [9] [i_2 + 1] [3]) : ((-var_5 | ((36 ? var_4 : 10632813667842839160))))));
                        var_27 = (max(var_27, var_6));
                    }
                    var_28 = (max(var_28, (((-((-((max((arr_1 [i_0 + 2] [i_0 + 2]), 5264))))))))));
                    var_29 = (min((~var_14), 4294967295));
                }
                /* vectorizable */
                for (int i_9 = 2; i_9 < 10;i_9 += 1) /* same iter space */
                {
                    arr_30 [3] [3] [3] = (~-10632813667842839164);
                    arr_31 [i_0] [i_0] = ((((((7813930405866712458 && (arr_28 [i_9 + 2] [i_1] [i_0 + 1]))))) ^ 10632813667842839145));
                }
                arr_32 [i_0] = (((((-(((arr_27 [i_0] [i_1] [0] [0]) + 60))))) ? 18446744073709551602 : (~-1)));

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_30 = ((5304 / (arr_20 [8] [i_1] [6] [i_1 - 1] [i_1])));
                    var_31 = (((min(((var_8 || (arr_4 [i_1]))), (!-1))) ? (((max(var_12, (arr_26 [i_0 - 1] [2] [i_10] [6]))))) : ((max((!var_1), var_12)))));
                }
            }
        }
    }
    var_32 = (4865366456355268877 ? (((var_9 ? (!var_11) : var_1))) : ((var_4 ? ((15843802101683584717 ? 4865366456355268882 : var_2)) : var_0)));
    var_33 = var_12;
    #pragma endscop
}
