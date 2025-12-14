/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((min(4, 14111256515955154027)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (min(var_20, (((~(((var_2 | var_1) / ((1320881413 ? 10290268212477744014 : var_5)))))))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            arr_8 [i_1] |= ((((2836309188 ? var_18 : var_18)) | (0 & var_11)));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_21 = (((var_9 ? var_9 : 60415)) & (846724194 < 1645467583));
                            var_22 = ((9223372036854775807 ? -1645467583 : ((var_18 ? -1645467583 : 65535))));
                        }
                    }
                }
            }
            arr_17 [i_1] [i_1] |= 0;
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_23 = ((var_17 ? (~549755813824) : (!var_13)));
            var_24 = ((((var_6 ? 16128 : var_7))) && var_14);
            var_25 = -1645467603;
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_23 [i_0] [i_0] [i_0] = -89;
            var_26 = ((-var_12 ? (((((255 ? 59 : 356774485))) ? var_4 : -var_13)) : 356774485));
        }
        arr_24 [i_0] = (+-127);
    }
    var_27 = 0;
    var_28 = (((((65 * 18) != (127 & 96))) ? 7 : (~1231566340)));
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            arr_38 [i_7 - 1] [i_8] [i_9] [i_7] [i_8] = var_17;
                            var_29 = var_0;
                        }
                    }
                }
                arr_39 [i_7] = (min((min(((32757 ? -1645467583 : -46)), (min(1204340869, var_6)))), (((!(((76 ? -44 : var_16))))))));
                var_30 = (((-4294967295 == 157) - (((min(var_2, 1))))));
            }
        }
    }
    #pragma endscop
}
