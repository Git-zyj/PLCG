/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((((min(9908, var_10))) ^ (min(11617552992918992368, 11617552992918992368))));
        arr_3 [i_0] = (min((min((var_5 < var_12), (max(var_3, 11617552992918992371)))), (var_12 || var_8)));
        var_20 = ((((((((max(var_13, var_18))) || ((max(6829191080790559245, 22904))))))) | (((max(var_2, var_18)) + (max(9246, var_19))))));
    }
    var_21 = var_12;
    var_22 = 242;

    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_8 [i_1] = (max(var_12, (18642 <= var_9)));
        var_23 = var_3;
    }
    #pragma endscop
}
