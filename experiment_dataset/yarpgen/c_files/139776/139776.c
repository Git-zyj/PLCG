/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = 1;

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            var_13 = (arr_1 [18]);
            var_14 = (max(var_14, (((!((!(arr_3 [i_1]))))))));
        }
        var_15 = (min(var_15, ((((((var_7 ? (arr_3 [i_0]) : 20))) ? (((arr_1 [17]) | var_11)) : ((1 ? (arr_3 [i_0]) : 18)))))));
    }
    var_16 = 1;
    var_17 = var_0;
    var_18 = -var_2;
    #pragma endscop
}
