/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_10;
    var_16 -= ((var_5 ? var_14 : 14403012373590258837));
    var_17 = (-32767 - 1);
    var_18 = var_14;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [20] = var_12;
        var_19 = (min(var_19, (((var_14 + (((!((max(var_3, var_3)))))))))));
        var_20 = var_6;
    }
    #pragma endscop
}
