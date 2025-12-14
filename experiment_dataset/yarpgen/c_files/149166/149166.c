/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 -= var_4;
                    var_21 = (min((max(-179488999844143861, (-9223372036854775807 - 1))), ((min((13 < 13), 13)))));
                }
            }
        }

        for (int i_3 = 4; i_3 < 22;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_22 = ((((max((var_11 / 179488999844143861), (13 | var_18)))) && 562949953420800));
                var_23 = (((4294967295 ? 179488999844143860 : -179488999844143862)));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_16 [i_5] [i_3] [i_5] = ((min(var_17, var_7)));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        {
                            var_24 = (-562949953420801 != 4294967295);
                            var_25 &= (!(((max(2, var_0)))));
                            arr_21 [i_5] [i_6] [i_5] [i_5] [i_3] [i_5] = 3826485458;
                            var_26 = (min(var_26, ((((max(((max(var_5, -32765))), (min(0, -9213093997989268068)))) ^ -7865928642992827964)))));
                        }
                    }
                }
                var_27 = (max((min((min(-8842798048490816920, 9861380177814756724)), var_16)), var_17));
            }
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                var_28 += ((min(0, var_5)));
                var_29 -= (max((((max(-179488999844143862, var_1)) / 18921)), (4389456576512 * 0)));
                var_30 = (min((min(116, 100)), ((((max(179488999844143844, 13)) <= (max(-9213093997989268079, var_6)))))));
                var_31 = ((((29901 ? (var_11 >= 217) : ((var_4 ? var_15 : 9861380177814756712)))) % (26513 && var_17)));
            }
            arr_24 [14] [i_0] = ((((((1 > -918135274) * (min(var_18, var_17))))) ? ((((min(18165, var_11))) ? 56863 : 9213093997989268058)) : 562949953420815));
        }
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 18;i_9 += 1)
    {
        var_32 = 1;
        arr_27 [i_9] [i_9] = 43020;
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_33 = ((1 ? ((8672 ? var_15 : var_8)) : ((var_13 ? var_15 : var_18))));
                        arr_36 [i_11] = var_19;
                        var_34 -= (var_0 | -8842798048490816938);
                    }
                }
            }
        }
        arr_37 [i_9] = var_1;
    }
    var_35 = (min((((((min(var_9, var_15))) * (!-277247988024227914)))), (min((max(-815208058950206063, var_1)), (!var_18)))));
    #pragma endscop
}
