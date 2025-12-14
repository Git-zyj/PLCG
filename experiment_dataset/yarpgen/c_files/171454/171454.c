/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((18463 > (24548 > 0)))) > (((!-24) ? ((max(1, -18445))) : ((min(-18460, -18464)))))));
    var_19 = (((((233 ? var_8 : 233))) - (((4043881805574875313 + 18467) ? (1 / 12) : 8201647721792434063))));
    var_20 = 1;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-(15793374832684431164 + 4195015034)));
        var_21 = (min(var_21, (((((4294967295 ? -4526732061322240267 : 562949819203584)) > (2653369241025120458 ^ 24524))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_22 = (~15975776212674904682);
        arr_7 [i_1] = (!(-18460 > 1));
        var_23 = (((24537 ? 18464 : -28411)));

        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_24 = ((1 > (~20644)));
            arr_10 [i_2] [i_2] = (((!207) > 48415));
            var_25 = (~-529);
            var_26 = (!4526732061322240239);
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_27 = ((!(-1 > 55)));
            arr_15 [i_1] [i_1] = (((-24549 > 1) > (141365544 > -18491)));
            arr_16 [i_3] [i_3] = 1;
            var_28 = ((0 > 529) > ((-271909790 ? 15597 : 15942)));
            var_29 = (1 > 5878486999151796723);
        }
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            var_30 = 44;
            var_31 = (min(var_31, (~163)));
        }
    }
    var_32 = (((~(((-18460 + 2147483647) << (5878486999151796703 - 5878486999151796703))))));
    #pragma endscop
}
