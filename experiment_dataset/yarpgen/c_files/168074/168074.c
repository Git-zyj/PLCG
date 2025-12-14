/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (((((min(var_2, 94)))) ? ((((max((arr_0 [i_0]), -9054))) ? (min((arr_1 [10] [10]), (arr_0 [i_0]))) : 255)) : (min((arr_1 [i_0] [4]), ((3793 ? (arr_1 [8] [8]) : 4942501932851039643))))));
        var_15 = (arr_1 [i_0] [i_0]);
        var_16 = ((((((min(var_6, 56331))) ? (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))) : (arr_1 [i_0] [11]))) > ((max(((2048554998 ? var_0 : 2246412297)), 30071)))));
    }
    #pragma endscop
}
