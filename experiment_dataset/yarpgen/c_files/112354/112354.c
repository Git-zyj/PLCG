/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(min(((var_5 ? var_6 : var_6)), ((max(var_5, var_0)))))));
    var_14 = -14924;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = ((46131 ? 8939800021445129548 : -246172002));
                var_16 ^= (((var_6 != 1121764250) ? (min((((arr_5 [i_0] [i_1]) * var_0)), (arr_6 [i_0 - 3] [i_0 + 1] [i_0 - 2]))) : (arr_1 [9] [i_1])));
            }
        }
    }
    var_17 = ((((min(-0, var_3))) || var_0));
    #pragma endscop
}
