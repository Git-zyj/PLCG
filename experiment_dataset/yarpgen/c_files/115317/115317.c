/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (min(var_13, (arr_0 [i_0] [i_0])));
        arr_2 [i_0] [i_0] = (((-32741 + 9223372036854775807) >> (((arr_0 [i_0] [i_0]) - 148))));
    }
    var_14 &= (max((min((~var_0), var_12)), var_6));
    var_15 = (min(var_15, (((-((min(129, var_10))))))));
    #pragma endscop
}
