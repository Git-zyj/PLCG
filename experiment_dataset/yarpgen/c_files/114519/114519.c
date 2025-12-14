/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [1] = arr_2 [i_0];
        var_11 ^= ((var_9 ? 4781600143907729622 : (arr_2 [i_0])));
    }
    var_12 = ((((((!((max(var_6, 15))))))) > ((1 ? var_9 : (((max(-81, var_7))))))));
    var_13 = (((var_5 << (((-4787402480608006307 + 4787402480608006341) - 28)))) << (((var_1 + 8848880105666809690) - 42)));
    var_14 = 0;
    var_15 = (~-61);
    #pragma endscop
}
