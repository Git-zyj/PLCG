/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = 13870579639904694803;
        var_21 = (min(var_21, ((min(1, -49)))));
        arr_2 [i_0] [7] = ((((min((arr_1 [i_0] [i_0]), var_6)))) ? (max((arr_0 [i_0]), (arr_1 [0] [i_0]))) : (arr_0 [0]));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [2] [i_1] = var_16;
            arr_6 [i_0] = ((-24700 || (((-177 | ((min((arr_4 [i_0] [1] [i_1]), 1))))))));
            var_22 = ((var_12 ? var_0 : (((((~(arr_0 [i_1]))) == -1)))));
            arr_7 [i_0] [i_1] [i_1] = (max(var_16, (arr_1 [i_0] [4])));
        }
    }
    var_23 = ((-1 ? (((1 / 1) * ((max(17979, 169))))) : ((var_17 ? var_6 : -51012))));
    #pragma endscop
}
