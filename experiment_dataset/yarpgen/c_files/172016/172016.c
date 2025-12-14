/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max(var_6, 56))) ? (min(var_16, ((-92 ? -31 : var_11)))) : var_7));
    var_18 &= ((var_6 <= ((((min(-29075, var_9))) ? -var_11 : (var_10 >= 255)))));
    var_19 ^= var_0;

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_20 &= (min((min(((~(arr_0 [i_0]))), (~149))), var_15));
        arr_2 [i_0] |= max(177, -1427);
        var_21 = (((max(var_11, var_0))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_22 = ((((((arr_4 [i_1 + 2]) ? var_6 : (arr_4 [i_1 + 2])))) ? ((var_11 ? 20570 : var_14)) : ((-((var_10 ? (arr_3 [i_1]) : 32))))));
        var_23 = (min(((-((max((arr_3 [14]), var_1))))), (min(((241 ? 101 : var_7)), (arr_3 [i_1 - 2])))));
        var_24 = (max((max((((arr_4 [i_1]) ? (arr_4 [i_1]) : var_4)), ((var_2 ? (arr_3 [i_1]) : var_16)))), ((128 ? (arr_4 [23]) : (arr_4 [i_1 - 1])))));
    }
    #pragma endscop
}
