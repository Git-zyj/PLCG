/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((((arr_0 [i_0]) ? (arr_1 [1]) : -1))))));
        var_12 = (arr_0 [i_0]);
        var_13 = (min((((-(8802217568552193237 && 14)))), (min(var_0, ((var_11 ? 8802217568552193237 : (arr_0 [3])))))));
        arr_3 [i_0] = ((arr_1 [i_0]) ? ((((max(-6, 27004))) ? (((arr_0 [4]) ^ (arr_1 [i_0]))) : (arr_1 [i_0]))) : (((12288 ? ((2097151 ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (arr_0 [2])))));
        var_14 = (min(((max((arr_1 [i_0]), 12288))), 21));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                {
                    arr_12 [i_2] = (max(((var_3 != ((((arr_11 [i_1] [i_2] [i_3 + 2] [i_3]) ? (arr_6 [i_3]) : (arr_6 [6])))))), (arr_11 [i_1] [i_3] [i_3] [4])));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_21 [9] [i_2] [i_2] [i_2] [i_2] = (arr_13 [i_2]);
                                arr_22 [10] [i_2] [i_3 - 2] [i_3 - 2] [i_3] [i_3] = (min((max((max((arr_10 [i_1] [11] [i_1] [8]), 63)), (((arr_11 [i_1] [i_1] [i_1] [5]) & 8271418654034914729)))), 8802217568552193224));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (((((~((9644526505157358385 >> (var_6 - 1513794728)))))) ? (max(var_5, var_1)) : -var_1));
    #pragma endscop
}
