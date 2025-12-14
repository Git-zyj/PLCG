/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 ^= (1 / (min((((arr_0 [i_0]) & 3763409498)), 1)));
        arr_3 [i_0] [i_0] = (((arr_2 [i_0]) <= (((arr_0 [i_0]) & (arr_2 [i_0])))));
    }
    var_18 |= -3763409508;
    var_19 = (var_12 ? var_7 : ((64512 ? 1 : 47011)));
    #pragma endscop
}
