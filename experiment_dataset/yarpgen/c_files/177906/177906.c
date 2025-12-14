/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((max(0, ((var_15 ? var_1 : var_11))))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = -20780;
        var_17 = (((max(0, (arr_1 [i_0] [i_0]))) % ((~(5139373727095293008 && 255)))));
        var_18 = ((0 | ((0 ? 1 : -6050674267662462691))));
    }
    #pragma endscop
}
