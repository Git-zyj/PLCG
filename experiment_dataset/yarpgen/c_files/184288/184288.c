/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 -= var_9;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 -= (((((arr_2 [i_0] [i_0]) + 2147483647)) << (49 - 49)));
        var_13 = (max(var_2, ((-(arr_1 [i_0] [i_0])))));
        arr_4 [i_0] = (((max((((~(arr_2 [i_0] [i_0])))), ((-(arr_1 [i_0] [i_0]))))) != (((~((var_4 ? var_1 : (arr_2 [i_0] [i_0]))))))));
        var_14 = ((((max((((var_4 ? 37451 : (arr_2 [i_0] [i_0])))), var_4))) ? (arr_3 [i_0] [i_0]) : (-71 != 1940953575)));
        var_15 -= (max((max(((max(var_6, var_3))), 201326592)), ((((!-1101148282) && var_6)))));
    }
    var_16 = var_7;
    var_17 = (min(var_17, (((var_9 != (max((~var_3), var_3)))))));
    #pragma endscop
}
