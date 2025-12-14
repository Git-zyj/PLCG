/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((min(((~(max(var_9, var_18)))), ((var_18 | (var_5 | var_15))))))));
    var_20 = (max(var_20, ((((((((var_2 ? 5072141960898838468 : 1))) ? ((var_3 ? var_12 : var_5)) : (!var_10))) | -var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((min(1979091673842445027, (arr_1 [i_1] [i_1]))));
                var_21 = (arr_4 [i_1]);
            }
        }
    }
    #pragma endscop
}
