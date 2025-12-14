/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 = (((((arr_5 [i_0]) ? 2156795329 : var_1))) ? (max(2156795329, 2311098899)) : (((arr_5 [i_1]) ? 2156795316 : 2156795329)));
                            var_16 = (min(var_16, ((max(((((((var_3 ? (arr_11 [i_3] [i_2] [i_1] [i_0]) : (arr_2 [i_1])))) ? ((max((arr_2 [i_0]), (arr_6 [i_3] [i_3])))) : (max(2097136, var_7))))), (min(2138171989, var_14)))))));
                        }
                    }
                }
                arr_12 [i_0] [i_0] = max((min(2097143, (arr_5 [i_0]))), (min(var_11, (arr_5 [i_0]))));
            }
        }
    }
    var_17 = ((((max((((var_3 ? var_4 : var_5))), ((48 ? var_13 : var_3))))) ? (max((((var_5 ? 65 : 29594))), (max(2156795316, var_12)))) : ((((min(var_12, -2097136))) ? var_10 : var_9))));
    #pragma endscop
}
