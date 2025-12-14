/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~((-0 ? (min(var_15, 4365)) : (~0)))));
    var_18 = ((0 ? (((~(~var_9)))) : 4230322123873615864));
    var_19 = 10714;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((22657 ? -30736 : 10457596104722906758));
        arr_3 [i_0] [5] = (((arr_0 [16]) ? 1 : 2820167082));
        var_20 = (max(var_20, ((((((~((var_15 ? 0 : 0))))) || (((var_1 ? (-32767 - 1) : (min((arr_1 [i_0]), var_13))))))))));
        var_21 = (min(var_21, var_4));
    }
    #pragma endscop
}
