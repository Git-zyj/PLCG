/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(var_4, ((18446744073709551593 ? 148 : 148))))) ? var_14 : (max(((min(56, 1542))), (min(18446744073709551615, 4294967281))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = (!23);
        var_18 = ((1 << (63994 - 63979)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (18446744073709551615 ? -1331773289632309253 : ((-64 ? 1 : 18446744073709551592)));
        var_19 = 2147483647;
    }
    #pragma endscop
}
