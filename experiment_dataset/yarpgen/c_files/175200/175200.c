/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = ((~(min(var_0, 0))));
        var_13 ^= (arr_0 [i_0]);
    }
    var_14 = (min(-var_8, 4483381140352708198));

    for (int i_1 = 3; i_1 < 7;i_1 += 1)
    {
        arr_7 [i_1 - 2] [i_1 + 2] = (((((!(var_8 == 1)))) / var_3));
        var_15 = (((((var_0 ? var_11 : var_3))) ? (arr_0 [i_1 - 2]) : (((-1 >= (arr_0 [i_1 - 2]))))));
        var_16 = (max((arr_1 [i_1]), var_6));
    }
    var_17 = var_6;
    var_18 = min(((~((0 ? var_6 : 13963362933356843417)))), (max((max(var_11, var_8)), (!var_4))));
    #pragma endscop
}
