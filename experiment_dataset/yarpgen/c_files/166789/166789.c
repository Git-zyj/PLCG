/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 *= ((((max((min(99, 5500233484983304239)), ((((arr_3 [12] [13]) ? var_7 : var_9)))))) ? (((var_3 - var_0) + (5500233484983304242 + -1851705993))) : (((((min(1582769740268904132, 424875247)) > 7958))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, (((1 ? ((((((arr_11 [i_0] [i_1] [i_2 - 1] [i_2 - 1]) << (arr_12 [i_0 + 1] [i_0] [1] [i_0] [i_4])))) ? ((max(1851705992, var_6))) : var_9)) : (((min((arr_4 [i_2 - 1] [i_3 + 1] [i_0 - 2]), ((((arr_5 [i_2] [i_3]) >= (arr_12 [i_0] [i_4] [i_4] [i_3] [i_0])))))))))))));
                                arr_15 [i_0] [12] [i_4] [i_3] [i_4] |= ((((!(var_9 < var_7))) ? (min(((((arr_14 [i_0 - 2] [i_1]) ? var_1 : var_9))), (min((arr_11 [i_0] [i_1] [i_0] [i_3]), (arr_2 [i_3 + 1]))))) : ((((((arr_0 [i_0]) ? (arr_3 [i_0 + 1] [i_4]) : var_6)) << (5500233484983304239 - 5500233484983304238))))));
                                var_13 = ((((min(-1851705990, (min(var_3, var_8))))) ? ((var_6 ? (((-(arr_13 [4] [i_1] [i_4] [i_3] [i_4])))) : (var_8 * var_7))) : ((((arr_0 [i_0 - 1]) ? (((arr_4 [i_2] [i_3] [i_4]) ^ (arr_6 [i_0] [i_1]))) : (((arr_0 [i_1]) ? var_8 : var_5)))))));
                                arr_16 [i_3] [i_3] = var_1;
                                var_14 = (min(112, ((var_3 ^ (max(var_6, var_5))))));
                            }
                        }
                    }
                    arr_17 [i_0] [4] = (max((min((arr_11 [i_0 - 1] [i_1] [i_0 - 1] [i_2 + 2]), (arr_12 [1] [i_0] [i_0 + 1] [i_2] [i_2 + 1]))), ((min(-1851705992, 12820)))));
                }
            }
        }
    }
    #pragma endscop
}
