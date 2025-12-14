/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((((arr_0 [i_0 - 2] [i_0 - 1]) ? (arr_0 [i_0 - 3] [i_0 - 3]) : (arr_0 [i_0 - 1] [i_0 - 3]))), 4294967273));
        var_18 = (-61 / 69);
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_19 = (((arr_0 [i_1 + 1] [6]) ^ -34));
        arr_5 [i_1] [i_1 + 1] = ((((((max(var_12, (arr_0 [i_1] [i_1]))) & var_16))) ? var_13 : var_14));
        var_20 = (((arr_0 [i_1 - 1] [i_1 + 1]) >= (((max(23, 72))))));
    }
    var_21 -= ((6 ? var_16 : -39));
    var_22 &= var_17;
    #pragma endscop
}
