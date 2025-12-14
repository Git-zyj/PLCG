/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [6] = (((-19 + 1) - 53));
        arr_5 [i_0] = ((1923909048 >> (2588 - 2557)));
    }
    var_19 = var_12;
    var_20 = min((max((min(11, 1)), var_16)), var_15);
    var_21 = (min((623440224611481925 <= 623440224611481913), var_18));
    #pragma endscop
}
