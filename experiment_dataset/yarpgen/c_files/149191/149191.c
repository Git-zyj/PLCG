/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (4294967278 | 18407019805648517579);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = 40;
        var_16 = var_10;
    }
    #pragma endscop
}
