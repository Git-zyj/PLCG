/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((((!var_7) ? ((3734406631 ? var_4 : 167)) : (((2147483632 >> (56063 - 56045))))))) ? var_7 : ((((((-2147483633 ? var_5 : var_4))) ? var_1 : (var_0 <= var_1))))))));
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [6] |= (arr_0 [i_0] [i_0]);
        var_12 = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = (arr_0 [i_0] [10]);
        var_13 += (((~var_9) ? ((var_6 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : ((var_8 ? (arr_0 [i_0] [i_0]) : (-2147483641 || 0)))));
    }
    #pragma endscop
}
