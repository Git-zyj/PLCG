/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_9;

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_15 = (max(var_15, (197 && 18497)));
        var_16 = (max(var_16, var_9));
        var_17 = (var_6 || 47030);
        arr_2 [22] = (((arr_0 [i_0 - 2]) & (arr_0 [i_0])));
    }
    #pragma endscop
}
