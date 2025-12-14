/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(1329204991361854049, var_7));
    var_17 = 127;
    var_18 = ((((((var_10 >> (51 - 29))))) ? 15920802646075422520 : (~2525941427634129096)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = var_9;
        arr_2 [i_0] = ((var_10 ? (arr_0 [i_0]) : ((252 ? (arr_0 [i_0]) : var_13))));
    }
    var_20 = ((-4 ? (((max(var_0, 0)))) : ((var_1 ? -var_9 : (var_14 + 8185)))));
    #pragma endscop
}
