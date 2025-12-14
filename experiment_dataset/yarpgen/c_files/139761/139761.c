/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((min(((468790510 ? 3826176798 : 3826176771), 3826176785))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [8] [i_0] = (((arr_2 [i_0]) ? ((-(arr_0 [i_0]))) : (~25)));
        var_18 = ((!(arr_2 [i_0])));
        var_19 = (max(var_19, ((-(arr_0 [i_0])))));
    }
    var_20 += (min(-892379384, ((min(var_6, var_0)))));
    #pragma endscop
}
