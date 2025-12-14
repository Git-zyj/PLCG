/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (433063771 <= -2208280770720849612);

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_18 = ((22 ? (arr_2 [i_0]) : 1));
        arr_3 [i_0] = ((min(-2208280770720849618, (var_6 || var_7))));
    }
    #pragma endscop
}
