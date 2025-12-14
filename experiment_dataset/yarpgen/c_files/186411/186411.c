/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (max(var_12, (32326 ^ 1012313530)));
        var_13 = ((((min(1012313530, 4635570317202192156))) ? ((1012313510 ? (max(3282653766, 0)) : (1012313530 - 1403812494))) : ((-1 ? (1 * 1403812494) : (min(1, 3282653766))))));
        arr_2 [6] = 1;
        var_14 *= max((116 % 1871447491), 1);
    }
    var_15 *= ((((((2423519804 * 0) * 0))) ? (min((max(1, 3282653766)), (-1403812495 / 1012313530))) : var_3));

    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_16 = (min(-6335108652041782372, (6335108652041782371 & 9492)));
        var_17 = (max((min((max(-1403812495, 0)), (20053 & 56044))), ((1871447475 << ((((min(178, 12929))) - 178))))));
        arr_6 [i_1] = ((((((!0) <= ((min(178, 0)))))) ^ ((-((1907960292 ? 1162793923 : 0))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_18 *= (((967046992 ? -9453 : 14267)));
            var_19 *= 6335108652041782371;
            arr_12 [1] = (((!209) << (6417 - 6415)));
        }
        var_20 = 3527027368;
    }
    #pragma endscop
}
