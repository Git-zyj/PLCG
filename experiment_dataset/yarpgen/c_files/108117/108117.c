/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (((max((var_0 && 11268936344160083223), 15314267321556450507))) ? var_17 : 15314267321556450477);
    var_21 = (min((!15314267321556450477), ((-((var_6 ? var_16 : var_8))))));
    var_22 = (max(var_22, ((max(((((min(var_11, var_11))) * -15314267321556450452)), (((((var_19 ? var_17 : var_10))) ? (max(3132476752153101139, var_18)) : var_6)))))));

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_23 *= ((-3 ? 105 : 15314267321556450452));
        var_24 = (((((2975596138501699428 ? -1 : var_19)) ? var_13 : (((var_15 ? var_19 : 15))))));
        arr_2 [i_0] = (min((((-((214929804 & (arr_1 [i_0] [i_0])))))), (min(3132476752153101139, (arr_0 [22])))));
        arr_3 [i_0 - 3] [i_0] = 1;
    }
    #pragma endscop
}
