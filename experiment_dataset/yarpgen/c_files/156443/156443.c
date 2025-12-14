/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_11 = var_5;
        arr_2 [i_0] [i_0] = (arr_0 [13]);
    }
    var_12 = (((((-429405091 ? -429405091 : 149086151))) || (((max(var_4, var_7))))));
    #pragma endscop
}
