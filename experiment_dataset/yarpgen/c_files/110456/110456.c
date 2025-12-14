/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~-85);
    var_19 = ((166911474 & (var_14 | var_8)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [6] [6] = (9223372036854775807 ^ -126);
        var_20 = 345758870787404136;
    }
    var_21 = ((((-166911475 + (var_13 - var_6))) ^ -32755));
    #pragma endscop
}
