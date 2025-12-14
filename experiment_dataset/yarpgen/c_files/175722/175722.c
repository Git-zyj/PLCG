/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 244;
        var_12 = (((arr_1 [i_0]) ? (((arr_0 [i_0]) ? (((arr_1 [i_0]) ? var_3 : 17213)) : (arr_1 [i_0]))) : ((59058 | (((arr_0 [i_0]) ? 17760 : var_5))))));
        var_13 |= (((arr_1 [i_0]) && ((min((25284 - 178), ((max(-16410, 6468))))))));
    }
    var_14 = 12590146112323388525;
    #pragma endscop
}
