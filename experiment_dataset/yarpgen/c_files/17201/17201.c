/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_10;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_13 = (min((((arr_1 [i_0 - 1]) ^ (arr_1 [i_0 - 1]))), (min(var_5, (arr_0 [i_0])))));
        arr_2 [i_0] = (((((min((max(var_3, var_9)), ((min((arr_1 [i_0]), var_6))))) + 9223372036854775807)) >> (((arr_0 [i_0]) + 1316567644))));
        var_14 *= ((((max(var_8, (arr_1 [i_0 + 1])))) % (((var_5 != (arr_1 [i_0 - 1]))))));
    }
    var_15 = var_9;
    var_16 = (((min(139973615, 6291456)) * var_11));
    #pragma endscop
}
