/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((-var_6 ? -1564500630 : ((var_1 ? var_6 : var_14)))), var_2));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_16 = (((((1564500629 ? var_12 : -1))) ? (arr_0 [i_0 + 2]) : (((-(arr_1 [4] [i_0]))))));
        arr_2 [i_0] = ((-(((arr_1 [i_0] [i_0]) + 216))));
        var_17 = (max(var_17, (arr_1 [20] [1])));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_7 [4] [1] = ((var_10 - (((arr_0 [1]) ? var_8 : ((((arr_5 [13]) >> (1564500629 - 1564500628))))))));
        var_18 += var_12;
    }
    var_19 ^= var_8;
    #pragma endscop
}
