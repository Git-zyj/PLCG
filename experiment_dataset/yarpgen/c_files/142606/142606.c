/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (max(((max(63, -28172))), (max(var_3, 20755))))));
    var_16 = ((!(!2147483647)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (~3347850330);
        var_17 = (min(var_17, 1));
    }
    var_18 &= (min(var_3, 13616));
    #pragma endscop
}
