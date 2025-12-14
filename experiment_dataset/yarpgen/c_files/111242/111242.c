/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_8, var_0));
    var_16 *= 1735958617;
    var_17 = ((~((1 ? var_13 : 1))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_18 = (max(var_18, ((max((-4947101528690143702 ^ 1), (!4947101528690143701))))));
        arr_2 [i_0] = (((~1) ? 0 : (~-1)));
    }
    #pragma endscop
}
