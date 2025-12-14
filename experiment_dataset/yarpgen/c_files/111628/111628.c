/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((((((var_0 == (-127 - 1))))) == (max(-1, 1))));
    var_11 = 65535;
    var_12 ^= var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_13 |= var_4;
        var_14 = 9223372036854775801;
        arr_4 [i_0] = -712038601;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_15 = (max(var_15, 77));
        arr_7 [i_1] [i_1] = (((~(min(4302194834509950032, 0)))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_10 [6] = ((max(var_9, var_4)));
        arr_11 [i_2] [i_2] = (min(-11, ((9070760396224689404 / (~var_0)))));
    }
    #pragma endscop
}
