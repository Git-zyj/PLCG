/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [1]);
        arr_3 [i_0] [9] = -var_7;
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_12 = var_2;
        arr_7 [1] [i_1] = var_4;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_13 = (max(var_13, ((((var_6 ? (arr_9 [11] [11]) : (arr_8 [10])))))));
        var_14 = (min((max((min(7690, (arr_8 [i_2]))), var_11)), (arr_1 [i_2])));
        arr_10 [i_2] = ((((min(var_0, (arr_8 [i_2])))) ? ((((((arr_8 [i_2]) ? (arr_0 [i_2] [i_2]) : (arr_8 [i_2])))) ? var_3 : 1)) : (arr_0 [i_2] [13])));
    }
    var_15 ^= -var_11;
    var_16 = (max(var_16, ((((((var_2 ? var_4 : (~var_0)))) ? (((((var_11 ? var_2 : var_10))) ? ((1 ? var_9 : var_7)) : var_2)) : (((max(-13625, 1)))))))));
    var_17 = var_7;
    #pragma endscop
}
