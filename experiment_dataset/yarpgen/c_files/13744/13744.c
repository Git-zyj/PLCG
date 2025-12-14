/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 17489922976611420579;
    var_15 ^= ((var_7 ? ((max((58 + var_1), ((19892 ? var_9 : 41))))) : 6784002423680681570));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [2] = (arr_0 [i_0]);
        var_16 ^= ((arr_1 [i_0] [i_0]) ? 3603572732 : (arr_0 [i_0]));
        var_17 = ((((((arr_1 [i_0] [i_0]) || (arr_1 [1] [i_0])))) % (arr_1 [15] [16])));
    }
    #pragma endscop
}
