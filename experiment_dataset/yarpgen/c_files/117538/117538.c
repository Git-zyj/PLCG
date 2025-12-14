/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((((((arr_5 [1] [i_1] [16]) & var_0))) ? (((((max(97, 159))) ? ((min(65535, var_9))) : var_1))) : ((((max(var_7, (arr_1 [i_0])))) ? var_12 : ((((arr_0 [i_0] [22]) / var_0))))))))));
                var_16 *= (max(((max(97, 1))), (arr_5 [i_1] [i_1] [8])));
            }
        }
    }
    var_17 = (max(var_17, var_6));
    var_18 = (~var_5);
    var_19 = ((var_4 ? (((~0) ? (~1) : (((var_13 + 2147483647) >> (var_0 - 2877891035793020349))))) : var_4));
    #pragma endscop
}
