/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (min(var_20, (((var_9 ? ((3924474953 ? -43450824 : var_7)) : var_6)))));
        var_21 = ((((3924474960 ? var_5 : 0)) * (arr_2 [i_0])));
        var_22 = (max(var_22, ((((370492352 | 5) ? var_12 : ((12689626692497324308 ? (arr_1 [i_0] [i_0]) : 3924474965)))))));
        arr_3 [i_0] = (((38892 ? 8 : var_6)));
    }
    var_23 = var_12;
    #pragma endscop
}
