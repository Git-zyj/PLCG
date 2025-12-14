/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= -var_11;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [8] &= ((((min((arr_2 [i_0] [1]), var_6))) >> var_11));
        var_14 ^= (min((((var_9 != (min(var_9, var_12))))), (max((124 * var_7), (max(var_12, 0))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_15 = (16964 / -var_10);
        arr_6 [i_1] [1] = (((arr_1 [i_1]) << (((~var_12) - 5574997182186066052))));
        arr_7 [i_1] = var_11;
    }
    var_16 |= ((-var_11 == ((((var_6 * 906) % var_10)))));
    #pragma endscop
}
