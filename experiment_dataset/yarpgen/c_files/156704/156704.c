/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((var_12 << ((((((min(8190, 246)))) >= var_9)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (((max((arr_0 [i_0]), (arr_0 [i_0])))) ? (arr_0 [i_0]) : (arr_0 [i_0]));
        var_15 = (var_7 - 26);
    }
    #pragma endscop
}
