/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (arr_2 [i_0]);
        var_20 = ((var_17 >> (((arr_1 [i_0]) - 17890651786119676542))));
        var_21 = ((arr_3 [i_0]) ? (arr_3 [i_0]) : var_3);
    }

    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_22 += ((((var_9 | 10433598745247124130) ^ ((~(arr_4 [3]))))));
        var_23 ^= (((~var_10) ? (((arr_5 [1]) ? 8013145328462427503 : (arr_5 [i_1]))) : ((var_1 * (arr_4 [i_1])))));
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        var_24 = var_1;
        var_25 = 61448;
    }
    #pragma endscop
}
