/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_17 = ((max(var_8, 4283296253618598458)));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_18 = max(((min(((19 ? 119 : -7)), 33))), (min(38751788, -8796093022208)));
            var_19 = (max(72, (min(24522, ((59372 ? 15887948459133806509 : -8796093022208))))));
        }
        arr_5 [i_0] = var_10;
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = (((var_16 >= 29) ? (var_1 | -24519) : ((100 ? 197 : 2047))));
        var_20 |= (~var_10);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_21 = (4283296253618598478 ? 70300024700928 : var_11);
        arr_12 [i_3] = (!24536);
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_22 *= 5480709724412170219;
        var_23 -= ((max(((max(129, 82))), 127)));
        var_24 = (min((min(-127, ((var_11 ? 113 : var_5)))), (min(((var_8 ? var_7 : -28250)), ((6373316231748424825 ? 17523466567680 : -128))))));
    }
    var_25 = var_7;
    var_26 += -476372322;
    #pragma endscop
}
