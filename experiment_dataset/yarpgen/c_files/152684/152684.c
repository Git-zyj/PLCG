/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_0;
    var_16 = (max(var_16, (~-125)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((((((!(arr_0 [15] [i_0])))) >> (((arr_0 [i_0] [i_0]) - 28656))))) ? 65535 : (((15 % 9007198986305536) ? ((241 ? -2054736459574443136 : 0)) : var_13)));
        var_17 = var_14;
        arr_3 [i_0] = (((max((max((arr_0 [i_0] [i_0]), 18437736874723246080)), (~30184))) & (var_9 % 116)));
        var_18 = var_6;
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        var_19 += ((var_5 & ((((((arr_0 [i_1] [i_1]) & var_9))) ? ((-26201 ? (arr_4 [i_1 - 3]) : 4092744354)) : (((max(36014, var_1))))))));
        arr_6 [i_1 - 2] [i_1] = ((var_12 ? ((~(arr_0 [i_1] [i_1 - 1]))) : (((arr_1 [i_1 - 3]) ^ -35352))));
        arr_7 [i_1] [i_1] = -1;
    }
    #pragma endscop
}
