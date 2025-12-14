/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (((((var_3 ? ((min(-115, -25))) : 1))) ? ((-1 ? 3418831615162629911 : 4294967295)) : ((-111 ? 15027912458546921705 : var_1))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((-(var_9 & 3418831615162629911)));
        var_13 = var_4;
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1 - 1] [i_1] = 4288888599866717545;
        arr_6 [i_1] = 122;
        var_14 = var_4;
    }
    #pragma endscop
}
