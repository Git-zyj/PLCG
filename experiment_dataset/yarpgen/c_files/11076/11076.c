/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((((47461 && 18050) % 65535)))));
                    var_17 = (!((((~18075) ? ((max(var_6, var_6))) : ((3 ? 0 : 2227645969389176600))))));
                    arr_7 [i_0] [i_2] [i_2] &= ((min(0, var_10)));
                    var_18 = 18075;
                    var_19 += (((-102 > 18289) ^ (62974 == 2400518604)));
                }
            }
        }
    }
    var_20 = ((-18301 ? (((max(164, (max(18074, 10)))))) : ((min(var_6, var_7)))));

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_10 [i_3] = (-11 <= 47463);
        arr_11 [i_3] = (!164);
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_21 = ((-(max(1056135032075203186, (~18075)))));
        arr_14 [i_4 - 1] = ((-18306 ? 16797 : 18075));
        var_22 = min(((226 ? 47461 : 2382787083)), -7802);
        var_23 = (max((min(var_7, (max(var_10, -8032465780080430305)))), (-8032465780080430305 & -8032465780080430305)));
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_24 = (min(var_24, (((min(18098, 18267))))));
        arr_19 [i_5] = 28;
        var_25 = (min(var_25, 61481));
        var_26 = (max(var_26, ((var_10 ? (max(-1, 18296)) : 59))));
    }
    #pragma endscop
}
