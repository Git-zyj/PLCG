/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_8;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = ((0 ? (arr_2 [i_0] [i_0]) : 0));
        var_20 = ((arr_3 [i_0]) ? ((-((58239 ? 16412661889576911563 : 1001455253)))) : var_10);
        arr_4 [6] [i_0] = (((((((var_8 ? var_12 : (arr_2 [i_0] [i_0]))) | (max((arr_0 [7]), 1098437885952))))) ? (min((((var_0 ? (arr_0 [i_0]) : var_5))), var_4)) : (((var_14 & (~var_12))))));
    }
    var_21 = ((-((((-7968282624674652403 ? 255 : var_17))))));
    var_22 = (((min(-729240794048505298, (var_7 && var_13))) != ((((57 / var_10) * var_0)))));
    #pragma endscop
}
