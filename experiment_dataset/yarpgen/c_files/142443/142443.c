/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_7 | var_6);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (((~(arr_0 [i_0]))));
        var_11 = min(17381838515499993698, (((19 >= ((-1059330442442118417 ? 83 : 205))))));
    }
    #pragma endscop
}
