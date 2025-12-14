/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 *= ((var_8 >> (var_6 + 4492)));
        var_13 += ((-226 && ((max(var_2, (arr_1 [i_0]))))));
        arr_2 [i_0] = max((var_8 * var_5), var_5);
    }
    var_14 = (var_8 <= 504);
    var_15 = ((((((var_8 ? var_1 : var_4)) ? var_0 : 218))));
    var_16 = ((max(var_7, var_8)));
    #pragma endscop
}
