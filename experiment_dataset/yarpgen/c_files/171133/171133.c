/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = 24367;
        arr_3 [i_0] = var_13;
        arr_4 [i_0] = (((((240 ? -7253528495515776459 : 41159))) && 4));
    }
    var_20 = var_16;
    var_21 = 24367;

    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_9 [i_1] = 225040395;
        arr_10 [i_1] = (min((arr_8 [i_1 + 1] [i_1 - 1]), (arr_8 [i_1] [i_1])));
        var_22 ^= (arr_8 [i_1 - 1] [i_1 - 1]);
    }
    #pragma endscop
}
