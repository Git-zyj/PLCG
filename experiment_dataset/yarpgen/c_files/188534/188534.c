/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_16 ^= arr_1 [i_0];
        var_17 = 24799;
    }
    var_18 = ((((max(var_0, var_2))) && var_4));
    var_19 = ((((max(var_8, var_0))) ? -1825 : ((min(var_3, (var_4 != var_13))))));
    var_20 = (min(var_20, ((((855889054 ? ((var_7 ? 1825 : 30)) : ((var_3 ? 228 : 524287))))))));
    var_21 = (min(var_21, var_3));
    #pragma endscop
}
