/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (133 ? 145 : 145);
        var_15 = 1;
        var_16 = (max(var_16, (110 && 177)));
        arr_4 [i_0] = var_8;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = (min(var_17, ((((arr_5 [i_1]) ? ((var_7 ? 124 : var_3)) : ((255 * (arr_1 [i_1]))))))));
        arr_7 [i_1] = 153;
    }
    var_18 = (!(!var_13));
    #pragma endscop
}
