/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((((626270434988673240 ? -1336743091 : 1336743084))) ? (~var_13) : 9026940816872808128));
        var_15 = (((((var_9 ? var_10 : var_4))) ? ((~(arr_0 [i_0]))) : (((arr_0 [i_0]) << (((arr_1 [i_0] [i_0]) + 160))))));
    }
    var_16 -= (min(((min(-27197, 0))), (((1361525878 ? (79 & 50867) : (max(-9, 1141922691)))))));
    #pragma endscop
}
