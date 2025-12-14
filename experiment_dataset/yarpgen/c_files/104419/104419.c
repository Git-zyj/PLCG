/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_10 ^= ((((((((arr_1 [i_0]) <= 1792004444))) != (arr_0 [6]))) ? (((arr_0 [i_0]) ? (arr_1 [2]) : (arr_0 [i_0]))) : ((-(((var_8 == (arr_2 [2]))))))));
        arr_3 [i_0] = -112;
    }
    var_11 = 2147483647;
    #pragma endscop
}
