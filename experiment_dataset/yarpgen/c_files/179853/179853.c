/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((18446744073709551606 ? var_14 : 4))), var_9));
    var_16 = (((var_11 >> (-1236560453 + 1236560483))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (max(var_17, ((((((min((arr_2 [i_0]), var_7)) >= ((min(33552384, -1236560443))))) ? ((((arr_2 [i_0]) >= var_6))) : (((((arr_1 [i_0]) ? 1 : -1236560453)))))))));
        var_18 = (min(var_18, ((((arr_2 [i_0]) << ((((18446744073709551611 ? ((18446744073709551615 ? -1236560443 : -7440)) : var_4)) + 1236560459)))))));
        var_19 = ((((min((arr_2 [i_0]), var_0))) ? (((arr_1 [i_0]) ? (arr_2 [i_0]) : var_12)) : ((0 ? (arr_2 [i_0]) : var_1))));
    }
    #pragma endscop
}
