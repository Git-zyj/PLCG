/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_20 = (((~(arr_0 [i_0]))));
        arr_2 [i_0] |= ((((((min((arr_0 [i_0]), var_1))) ? ((((!(arr_1 [i_0]))))) : ((var_13 ? 2147483647 : var_16))))) ? ((((min((arr_1 [i_0]), (arr_0 [i_0])))) ? (var_14 < var_2) : (((arr_1 [i_0]) ? 2731916312 : 72057591890444288)))) : (max(var_0, var_10)));
    }
    var_21 += var_8;
    #pragma endscop
}
