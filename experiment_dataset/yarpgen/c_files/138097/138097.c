/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -6;
    var_17 |= var_15;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (min(((min(var_0, 121))), ((((max(-28952, 61))) ? var_13 : -17922))));
        var_19 = (max(var_19, 28953));
        var_20 *= 6065532935779952093;
        var_21 = ((-(~-80)));
    }
    #pragma endscop
}
