/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = ((15 ? ((-((min((arr_2 [i_0]), (arr_2 [i_0])))))) : -21185));
        var_17 = (((1 ? 25 : 217)));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 = (((((((max(var_6, var_8))) ? (~0) : var_6))) ? (max(var_5, (10 | 320))) : (((arr_1 [i_1] [i_1]) << (((((arr_2 [i_1]) % var_15)) - 86))))));
        arr_5 [i_1] = (4294967285 - 0);
        arr_6 [i_1] = ((((max((arr_2 [i_1]), -3613103147799158166))) ? ((((min(3613103147799158158, var_15))))) : ((var_10 ? var_15 : 3757392075))));
    }
    var_19 = (max(var_19, var_6));
    #pragma endscop
}
