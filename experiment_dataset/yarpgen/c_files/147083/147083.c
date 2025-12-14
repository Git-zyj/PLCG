/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 7168;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 -= var_2;
        arr_3 [19] &= (min((((1 * -492204951) ? (var_6 * var_0) : ((1 ? var_6 : (arr_0 [i_0]))))), ((((min(492204953, 1))) ? 1 : -33))));
        var_16 = ((((-126 && (1 || -1613618617))) && ((min((!1019126117), -2015458386)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_17 = (~1);
            var_18 = (min(var_18, (1 || 212)));
        }
        arr_9 [i_1] &= (min(28, 5064645204174602371));
        var_19 = (103 ? 1 : 492204950);
        var_20 *= var_8;

        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_21 = var_2;
            var_22 = var_3;
        }
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_16 [i_4] = 1653422885;
        var_23 = (((-127 - 1) + var_10));
        arr_17 [i_4] = var_4;
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = (+-104);
        arr_22 [i_5] = ((-4013413941 * (((6376785651887577698 ? var_7 : 47)))));
    }
    #pragma endscop
}
