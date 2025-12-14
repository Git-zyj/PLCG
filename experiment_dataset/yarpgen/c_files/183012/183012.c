/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = max((max(-67, -54)), (((((max(-93, -5))) <= -125))));
        arr_4 [14] |= ((var_10 ? (arr_1 [i_0 + 1]) : -66));
    }
    #pragma endscop
}
