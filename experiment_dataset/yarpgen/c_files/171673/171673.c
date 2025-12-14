/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((((((162 * var_1) & (1152640029630136320 + var_8)))) ? -var_1 : var_1));
    var_14 += ((var_11 ? (max(((var_3 ? var_6 : -2076409981)), ((var_2 ? var_7 : var_10)))) : (((((var_3 ? -2076409968 : var_0))) ? var_10 : var_4))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (min(var_15, (((((((arr_1 [i_0]) ? var_6 : (arr_0 [i_0] [i_0])))) ? ((((((162 ? (arr_0 [i_0] [i_0]) : var_8)) <= ((var_4 ? 2076409982 : (arr_0 [i_0] [i_0]))))))) : (min(5490021146857497110, (var_8 / -2076409968))))))));
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) / (var_0 & var_12)));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_16 = 1;
        arr_6 [14] = (((((-16 ^ (arr_3 [i_1])))) ? ((((arr_5 [i_1]) || var_3))) : 8765));
    }
    #pragma endscop
}
