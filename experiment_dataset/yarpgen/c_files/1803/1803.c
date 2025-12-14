/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1099;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = (-((((4294967275 ? var_0 : 55150)) << (64424 - 64397))));
                var_19 = ((min(1137, 15)));
                var_20 = var_3;
            }
        }
    }
    var_21 = (min(var_0, ((~((var_15 ? 5518911987065160152 : 133))))));
    var_22 = ((((min(var_4, var_6))) ? 255 : (max(var_10, -1))));
    #pragma endscop
}
