/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 *= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = ((0 ? 1316747833644920759 : 0));
                arr_6 [i_0] [i_1] = (((((((arr_0 [i_0] [i_1]) || ((((arr_1 [i_0]) ? var_0 : var_0))))))) | (arr_2 [2])));
            }
        }
    }
    #pragma endscop
}
