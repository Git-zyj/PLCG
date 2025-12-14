/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((((min(32767, var_11))) ? var_15 : ((min(var_10, var_0))))), var_11));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_21 = -302547039;
        var_22 = 255;
        var_23 = var_19;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_24 = (arr_6 [i_1] [i_1]);
        var_25 += -var_18;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_26 = (min(var_26, var_5));
        var_27 = 14894;
        var_28 += var_16;
        var_29 = (max(var_29, (arr_4 [i_2])));
    }
    var_30 = (max(var_30, var_11));
    var_31 = (min(var_31, var_1));
    var_32 |= (1151985312 ^ 197);
    #pragma endscop
}
