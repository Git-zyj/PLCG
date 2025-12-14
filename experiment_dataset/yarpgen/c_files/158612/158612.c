/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(var_10, ((32767 ? -123 : 198))))) ? var_9 : ((min(var_5, var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = min(((((((var_1 * (arr_4 [0] [i_1] [i_1])))) ? var_5 : var_2))), (min((var_2 + var_5), (arr_1 [i_0]))));
                var_14 = (max(var_14, (arr_0 [i_0])));
                var_15 = (var_11 ? (((min(1, 58)))) : ((-var_10 * (min(1299796179380238777, var_5)))));
            }
        }
    }
    #pragma endscop
}
