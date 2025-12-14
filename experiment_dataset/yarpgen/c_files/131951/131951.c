/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (12059 ? ((max(-69, 3095319478))) : var_2);

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [5]);
        var_12 = ((12064 >> (-12063 + 12074)));
    }
    #pragma endscop
}
