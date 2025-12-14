/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((-((18169725875704945101 ? 277018198004606524 : 277018198004606515)))));
    var_15 = (max(var_15, (((!(((((max(var_10, var_2))) ? var_1 : ((var_11 ? var_0 : 277018198004606523))))))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = (~(min((!var_3), (max(var_4, var_8)))));
        arr_2 [4] |= (277018198004606529 - 18169725875704945092);
        var_17 = ((((-(((arr_0 [i_0]) ^ var_7)))) < var_9));
    }
    var_18 = ((min(var_11, (min(var_1, 18169725875704945102)))) ^ ((min(var_6, ((18169725875704945102 ? var_12 : var_4))))));
    #pragma endscop
}
