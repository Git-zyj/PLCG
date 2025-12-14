/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = (min(var_19, (arr_0 [i_0] [i_0])));
        var_20 -= ((+(((arr_0 [i_0] [i_0]) ? 187 : (arr_0 [i_0] [i_0])))));
        var_21 &= (max((--25634), (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    var_22 = var_1;
    var_23 = (((78 - -var_16) / ((var_8 << (-var_10 + 1830937194)))));
    #pragma endscop
}
