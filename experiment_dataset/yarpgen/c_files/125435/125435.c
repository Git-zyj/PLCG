/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (min((var_6 & 4), ((~(arr_0 [i_0 - 3])))));
        var_17 |= ((var_16 ? ((max((arr_0 [i_0 - 2]), ((248 ? 31 : -1))))) : (min((arr_0 [i_0 + 1]), (5 + var_14)))));
    }
    var_18 = ((((!((min(var_11, -32287))))) ? (4294967283 / 160) : ((var_14 ? ((32296 ? var_9 : var_16)) : (((min(1, 1))))))));
    #pragma endscop
}
