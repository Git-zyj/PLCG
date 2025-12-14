/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_15 -= var_8;
        var_16 = (arr_1 [i_0 + 2]);
        var_17 = -var_13;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] [i_1] &= var_3;
        arr_6 [i_1] [i_1] = (arr_3 [i_1 - 1] [i_1 + 2]);
    }
    var_18 = ((var_10 ? ((((min(var_14, var_0))))) : var_3));
    var_19 = (375705558670554837 >= 800219589);
    var_20 = (max(var_20, var_9));
    var_21 = 46;
    #pragma endscop
}
