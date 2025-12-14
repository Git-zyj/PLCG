/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_4 == (((((var_4 ? 13506710628402856496 : -104))) ? (var_1 & var_3) : (min(var_9, var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (((((((((arr_0 [3]) ? (arr_1 [0]) : (arr_3 [i_0])))) ? var_10 : ((103 ? (arr_3 [i_0]) : -8188))))) ? (min(var_1, (arr_0 [1]))) : ((~(arr_1 [7])))));
                arr_5 [i_1] = var_4;
            }
        }
    }
    var_16 = (((~(max(12886952565270332688, 2768212051164414290)))));
    var_17 = (max(var_17, ((min((((~(~29)))), (((((var_8 ? 2768212051164414290 : var_3))) ? var_12 : ((2768212051164414290 ? 15678532022545137315 : var_0)))))))));
    #pragma endscop
}
