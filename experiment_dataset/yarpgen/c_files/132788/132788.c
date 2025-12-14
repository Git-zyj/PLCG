/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = ((~((46528 ? 14680064 : 43665))));
        var_20 *= ((((-1 ? var_17 : (43665 | 308)))) % (arr_1 [i_0]));
    }
    var_21 -= var_1;
    var_22 = (~16515072);
    #pragma endscop
}
