/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min(((var_3 ? var_10 : var_7), var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = min((max(5192156133927704685, 5192156133927704685)), (!var_9));
                var_15 *= (min(((((((arr_0 [i_0]) << (3 - 3)))) ? ((((arr_5 [i_1]) ? var_4 : var_1))) : (max(var_2, var_0)))), var_13));
            }
        }
    }
    #pragma endscop
}
