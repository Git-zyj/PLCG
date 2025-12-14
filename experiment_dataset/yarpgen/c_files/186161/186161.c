/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((!(var_11 * var_11)))), ((~((var_0 ? 61426 : var_13))))));
    var_15 = (61394 - var_9);
    var_16 = ((!(((((var_7 >> (var_7 - 1216))) + var_6)))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0 + 1] = ((((max((arr_0 [i_0] [i_0 - 1]), var_9))) > (((arr_2 [i_0 + 2]) >> (((min(var_0, var_5)) - 1328758325))))));
        var_17 = (max(var_17, (((!(arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_18 = 4146;
        var_19 = ((((min(var_11, (arr_7 [i_1])))) == (((arr_7 [i_1]) ? var_7 : (arr_7 [i_1])))));
    }
    #pragma endscop
}
