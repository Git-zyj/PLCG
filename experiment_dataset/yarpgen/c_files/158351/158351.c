/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((max(var_7, (max(var_0, var_2)))));
        arr_4 [i_0] [i_0] = ((((max(1, 0))) ^ var_14));
    }
    var_17 = var_13;
    var_18 -= ((var_16 ? ((((((max(var_5, var_7))) || var_1)))) : 2993147831));
    #pragma endscop
}
