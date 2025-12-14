/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_13 = (((arr_2 [i_0 - 2]) != (arr_2 [i_0 + 1])));
        var_14 = ((((~(arr_0 [i_0]))) / (((arr_1 [i_0]) - (arr_0 [i_0])))));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_15 = (min(((min((arr_2 [i_1 - 2]), ((min(var_1, (arr_1 [i_1]))))))), (min(var_0, (arr_6 [i_1 + 2])))));
        arr_7 [i_1] = (min(30, 1));
    }
    var_16 = 3985826555;
    #pragma endscop
}
