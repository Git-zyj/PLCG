/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_5;
    var_11 = (min(((((min(0, 1)) && var_4))), (((var_1 + var_1) ? (max(4294967287, -8942449101978691517)) : var_3))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [20] [i_0] = -65;
        arr_3 [i_0] = ((!(arr_1 [i_0])));
        var_12 = (arr_1 [i_0]);
    }
    var_13 = ((((max((var_2 / 24406), ((var_9 ? var_5 : var_2))))) > (min(12324527663805524100, 64421806))));
    #pragma endscop
}
