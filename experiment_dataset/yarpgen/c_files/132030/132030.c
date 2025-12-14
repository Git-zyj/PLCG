/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_20 = 629414032;
        arr_4 [5] &= ((!((18384468726696700907 && ((max((arr_1 [i_0] [0]), 39)))))));
        var_21 = 31600;
        arr_5 [i_0] = var_7;
    }
    var_22 += ((!(((-var_19 ? (max(var_5, var_1)) : 62275347012850708)))));
    #pragma endscop
}
