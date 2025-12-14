/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = ((~(min((arr_1 [i_0]), ((90 ? -736 : var_12))))));
        var_20 = (max(var_20, ((((min(-1084435020, -6181012143867213215))) || (arr_1 [i_0])))));
        arr_2 [i_0] = max((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), (min(((165 ? 84 : var_1)), (((var_8 ? var_9 : 72))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = 1;
        var_21 = ((((arr_0 [i_1] [i_1]) ? ((min(66, 171))) : 74)));
        var_22 = (min((165 && 250), ((1 || (arr_1 [i_1])))));
        arr_7 [i_1] = ((((arr_5 [i_1]) ? (arr_3 [i_1]) : 18446744073709551606)));
    }
    var_23 = (!var_15);
    #pragma endscop
}
