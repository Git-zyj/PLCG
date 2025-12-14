/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((max(var_9, 150))), var_13));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = (((((~((18446744073709551602 ? (arr_3 [i_0] [i_0]) : var_0))))) ? (((var_6 / 122) ? (arr_3 [i_0] [i_0]) : 451365115)) : (!2685917788)));
        var_18 = -1393663781;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = (arr_5 [i_1]);
        var_20 = (((arr_6 [i_1]) ? var_5 : ((((!(arr_6 [i_1])))))));
    }
    #pragma endscop
}
