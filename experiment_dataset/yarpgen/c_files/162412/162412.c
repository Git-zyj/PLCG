/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 += var_5;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = var_11;
        arr_2 [i_0] = ((((max(3273069881, var_7)))) || ((((arr_1 [i_0] [i_0]) ? ((49460 << (1073733632 - 1073733624))) : ((var_2 * (arr_0 [i_0] [i_0])))))));
        var_16 = ((-((var_0 ? 3273069871 : (arr_0 [i_0] [i_0])))));
    }
    #pragma endscop
}
