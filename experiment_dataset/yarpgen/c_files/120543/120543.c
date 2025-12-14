/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 0;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = ((((((var_7 ? 65532 : 65530)))) == ((((((arr_0 [i_0]) + var_11)) != var_2)))));
        var_17 = ((6 ? (((((arr_0 [i_0]) ? 65532 : (arr_0 [4]))) >> (((((arr_0 [i_0]) >> (((arr_0 [i_0]) - 41956)))) - 303)))) : (((arr_1 [i_0] [i_0]) + (arr_1 [i_0] [i_0])))));
    }
    #pragma endscop
}
