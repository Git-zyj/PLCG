/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_5 - (((max(-101, 21))))));
        var_19 |= (((max(108, 3897469858))) >> (4413299495648707882 / var_4));
        var_20 = var_6;

        for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
        {
            var_21 = -112;
            var_22 = ((((~((min(-108, 102)))))) ? (116 * -var_10) : (var_0 < var_18));
            arr_7 [i_0] = 7;
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_23 &= (((max(117, 11855180630350479356)) * (((var_13 <= (13599 < var_17))))));
            var_24 = -65024;
            var_25 = ((~(!-29)));
            arr_10 [i_0] = 65535;
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
        {
            arr_15 [i_0] [i_0] = (6542641636414771271 / 116);
            var_26 = ((1168916783 ? ((-113 ? 3979373282 : -37)) : (((var_14 ? 115 : 5675)))));
            arr_16 [i_0] [9] = -var_10;
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        var_27 = (max(var_27, 113));
        var_28 = var_6;
        var_29 -= (7959016684338629096 / var_10);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_30 = ((!(((69 >> (13592 - 13564))))));
        arr_22 [i_5] = 3290564719;
    }
    var_31 = var_17;
    var_32 *= ((~((-15158751718982185860 ? -32764 : 51884))));
    #pragma endscop
}
