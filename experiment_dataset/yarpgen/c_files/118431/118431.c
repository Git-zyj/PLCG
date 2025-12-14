/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_13));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_21 = (!11916591908887995244);
        var_22 = (min(var_22, (arr_0 [i_0] [1])));
        var_23 = ((((var_5 ? var_19 : (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0 + 1]) : -97)))) % -var_17));
        var_24 |= var_13;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = (((var_16 / 27220) << ((((((arr_4 [i_1] [i_1]) + var_17)) == (~38295))))));
        arr_7 [i_1] = ((-(max((((38323 ? var_9 : 38295))), ((950971698 ? (arr_3 [15] [i_1]) : var_12))))));
    }
    var_25 ^= var_2;
    #pragma endscop
}
