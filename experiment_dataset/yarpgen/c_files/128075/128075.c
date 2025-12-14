/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(759732343, (((var_3 ? 117 : var_4)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (max((max((arr_0 [i_0]), var_0)), (max((((arr_0 [i_0]) | 15380081064009258520)), (max((arr_0 [i_0]), (arr_1 [i_0])))))));
        var_18 = (((((-(min((arr_0 [i_0]), 9223372036854775807))))) || (((~(arr_0 [i_0]))))));
    }
    #pragma endscop
}
