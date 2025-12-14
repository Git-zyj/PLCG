/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = var_5;
                arr_5 [i_1] [12] [i_1] = ((((((((var_4 ? (arr_1 [i_0] [i_1 + 1]) : -6142453881789074912))) ? ((131071 ? (arr_0 [i_1]) : var_2)) : ((var_6 ? 14283 : 7553))))) ? (((4294836224 > ((var_9 ? (arr_0 [i_0]) : var_0))))) : (min(((min((arr_1 [i_0] [i_0]), var_8))), var_11))));
            }
        }
    }
    var_14 = var_11;
    #pragma endscop
}
