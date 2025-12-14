/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (((((~((52201 ? 29554 : 52201))))) ? -var_15 : var_16));
        arr_4 [23] [i_0] |= ((!((min(var_14, (541192625162812334 + 541192625162812334))))));
    }
    var_18 |= var_6;
    var_19 = (((((((max(1, 65535)))) > (~4294967295))) ? var_13 : var_14));
    #pragma endscop
}
