/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (1 && 58797);
        arr_3 [i_0] = ((~(arr_1 [i_0 - 1])));
        arr_4 [i_0] = 831206837;
        arr_5 [i_0] [i_0 - 1] = ((1508290551 ? 1 : (1 | -584087748)));
    }
    var_13 = var_4;
    #pragma endscop
}
