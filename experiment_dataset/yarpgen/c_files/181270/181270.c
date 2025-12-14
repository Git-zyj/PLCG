/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((-(~var_10))))));
    var_21 ^= ((!(((((var_0 ? 75 : var_2))) && var_18))));
    var_22 = (min(var_22, (((~((max(var_11, var_17))))))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_23 = (((((((max((arr_1 [i_0 + 1] [i_0]), var_1))) ? ((var_1 & (arr_0 [15]))) : ((var_14 ? var_17 : 20))))) ? (arr_0 [i_0]) : (max(-929916993, 17064))));
        arr_3 [i_0] = ((((((var_15 ? (arr_2 [i_0]) : (arr_0 [i_0]))))) ? ((((((var_16 & (arr_2 [i_0])))) && ((((arr_1 [i_0] [i_0]) & (arr_2 [6]))))))) : (((((var_5 + (arr_1 [i_0] [8])))) ? var_1 : ((var_4 - (arr_2 [19])))))));
        var_24 -= var_2;
        arr_4 [i_0] = ((var_10 ? -var_9 : 64));
    }
    #pragma endscop
}
