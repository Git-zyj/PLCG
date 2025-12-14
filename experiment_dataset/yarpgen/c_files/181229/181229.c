/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!((max(var_15, (var_10 - var_14))))));
    var_17 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [8] [8] [i_2] [i_2] = ((+(((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : var_12))));
                        var_18 += (((((arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? var_13 : 410168483)) != (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        var_19 = ((var_12 ? (max((((var_0 ? var_7 : (arr_9 [i_2])))), (min((arr_11 [i_2] [i_1] [i_2]), 1434322118)))) : var_5));
                        arr_14 [i_2] [i_2] [i_2] = ((((((var_7 << 0) + (max((arr_0 [7]), var_8))))) & ((((arr_1 [i_0]) && var_12)))));
                        arr_15 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2] = (max(1, ((3136329357699000093 ? 113 : 1100742078))));
                        arr_16 [i_2] [i_2] [i_2] = (((((1 ? var_4 : (arr_12 [i_0] [12] [i_2] [i_4 + 3])))) ? (arr_2 [i_4 + 3]) : (var_4 * var_0)));
                        var_20 -= ((((max(var_5, (arr_11 [i_1] [i_2 - 1] [i_0])))) ? (min(var_12, var_12)) : (((((arr_11 [i_0] [i_1] [i_0]) <= (arr_1 [i_1])))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_21 += (var_13 + var_9);
                        arr_20 [0] [i_2] [i_2] [i_0] = (((arr_6 [i_2]) ? (arr_6 [i_2]) : 3));
                        arr_21 [i_5] [i_2] [i_1] [i_2] [3] = (((arr_7 [i_2] [i_2]) / var_3));
                        var_22 = (((arr_3 [i_0]) ? (arr_5 [i_2] [i_2] [1]) : var_9));
                        var_23 -= (!var_1);
                    }
                    arr_22 [i_0] [i_1] [i_2] = max((((arr_17 [i_2]) - var_15)), ((min(4200218978, 155))));
                    var_24 = (min(var_24, ((((((15310414716010551511 ? (max(1554114487, 28482)) : 219))) ? (0 || var_6) : 248)))));
                }
            }
        }
    }
    var_25 = (((((((max(4209362236, -614351143)) > (!var_4))))) <= (max(var_9, var_10))));
    #pragma endscop
}
