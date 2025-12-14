/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 += (var_9 <= 14);
        var_18 = 7332;
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_19 = (--5877118633839024553);
        arr_4 [i_1 + 3] = (min((((((660451518 >> (25940 - 25914)))) ? -15 : (1 * 1))), 64878));
        var_20 = max(((0 ? 1 : 1)), (((((30 ? 110 : var_2)) != (~14500)))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_7 [18] |= (max(((58204 ? (var_3 * 1) : var_0)), ((-4 ? -20728 : -20727))));
        var_21 = ((~((14 ? -5877118633839024553 : ((max(983040, 1)))))));
        arr_8 [i_2] [i_2] = (max(-95, (-95 | 14)));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [12] = (((199 ? -62 : 42602)));

        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            var_22 = (max((min((-257061172 + 11821), (min(var_12, -54)))), ((max(1, 2274808682)))));
            var_23 = ((((min(-20747, 46584))) > (~134)));
            var_24 = var_2;
            var_25 = (max(var_25, 1));
            var_26 = (max(-var_7, ((((((18952 >> (var_2 - 33146)))) % -var_8)))));
        }
    }
    #pragma endscop
}
