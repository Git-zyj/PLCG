/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_0;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [3] = (((((-(arr_2 [i_0] [i_0])))) ? (arr_3 [i_0 - 1]) : (arr_2 [i_0] [i_0 + 2])));
        var_19 = (min(var_19, 1));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_20 = ((84 ? 0 : -32745));
        var_21 = ((-(arr_6 [i_1 + 1] [i_1])));
        arr_7 [i_1] = (!var_10);
    }
    var_22 -= (((((((var_3 ? var_12 : -522)) & var_17))) ? ((((var_17 ? var_12 : 254)) * var_16)) : ((max(var_9, var_11)))));
    #pragma endscop
}
