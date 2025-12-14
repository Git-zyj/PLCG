/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = (arr_0 [9] [16]);
        var_13 = (((max((((arr_0 [i_0] [i_0]) ? (-32767 - 1) : (arr_2 [i_0] [i_0]))), ((1 ? (arr_0 [i_0] [i_0]) : 24576)))) <= ((min(1, 0)))));
        var_14 = (max(var_14, ((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : ((var_4 ? var_10 : 9223372036854775807)))) | ((max(0, ((var_6 ? 0 : (arr_1 [i_0] [i_0])))))))))));
        var_15 = (!(min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))));
    }
    var_16 = ((((((max(24582, var_11))) == 1)) ? var_0 : var_2));
    #pragma endscop
}
