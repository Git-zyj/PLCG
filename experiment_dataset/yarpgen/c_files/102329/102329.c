/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (max((~-var_16), 2826441205035393355))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_18 ^= (arr_1 [i_0 - 2] [i_0 + 1]);
        arr_3 [i_0] = (arr_0 [i_0 - 1]);
        var_19 *= 18754;
        var_20 += 16737830555951024882;
    }
    #pragma endscop
}
