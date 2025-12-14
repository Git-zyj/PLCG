/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((((((((var_2 + 2147483647) >> (25437 - 25436)))) ? var_2 : (var_3 / -8909310565649215359))) > var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 += (var_11 || (((-(var_1 / var_5)))));
                var_14 = (((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) >> (min((((arr_3 [i_0] [i_1]) ? (arr_1 [i_1] [i_0]) : 1)), ((((arr_2 [i_0] [i_0]) <= 25422)))))));
                arr_6 [i_0] [i_1] [i_0] = (((((3410041966176444274 >= (arr_3 [i_1] [4])))) - (arr_3 [i_0] [i_0])));
                var_15 += ((!(((~((((arr_5 [i_0] [i_1] [i_0]) && var_5))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_16 = (((((var_2 ? var_11 : (arr_12 [i_2])))) ? (arr_12 [i_0]) : ((-25437 ? (arr_12 [i_2]) : (arr_12 [i_0])))));
                            arr_13 [18] [i_2] [6] [i_0] = ((var_10 << ((-3343970521918116338 ? (((var_11 * (arr_1 [i_0] [i_1])))) : ((var_0 / (arr_4 [i_0])))))));
                            var_17 &= (arr_1 [i_0] [i_1]);
                            arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] = 25453;

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                arr_19 [i_0] [i_0] [i_2] [i_2] [i_4] = (((arr_12 [i_1]) ? 25449 : (arr_16 [i_1] [i_3] [20] [i_1] [i_0])));
                                var_18 = (((((arr_17 [i_1] [i_4]) ? var_8 : var_0)) ^ var_6));
                                arr_20 [i_0] [i_0] [i_4] [i_0] [i_0] = ((var_10 ? (arr_4 [i_1]) : var_11));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_4;
    #pragma endscop
}
