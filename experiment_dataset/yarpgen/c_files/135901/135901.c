/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((-(~var_2)))) ^ (min(-5618590474562741291, (-5545927589711005910 < 1)))));
    var_17 += var_14;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = ((~((~(arr_1 [i_0])))));
        var_19 = (max((arr_0 [i_0]), ((var_15 >> (var_0 - 45158)))));
        var_20 |= (arr_1 [i_0]);
        var_21 = (arr_0 [i_0]);
    }
    #pragma endscop
}
