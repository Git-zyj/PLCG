/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_4 || 16863110672438271174) < (var_6 < 1583633401271280441))) || (((var_12 || var_7) && (var_10 && 0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 = ((((((((arr_0 [i_0]) & 120))) & (var_1 | var_7))) < (((((var_13 || var_3) < ((((arr_4 [i_0] [i_1] [i_1]) || (arr_4 [i_0] [i_1] [i_0]))))))))));
                var_16 ^= (((((1 || -16384) < ((((arr_0 [i_0]) || 19))))) || (((var_11 || var_3) || (((arr_1 [14]) < 1))))));
            }
        }
    }
    var_17 = ((((((var_10 < var_10) < (var_2 || var_6)))) < ((((var_12 || var_13) < (3569925254 < 0))))));
    #pragma endscop
}
