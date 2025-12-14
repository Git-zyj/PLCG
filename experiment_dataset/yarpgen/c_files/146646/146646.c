/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((((max(524287, var_7)))) ? ((max(((0 ? -28 : 9223372036854775807)), ((max(var_7, var_13)))))) : ((var_12 ? ((max(var_13, var_7))) : var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = 255;
                var_17 = (~5);
            }
        }
    }
    #pragma endscop
}
