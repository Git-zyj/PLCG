/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~-182491168);

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((!(arr_1 [i_0 - 2]))) ? 4192430646 : (((var_17 ? ((20 ? var_3 : var_14)) : ((max(var_2, 12))))))));
        arr_3 [i_0 - 1] [i_0] = (max((arr_1 [i_0]), (((23 ? var_3 : (((var_11 == (arr_1 [i_0])))))))));
    }
    #pragma endscop
}
