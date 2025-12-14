/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((var_9 ? (var_0 + var_10) : var_11)), var_11));
    var_14 = 4667;
    var_15 = ((var_2 * (max((((var_12 ? 65509 : -1))), (max(178, var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] &= ((!((((arr_1 [i_0]) ? ((((arr_0 [i_1] [i_0]) ? 60864 : 511))) : (arr_4 [i_1] [i_0]))))));
                var_16 = (max(var_16, 51960));
            }
        }
    }
    #pragma endscop
}
