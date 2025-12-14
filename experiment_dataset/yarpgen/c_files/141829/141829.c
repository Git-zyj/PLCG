/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_16 = (min(var_16, 0));
        arr_3 [i_0] [i_0] = 1;
        arr_4 [i_0] = (max((arr_1 [i_0]), (arr_1 [i_0])));
    }
    var_17 = ((~(max(18, (~9927334171331351558)))));
    #pragma endscop
}
