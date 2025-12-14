/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_11));
    var_18 = (((!var_14) / (min(((var_1 ? var_16 : var_0)), 7731))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((min((((!var_4) ? -8825 : ((min(114, -8825))))), (((3569687406 ? 7731 : 33))))))));
                var_20 += ((!(arr_1 [i_0] [i_0 + 3])));
            }
        }
    }
    #pragma endscop
}
