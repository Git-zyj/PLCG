/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_19;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        arr_4 [3] = (((((var_11 ? (arr_0 [i_0] [i_0]) : 9223372036854775807))) ? (arr_0 [i_0] [i_0]) : 2147483647));
        arr_5 [i_0] [i_0] = (arr_2 [i_0]);
    }
    #pragma endscop
}
