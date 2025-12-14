/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_1 ? 558766750 : ((3821643987540660274 ? 6815 : ((var_12 ? var_9 : var_2))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [12] = (arr_0 [i_0] [i_0]);
        var_14 = ((!(arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_6 [9] = (((((((((arr_5 [i_1]) ? (arr_1 [8]) : var_3))) ? 3821643987540660274 : (min(-3821643987540660275, var_1))))) ? ((-(3072 & var_0))) : (max((min((arr_2 [i_1] [i_1]), var_12)), ((min(var_6, (arr_1 [i_1]))))))));
        arr_7 [i_1] = (!var_8);
        var_15 = (((((((var_4 ? 3821643987540660274 : 1934885410)) << ((((max((arr_4 [i_1]), (arr_1 [i_1])))) - 32593))))) ? ((3082 ? ((1022487830 ? 71 : 2019616939)) : var_6)) : 0));
    }
    #pragma endscop
}
