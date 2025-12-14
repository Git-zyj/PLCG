/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((~((3355877501239706951 >> (var_0 - 263041699))))) >> (-var_4 + 24)));
    var_11 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (2 && var_2);
        arr_3 [i_0] = (((((~(arr_0 [i_0])))) ? (((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0]))) : ((36028797018963967 ? (arr_1 [i_0]) : (arr_0 [i_0])))));
        arr_4 [i_0] = var_4;
        var_13 = ((262143 < (arr_1 [i_0])));
    }
    #pragma endscop
}
