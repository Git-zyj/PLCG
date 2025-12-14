/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_12 = (-112 == 63);
        var_13 |= ((max((arr_0 [i_0 + 1] [1]), 111)));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_14 = (max(var_14, ((((min(1, -457300464741856211)))))));
        arr_6 [i_1] = ((min((max(295539695, 0), ((((arr_3 [i_1]) >= -295539696)))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] |= var_8;
        arr_10 [i_2] = (((((((var_3 % (arr_0 [4] [4])))) ? ((1 ? 18 : 65535)) : ((((var_11 || (-2147483647 - 1))))))) < (((((min((arr_2 [i_2]), var_11)) <= (((24 ? (arr_0 [1] [10]) : 1931879733)))))))));
    }
    var_15 = ((var_8 ? var_1 : (((var_0 ^ 1) ? var_2 : (((295539704 ? var_3 : var_0)))))));
    #pragma endscop
}
