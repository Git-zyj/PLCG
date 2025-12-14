/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_0);

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_13 = ((!((((-(arr_0 [i_0] [i_0]))) <= (var_11 && var_10)))));
        arr_2 [i_0] = ((var_5 ^ ((((max(11453420086699495187, 63298))) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_1 [i_0 - 1])))));
        arr_3 [i_0] = ((((!(!var_6))) ? ((max((arr_0 [i_0] [17]), -2607396370589559684))) : (!var_3)));
    }

    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_14 &= var_5;
        arr_6 [i_1 + 1] = (((!var_4) ? ((-1885349494 ? 49152 : 2607396370589559684)) : (-59 < -7580641799951114734)));
    }
    #pragma endscop
}
