/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((!(((((max(7696581394432, var_2))) ? ((var_6 ? 7696581394440 : 7696581394410)) : var_0))))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_0 [i_0]) | 7696581394440))) > (((((var_8 ? var_3 : var_2)))))));
        arr_3 [i_0] = var_6;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] = 18446736377128157186;
        arr_8 [i_1] [i_1] = (7696581394429 && 20);
    }
    #pragma endscop
}
