/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_5);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = var_6;
        var_13 |= ((!((((var_5 < var_5) ? (((-32767 - 1) ? 39294 : 39294)) : ((max(36172, var_3))))))));
        var_14 += ((max(29353, (max(3707816907, (arr_2 [i_0] [1]))))) << ((((!var_8) <= 32387))));
    }
    var_15 += var_3;
    #pragma endscop
}
