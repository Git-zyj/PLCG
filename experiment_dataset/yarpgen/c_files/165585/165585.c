/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(122, ((-((1871648163 ? -3949219932999549704 : 887646343))))));
    var_12 |= (534243451 ? 262143 : 721441239);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 ^= (min((min((53894895 * 721441248), (min(var_9, var_2)))), var_5));
        var_14 = (((max((-32767 - 1), 721441239)) <= 721441239));
        arr_2 [i_0] = -66;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_15 ^= -1739577453;
        var_16 = (!(-32767 - 1));
    }
    #pragma endscop
}
