/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((var_12 ? var_16 : (((~(min(var_13, var_14)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_19 |= ((((!(arr_1 [i_0] [i_0]))) ? (((((((arr_0 [i_0]) ? 72 : (arr_0 [i_0])))) && 72))) : var_13));
        var_20 = ((-(((((var_15 ? 1 : var_17))) ? var_4 : var_11))));
        var_21 = (max(((var_10 - (arr_2 [i_0]))), 7));
        var_22 = (((((min((arr_2 [11]), (arr_1 [i_0] [i_0])))) ? (arr_0 [i_0]) : ((min(30890, (arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_23 = (arr_2 [i_1]);
        var_24 = (max((((arr_4 [i_1]) ^ 121)), (arr_1 [i_1] [2])));
    }
    #pragma endscop
}
