/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((min(var_8, var_12)))) || var_12));
    var_15 = ((((max(48063, 824176940))) ? (max((~48063), var_0)) : 48063));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = -17490;
        arr_4 [i_0] = ((-((48078 >> (-4172743425634309314 + 4172743425634309345)))));
        var_17 = ((~(((arr_0 [i_0] [i_0]) | 17468))));
    }
    #pragma endscop
}
