/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 += arr_2 [i_0] [14];
        arr_3 [i_0] = ((((min(3030843373, (max(-3384398459117178766, 172))))) ? ((((((70 ? var_5 : 3403701055)) == (arr_2 [i_0] [i_0]))))) : ((var_1 ? 73 : ((3030843373 ? 536870912 : (arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = 961340559;
        var_14 = 2912200130394778146;
        var_15 ^= ((((arr_5 [i_1]) ? ((-631571437528905398 ? (arr_1 [i_1] [i_1]) : var_3)) : 3935506225)) > (arr_5 [i_1]));
    }
    var_16 = (min(var_16, var_4));
    var_17 = ((min(var_4, (max(961340572, var_3)))));
    #pragma endscop
}
