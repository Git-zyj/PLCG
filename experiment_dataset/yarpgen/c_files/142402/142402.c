/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((min(1792480338, 2502486947))) ? 1792480338 : (max(var_9, 17592169267200))))) ? (((((max(var_17, var_7)) != (var_4 >= -1899556858))))) : ((var_9 ? var_2 : ((var_9 ? var_4 : var_11))))));
    var_19 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((var_1 + ((var_3 ? ((1792480338 ? 2502486957 : 249)) : (min(1792480338, (arr_3 [i_1]))))))))));
                arr_5 [i_0] [i_0] = (~(((arr_4 [i_1] [i_0] [i_0]) ? (max(var_2, var_3)) : 249)));
                var_21 = 1;
            }
        }
    }
    #pragma endscop
}
