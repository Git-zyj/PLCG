/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0]) + (((arr_1 [11]) >> (((arr_1 [i_0]) - 81758344))))))) && (arr_1 [i_0])));
        var_13 ^= (arr_1 [i_0]);
        var_14 = (max(var_14, ((((arr_1 [i_0]) == (4902745639168547971 >= 127))))));
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    var_15 = (-1 > -2662294392254269369);
    var_16 += (((var_12 & (4902745639168547971 & 322811950))) & ((((var_6 >> var_7) | ((var_12 << (var_10 - 490223071)))))));
    var_17 = var_0;
    #pragma endscop
}
