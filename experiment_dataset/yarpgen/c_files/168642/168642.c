/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 ^= var_0;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (((((arr_5 [i_1]) % (min((arr_1 [i_1]), (arr_6 [i_1]))))) == (((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_6 [i_1])))));
        arr_9 [i_1] [i_1] = max((arr_5 [i_1]), (((arr_5 [i_1]) ? (arr_0 [i_1]) : (arr_5 [i_1]))));
    }
    #pragma endscop
}
