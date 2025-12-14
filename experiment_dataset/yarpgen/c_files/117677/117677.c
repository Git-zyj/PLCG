/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_10 = 5860814112805384473;
                var_11 ^= (var_5 * ((-(6191600690441381711 * var_9))));
                var_12 = (arr_2 [i_0]);
            }
        }
    }
    var_13 = (((!((max(1437795601, -112))))));
    var_14 = (((((111 ? var_1 : var_2))) ? var_2 : 25500));
    #pragma endscop
}
