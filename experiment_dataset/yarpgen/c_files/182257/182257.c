/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = ((((((((138 ? -9 : 118))) ? (((var_7 ? 93 : var_2))) : ((162 ? -18062 : (arr_0 [i_0])))))) ? (((arr_3 [i_0]) ? 93 : -7248165369772498163)) : (((((18062 ? var_9 : -1216935224))) ? (arr_2 [i_0]) : ((var_1 ? (-32767 - 1) : var_0))))));
        arr_5 [i_0] = ((((((arr_0 [i_0]) ? var_3 : var_0))) ? ((((((var_7 ? 118 : (arr_2 [i_0])))) ? (((var_4 ? (arr_0 [i_0]) : 776527402))) : ((var_0 ? var_7 : 143))))) : (((((255 ? 118 : 95))) ? ((0 ? (-32767 - 1) : 2561002621660308945)) : -9325))));
        var_12 = (max(var_12, (((((((((var_6 ? -17780 : 4294967295))) ? (((arr_2 [i_0]) ? (arr_0 [i_0]) : var_9)) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_6))))) ? ((((arr_0 [i_0]) ? -18060 : var_4))) : (((((var_11 ? var_3 : (arr_3 [i_0])))) ? ((0 ? var_8 : 0)) : ((((arr_2 [i_0]) ? 1942709783 : var_2))))))))));
        arr_6 [i_0] = ((((((arr_1 [i_0]) ? var_11 : (arr_0 [i_0])))) ? ((var_11 ? var_6 : var_9)) : ((var_3 ? 40 : 93))));
    }
    var_13 += (0 ? 10353500877340129757 : 1942709783);
    var_14 = var_0;
    var_15 = ((var_1 ? var_10 : (((((3173385315 ? var_4 : var_9))) ? ((1942709778 ? var_8 : -1216935199)) : var_5))));
    #pragma endscop
}
