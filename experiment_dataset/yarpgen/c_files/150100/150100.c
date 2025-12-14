/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = -8182509456942037600;
        arr_2 [i_0] [i_0] = (max((arr_0 [i_0]), ((((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (((((arr_0 [i_0]) > 5801085943361005388)))) : ((-(arr_1 [i_0])))))));
    }
    var_14 = var_7;
    var_15 = (max(((var_12 ? var_3 : var_3)), (((-(-2050469938 + -37))))));
    var_16 ^= (max(var_3, var_11));
    var_17 = (min(var_17, (min((var_2 / var_10), ((min((~-37), (min(var_12, var_8)))))))));
    #pragma endscop
}
