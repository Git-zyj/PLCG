/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (max(55705, (-32767 - 1)));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = -55705;
        var_13 &= (((9830 | 9833) <= ((var_6 ? var_11 : var_8))));
    }
    var_14 = (max(var_14, (((((((var_3 ? var_11 : var_8))) ? var_4 : var_10))))));
    #pragma endscop
}
