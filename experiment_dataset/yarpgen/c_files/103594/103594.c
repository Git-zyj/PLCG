/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (1919874994 + 1919875013);
        arr_5 [i_0] = (((((18 ? (arr_1 [i_0 - 1]) : 37513))) ? (278882429 < 490734226) : (12138651511924631881 == 831685369)));
    }
    #pragma endscop
}
