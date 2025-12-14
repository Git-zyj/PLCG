/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_19 ^= ((-32764 ? (arr_0 [i_0 + 1] [i_0 + 1]) : -105));
        var_20 ^= (((arr_1 [i_0] [i_0]) * ((~(arr_2 [i_0])))));
    }
    var_21 = ((-((-var_15 ? var_2 : (var_9 % var_3)))));
    var_22 = (!((((!9223372036854775807) ? var_6 : (!32764)))));
    #pragma endscop
}
