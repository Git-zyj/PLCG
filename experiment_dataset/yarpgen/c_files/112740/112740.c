/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 92;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (1459128710 || var_7);
        arr_3 [i_0] = (!84);
        var_19 = (arr_2 [11] [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_20 = -var_1;
        var_21 |= (max((((!(((var_8 % (arr_5 [i_1]))))))), (arr_5 [i_1])));
    }
    #pragma endscop
}
