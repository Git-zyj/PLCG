/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (~var_5);

    /* vectorizable */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_16 = ((var_9 / (arr_2 [i_0 + 3] [i_0 + 3])));
        arr_4 [i_0] = ((-0 << (((arr_2 [i_0 + 2] [i_0 + 2]) - 68))));
    }
    var_17 = 3378026106435593428;
    var_18 = 228;
    var_19 = var_6;
    #pragma endscop
}
