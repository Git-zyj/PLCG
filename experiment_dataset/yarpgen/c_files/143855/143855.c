/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((var_8 ? var_4 : var_6))));
    var_11 = (min(var_11, var_3));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((-(max((arr_1 [i_0]), (max(357380614, (arr_1 [i_0])))))));
        var_13 = (min(var_13, -115));
        arr_3 [0] |= (((((((((arr_1 [i_0]) ^ var_4))) ? (arr_0 [i_0]) : ((max(-115, (arr_0 [i_0]))))))) ? ((-(((arr_2 [i_0] [i_0]) ? (arr_2 [8] [i_0]) : var_9)))) : ((37 * (-23 / -984749422)))));
    }
    #pragma endscop
}
