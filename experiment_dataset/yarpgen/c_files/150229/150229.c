/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (2224471589707993216 >= 2224471589707993204);
                var_19 += (min((3101949403 | 4280368544), -25));
                var_20 = ((((min(1193017876, (min(20754, 3953428334))))) & (-9223372036854775807 - 1)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_21 = (~0);
                                var_22 = -18446744073709551615;
                                var_23 = ((!(arr_0 [i_0] [i_0])));
                            }

                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 16;i_5 += 1)
                            {
                                var_24 -= (arr_10 [1] [i_1 - 1]);
                                arr_18 [i_0] [i_1] [i_3] [i_0] = (!3);
                                var_25 = 12;
                            }
                            for (int i_6 = 0; i_6 < 16;i_6 += 1)
                            {
                                var_26 = (max(var_26, (((~(1145044296 > 4280368544))))));
                                var_27 = (((max((min(17, 21120)), (18446744073709551611 < 2949468812))) > ((1345498483 ? (~1028203284310364542) : 133))));
                                arr_21 [i_1] [i_1] [i_0] [i_1] [15] [i_0] = (((arr_1 [i_0]) ? (((-3552812790636012059 ? 1 : -1012))) : 2224471589707993219));
                                var_28 = (max((-25955 <= 2949468830), (max(-2224471589707993219, 1193017886))));
                            }
                            for (int i_7 = 0; i_7 < 16;i_7 += 1)
                            {
                                var_29 = (((1 | 1) ? 9 : 0));
                                var_30 = (min(16353043878937567644, (((((arr_15 [8] [i_3]) <= 4207585733)) ? 2093700194771983959 : (!87381554)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = ((max(var_0, (87381540 <= -7585347470860449984))));
    #pragma endscop
}
