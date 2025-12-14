/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (min((min(((var_7 ? var_5 : (arr_1 [i_0]))), ((4522094316981575011 ? var_15 : (arr_1 [i_0]))))), ((+(max((arr_1 [i_0]), var_4))))));
        arr_2 [i_0] = min(((min((arr_0 [i_0] [i_0]), var_8))), ((var_12 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))));
    }
    var_19 = ((((((var_9 ^ var_3) ? var_15 : var_13))) ? (!var_10) : ((var_13 >> (((var_10 / var_0) - 4241489107))))));
    var_20 += ((-((var_11 ? var_9 : var_11))));
    var_21 += (((((-(var_4 * 1336254157825554681)))) ? ((((~var_16) | var_14))) : (((var_13 && var_3) ? (229866374795503616 <= var_9) : ((8896012222017807874 ? var_16 : 0))))));
    #pragma endscop
}
