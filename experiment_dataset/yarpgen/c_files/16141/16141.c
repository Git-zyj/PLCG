/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (((((~(max(var_2, var_8))))) ? (((((!(arr_1 [i_0])))) / ((((arr_3 [i_0] [16]) != -6))))) : ((7695 >> (((((-7783294763592997164 + 9223372036854775807) >> (96 - 67))) - 2682352937))))));
                var_13 = max(((max((arr_2 [i_1 - 1] [i_1 + 1]), 32767))), ((~((-7347979329264513744 ? (arr_0 [i_0] [0]) : 1723320487)))));
            }
        }
    }
    var_14 = (min((((var_7 ? (min(var_12, (-2147483647 - 1))) : ((7347979329264513739 ? var_5 : -1))))), var_4));
    #pragma endscop
}
