/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 += max((min(((max(102, 0))), ((1 ? 0 : (arr_1 [i_0]))))), ((min((max(154, (arr_0 [i_0]))), (60 || 1)))));
        var_16 = (min(154, ((0 ? 9223372036854775807 : -1537881421))));
    }
    #pragma endscop
}
