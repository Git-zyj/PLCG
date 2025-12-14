/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    var_21 = 116;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (!961977676);
        var_22 = (~(((!var_11) ? (arr_1 [i_0] [i_0]) : var_10)));
        arr_4 [i_0] = ((((min((~1071508132), 5344))) ? (arr_1 [0] [i_0]) : (((max((min(1, var_9)), (((!(arr_1 [i_0] [i_0]))))))))));
    }
    #pragma endscop
}
