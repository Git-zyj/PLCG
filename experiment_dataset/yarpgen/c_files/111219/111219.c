/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [1] = (2463404959 ? ((37742 ? var_13 : 2199466383)) : (arr_1 [6] [i_0]));
        arr_5 [6] [6] = ((var_1 ? (arr_2 [i_0]) : (arr_2 [i_0])));
        arr_6 [i_0] [10] |= (~1340601497);
    }
    var_19 = 1;
    #pragma endscop
}
