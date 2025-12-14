/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = (var_6 / 10469719080211435191);
        var_21 = 5;
        arr_2 [i_0] = ((7647133341866399719 ? 3159279475389059464 : var_14));
        arr_3 [i_0] [i_0] = (~7647133341866399731);
    }
    var_22 = (max(var_22, var_9));
    #pragma endscop
}
