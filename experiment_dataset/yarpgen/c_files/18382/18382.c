/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((((((((19 / (-127 - 1)))) ? (-127 - 1) : (max(var_14, (arr_1 [i_0] [i_0])))))) ? (max(1, (arr_0 [i_0]))) : var_15));
        var_16 = (min(var_16, var_15));
        arr_3 [i_0] |= (max(((var_13 ? (arr_1 [i_0] [i_0]) : var_7)), ((((max(var_13, (-127 - 1)))) ? (arr_1 [i_0] [i_0]) : ((min(127, var_15)))))));
        var_17 *= var_0;
    }
    var_18 = (max(var_13, ((min(((60 >> (34634616274944 - 34634616274922))), 1)))));
    var_19 = (-var_8 * var_5);
    var_20 = (((((var_5 ? (var_4 / var_1) : ((max(1, var_11)))))) ? var_8 : 124));
    var_21 = var_4;
    #pragma endscop
}
