/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 = ((2896 ? (((~var_16) ? ((var_8 ? 98 : var_0)) : var_11)) : -var_12));
    var_20 = ((-var_8 ? (((max(40, -10199)))) : var_13));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-10199 ? 158 : 89));
        var_21 = (arr_0 [i_0]);
        var_22 += ((var_14 ? ((max(var_3, (arr_0 [16])))) : (((arr_0 [22]) << (6074834117543665614 - 6074834117543665614)))));
    }
    var_23 = var_15;
    #pragma endscop
}
