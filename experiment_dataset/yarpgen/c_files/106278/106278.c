/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= 1;
    var_19 = ((var_6 < ((((~var_17) ^ (~1262729494))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (max(var_20, ((min(((+(((arr_1 [i_0] [i_0]) / 6426)))), (~var_1))))));
        var_21 = (min(var_21, (max(((((arr_0 [i_0]) > var_11))), (((arr_0 [i_0]) ? var_8 : (arr_0 [i_0])))))));
        var_22 *= (((~((max(18736, (arr_1 [i_0] [i_0])))))));
        var_23 ^= ((-((33 ? (arr_1 [i_0] [i_0]) : ((var_3 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))))));
    }
    #pragma endscop
}
