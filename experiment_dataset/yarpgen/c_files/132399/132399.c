/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_3 << ((((-((2048 ? 10689668331163791478 : 10482461628830312645)))) - 7757075742545760128))));
    var_14 += 658317121;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0 - 1] [i_0 + 1] = ((((((arr_4 [i_0] [12] [i_2 - 1]) ? (arr_5 [i_1] [i_1] [i_1] [i_0]) : 1447383579))) * (9443384097080771077 - 4120251551)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = 174715721;
                                var_16 = (((((-(arr_5 [i_0] [0] [8] [i_4])))) ? (1447383579 + 2048) : 7225945058342431952));
                            }
                        }
                    }
                }
            }
        }
        var_17 = (((arr_5 [i_0] [i_0] [i_0 - 1] [i_0]) ? ((7855715958888242738 ? var_4 : 2847583716)) : 6));
        arr_14 [i_0 - 1] [i_0 - 1] = ((15 ? 645 : (-9223372036854775807 - 1)));
        arr_15 [i_0] [i_0] = var_12;
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_18 = 5065115054816677157;
        arr_19 [i_5] = (-2070 + 1447383555);
    }
    #pragma endscop
}
