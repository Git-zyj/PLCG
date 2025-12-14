/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(((var_11 ? var_12 : var_4)), ((var_14 ? 15747059172446082242 : 2699684901263469344))))) ? (((max((min(var_10, var_2)), (var_15 > 16753515420845679040))))) : (max((max(15747059172446082272, 1781624357)), ((max(var_9, 2517135145)))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_17 = (max(var_17, ((min((((min(var_1, 2699684901263469344)) * (((15747059172446082272 ? (arr_0 [i_0] [i_0]) : -18718))))), (min(((max((arr_0 [i_0] [6]), (arr_1 [i_0] [i_0])))), ((var_5 ? var_11 : (arr_0 [i_0] [i_0]))))))))));
        var_18 = (min((max(((var_10 ? 15747059172446082276 : var_13)), (((arr_0 [i_0] [i_0]) ? var_3 : (arr_0 [i_0 + 1] [i_0 + 1]))))), ((((((19560 ? -19529 : var_14))) ? (15747059172446082272 && 32765) : ((min((-32767 - 1), 0))))))));
    }
    #pragma endscop
}
