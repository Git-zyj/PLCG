/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (max(3043594411571797630, 21));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_16 = -27;
        arr_2 [i_0 + 1] = ((var_2 ? var_10 : (~11295515566737065842)));
    }
    var_17 = (((((24 % var_10) == var_11)) || (((min(var_7, 0))))));
    #pragma endscop
}
