/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (max(var_0, (max((var_1 > 9223372036854775807), (var_14 + var_0)))));
        var_17 = (((max((-1051522186199123699 % -5), 52848)) < -5651));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = (((arr_5 [i_1] [0]) ? ((12704 ? var_4 : (arr_7 [i_1]))) : ((var_13 ? (arr_6 [i_1] [i_1]) : (arr_5 [1] [i_1])))));
        var_19 = (arr_8 [i_1]);
        arr_9 [i_1] = (arr_5 [22] [i_1]);
        var_20 = (((arr_6 [i_1] [i_1]) ? (arr_6 [7] [i_1]) : (arr_8 [i_1])));
        var_21 = ((12783016822577731089 ? (!5663727251131820527) : var_11));
    }
    #pragma endscop
}
