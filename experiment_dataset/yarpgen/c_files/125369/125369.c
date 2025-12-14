/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] = 8192;
                var_14 = (max(var_14, (((((((((arr_2 [i_0 + 1] [i_1]) | var_0))) ? (((438692072 ? var_7 : (arr_2 [10] [i_0 + 1])))) : ((-1 ? (arr_0 [i_0] [11]) : var_4)))) | 213)))));
            }
        }
    }
    var_15 = ((((((max(0, var_11))) ? (((var_2 ? 2080766373 : var_11))) : (var_7 | -3624676480683675045))) | (min(var_6, ((21 ? var_0 : -3624676480683675045))))));
    var_16 = ((((((min(1322388408017683493, var_7)) & (var_11 ^ var_8)))) ? ((var_8 ? (((167 ? var_6 : var_0))) : ((var_13 ? var_9 : var_1)))) : ((((var_1 != (~var_3)))))));
    #pragma endscop
}
