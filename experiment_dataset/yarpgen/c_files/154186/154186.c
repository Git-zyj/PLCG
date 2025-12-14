/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = var_7;
        arr_4 [i_0] = (min(((-(min(-6609063801237033513, -6609063801237033513)))), var_4));
        arr_5 [i_0] = (min(((((((arr_2 [i_0]) / (arr_0 [i_0])))) ? 6609063801237033509 : (var_9 | var_6))), (((-(~var_1))))));
    }
    var_13 |= (max(var_6, (!var_10)));
    var_14 = (((-6609063801237033528 >= 8075825034643355864) ? ((((var_3 ^ var_10) ^ (((min(var_0, var_1))))))) : (((-6609063801237033516 >= 1) - (min(var_1, -6609063801237033537))))));
    #pragma endscop
}
