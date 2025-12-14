/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = 18446744073709551613;
        arr_3 [15] [9] = (((arr_0 [i_0]) ? (41422 <= var_16) : (((arr_0 [5]) ? var_8 : var_2))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((arr_4 [1]) ? (arr_5 [i_1]) : var_3));
        var_20 ^= (((arr_0 [i_1]) <= (arr_1 [i_1])));
    }
    var_21 = (max((min((18446744073709551597 - var_17), (3 ^ 14466792317263734534))), var_13));
    #pragma endscop
}
