/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_6));
    var_17 = (min(((var_14 | ((var_11 >> (var_14 - 33810))))), (var_7 <= var_0)));
    var_18 = (((var_7 / var_14) && (~25285)));
    var_19 += ((var_14 ? (40250 * var_15) : (2049164732 < var_13)));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((((-29 ? ((-(arr_1 [i_0]))) : (arr_1 [i_0 - 2])))) ? 40241 : (((90 && (arr_1 [i_0]))))));
        var_20 = ((~((((var_7 >> (((arr_1 [i_0]) - 89)))) | (var_11 ^ var_5)))));
    }
    #pragma endscop
}
