/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_10 ? var_5 : (min(var_5, var_8))))) ? var_5 : ((((var_5 ? 4616710240325399293 : var_4))))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_12 ^= (arr_0 [i_0 + 1]);
        arr_2 [i_0] [i_0 + 2] = (((arr_0 [i_0 + 2]) || ((((((arr_1 [i_0]) <= 13830033833384152323)) ? (min(1100219587, -14396)) : (var_5 <= 4616710240325399293))))));
        arr_3 [i_0] = (min((min(13830033833384152321, (arr_1 [i_0 + 2]))), ((((~65535) ? ((-122 ? 12 : 101)) : 14263)))));
    }
    var_13 = ((-((~(min(var_5, 7272136046823058317))))));
    var_14 = var_8;
    #pragma endscop
}
