/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_1 [i_0] [i_0]) + var_15))) ? (((-((4294967295 ? 1 : 1))))) : ((((((arr_1 [i_0] [i_0]) - (arr_0 [i_0] [i_0])))) ? ((31611 ? 1 : 4294967295)) : (max(1, var_0))))));
        var_20 = (((var_18 ? ((-(arr_2 [i_0]))) : 1)));
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        var_21 = (min(var_21, ((min((((-(arr_5 [i_1])))), ((((((var_5 ? (arr_5 [i_1]) : 1))) ? -1 : var_15))))))));
        var_22 = (~((min((arr_2 [i_1 - 1]), (arr_2 [i_1 + 1])))));
        var_23 ^= (min((arr_4 [i_1 + 3] [i_1]), (max((((arr_0 [i_1] [i_1]) ? 1 : (arr_2 [i_1]))), (var_1 + 1)))));
        var_24 += (((~((1 ? 4427291101572543363 : var_3)))));
    }
    #pragma endscop
}
