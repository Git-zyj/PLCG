/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 100;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_12 = ((((100 ? 0 : -5682059094970616050))) ? var_10 : 156);
        arr_4 [i_0] [6] = ((~(146 * -77)));
        var_13 = ((-(arr_1 [i_0 + 1])));
    }
    var_14 = ((((min(var_10, var_10))) ? ((((((-57 ? -1606677732 : 0))) ? var_8 : ((102 >> (-112 + 122)))))) : (max(-17726, -7449618479098790423))));
    var_15 = ((var_0 - ((((!((min(var_0, var_3)))))))));
    var_16 = var_2;
    #pragma endscop
}
