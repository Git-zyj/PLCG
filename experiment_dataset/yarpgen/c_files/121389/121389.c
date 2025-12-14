/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= 3180004840;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] [i_2] [i_0] = (max((min(16476601922755038401, (min(9932842430101684031, 2718076658)))), 37));
                            var_17 = (min(var_17, 2147483647));
                            var_18 = 42094;
                            var_19 = (min((min(-2074309133772754535, 7)), ((min(4294967295, 36117)))));
                        }
                    }
                }
                var_20 += (min((min(69, 186)), (min(69, 13))));
                var_21 = (max(var_21, ((max((min((min(192, 1565846087)), ((max(252, 101))))), 101)))));
            }
        }
    }
    var_22 = (min(((min((min(65, 0)), (min(-111, 238))))), (max((min(11680218700119792373, -2235183910836001870)), ((min(-6278, 139339866)))))));
    /* LoopNest 3 */
    for (int i_4 = 4; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_24 [i_8] [i_7] [i_6] [i_7] [i_4] = (min((max(-5148645586715673658, 55)), ((min(4294967295, 158)))));
                                var_23 = -1;
                                var_24 = (max((min(-139339866, -1)), 21975));
                            }
                        }
                    }
                    var_25 = 254;
                    arr_25 [i_4 - 1] [i_5] [i_5] [i_6] = (max((min((max(0, 12554833757409976092)), ((min(52, 336159004))))), 475479130));
                    var_26 &= 1595503293;
                }
            }
        }
    }
    var_27 = (min(((max(var_11, ((max(43561, 36979)))))), (max(var_13, var_2))));
    #pragma endscop
}
