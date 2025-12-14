/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0 - 1] = (max(17399, 15872));
        arr_4 [i_0] = (max((max(2972, ((31847 ? 3275732828298477959 : 48143)))), -0));
    }
    var_10 = ((-(max(4, 10212383479603572078))));
    var_11 = max(((max(10434507129102194524, 3931355552828404868))), 14515388520881146755);
    #pragma endscop
}
