/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((max(3857973944297585467, var_16)))));
                var_22 = (min((~1266261212), (min(-3857973944297585468, 65535))));
                arr_6 [i_0] = (((((((max(3857973944297585467, var_3))) ? 32767 : (max(3857973944297585448, var_5))))) ? var_19 : (min((3857973944297585436 + var_12), 2147483647))));
            }
        }
    }
    var_23 = var_13;
    var_24 = (min(43216, 2274003192));
    #pragma endscop
}
