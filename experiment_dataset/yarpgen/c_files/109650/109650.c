/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((var_5 ? -27322 : var_6)) - (max(var_13, 533855156))))) ? 403224070 : ((((min(var_8, var_13)) == var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2 - 2] [i_3] [i_3] = -3573483982575123240;
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3] [i_0] = (((arr_11 [i_2 - 2] [i_2] [i_2 + 1] [i_2] [i_2 + 1] [6] [i_2 - 1]) && ((((arr_6 [1] [i_2] [i_0] [i_0]) ? 143 : var_4)))));
                            }
                        }
                    }
                    arr_14 [15] = ((((min((((var_11 ? 27322 : var_8))), (-24613 - 3742351081521957585)))) ? (((((56802488 >> (var_9 + 159583418))) + ((~(arr_2 [i_0] [17])))))) : ((690502373 * (max(-1056302333907507277, (arr_9 [i_0] [17] [17] [i_1])))))));
                    var_16 = var_1;
                }
            }
        }
    }
    #pragma endscop
}
