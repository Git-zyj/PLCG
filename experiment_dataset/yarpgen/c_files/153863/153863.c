/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(var_3, 2060839299);
    var_14 = 0;
    var_15 &= 1;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] &= arr_0 [i_0] [i_0];
        arr_5 [i_0] = 1591746479;
    }
    var_16 |= (max(var_2, 68277317));
    #pragma endscop
}
