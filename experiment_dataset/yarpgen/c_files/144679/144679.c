/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((~var_7) + 2147483647)) >> (((!(var_1 == 22765))))));
    var_17 = (((((!(~var_9)))) % (~var_7)));
    var_18 = (((var_12 != var_3) >> (var_11 + 7849)));
    var_19 = (max(var_19, (((var_9 & (var_11 | var_0))))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (~((4233067140 + (arr_0 [i_0 - 3]))));
        arr_3 [i_0] = (((-((~(arr_1 [14]))))) - -903);
    }
    #pragma endscop
}
