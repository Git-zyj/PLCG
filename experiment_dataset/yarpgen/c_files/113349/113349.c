/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 += (((max((((0 ? var_9 : (arr_1 [i_0])))), 8800442222572939139)) - ((max(((min((arr_1 [i_0]), (arr_1 [i_0])))), var_8)))));
        arr_2 [i_0] [i_0] = ((-(max(-1, var_9))));
        var_17 = ((~((-((7323174553429168245 ? (arr_0 [1]) : 18446744073709551615))))));
    }
    var_18 = var_8;
    var_19 = -98;
    #pragma endscop
}
