/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_18 = (((((((arr_0 [i_0]) << (var_11 + 9016))))) ? (((-1 ? 76 : -5))) : (min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))));
        var_19 = (min(var_19, (((((1022301577553842228 > (((-1185090553 ? -572638726294063457 : var_4))))) ? (-1185090553 && 918736797) : (((arr_0 [i_0]) << (((((arr_1 [7]) ? (arr_1 [i_0 - 3]) : var_5)) - 2963235709)))))))));
        arr_2 [i_0] &= (((arr_0 [i_0]) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 + 1])));
    }
    #pragma endscop
}
