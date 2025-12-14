/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((arr_1 [7]) ? (((-32210 ? 1 : (arr_1 [i_0])))) : (((arr_1 [i_0]) ? var_0 : 238)));
        var_16 = (max(var_16, (137 - 17469)));
        var_17 = (max(var_17, ((min((((((65 ? (arr_0 [i_0] [i_0]) : -61))) ? ((51 ? 50668 : 14894)) : (!65))), ((max((arr_0 [i_0] [i_0]), 1))))))));
        var_18 = ((!((min((((-1774 + 2147483647) >> (((arr_1 [i_0]) - 3322654003)))), (50668 || 50670))))));
        arr_3 [i_0] = (min(var_0, ((1041204421 ? (arr_1 [i_0]) : var_6))));
    }
    var_19 = ((((((~1) / -4356815880670482324))) + (max(var_9, (((var_15 ? var_6 : 227)))))));
    #pragma endscop
}
