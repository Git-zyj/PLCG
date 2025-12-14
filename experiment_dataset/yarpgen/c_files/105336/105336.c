/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((118 ? 915176963 : 4294967295)) * var_5))) && 216));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_14 = ((0 ? 1894562285 : 1));
        var_15 = ((((((((arr_0 [2]) ? (arr_1 [i_0]) : var_6)) <= ((((var_7 && (arr_1 [i_0 - 1])))))))) <= -2784));
    }
    var_16 = (max(var_16, -7538319808780823891));
    var_17 = ((((((max(var_11, var_0))))) ^ (((max(var_3, var_8)) & (var_7 ^ 36474)))));
    var_18 = (max(var_2, ((((var_11 ? var_7 : var_5))))));
    #pragma endscop
}
