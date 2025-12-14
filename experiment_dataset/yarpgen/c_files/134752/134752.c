/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_3] [i_0] [i_3] [i_3 + 2] [i_4 - 1] = ((((max(2163686180, 1)) ? ((3113018039479657056 ? -2147483646 : 19219)) : -2015691482)));
                                arr_16 [i_0] [i_3] [i_2] [i_3 + 2] [i_3] [i_3] [1] = -2147483646;
                            }
                        }
                    }
                }
                var_13 -= (max(((((max((arr_4 [i_1] [4] [i_1 + 1]), (arr_9 [i_0] [i_1] [i_1] [i_0])))) ? (!1) : ((max(var_4, 15140))))), ((-4360 ? 1 : 1))));
                var_14 = ((((((2147483645 - 1) ? (~1) : (arr_13 [i_1 + 2])))) ? ((((~9048514205575314913) * (((((arr_11 [i_0] [i_0] [i_1] [i_1] [i_1]) > 2147483645))))))) : ((var_9 ? (arr_11 [2] [i_1 - 1] [i_0] [i_1 - 1] [i_1 - 1]) : 2926825033374925524))));
                var_15 = (min(var_15, ((max(522240, 2985716010)))));
                var_16 = max((max(216651944791658889, 11)), (((~(arr_1 [i_1] [i_1 + 2])))));
            }
        }
    }
    #pragma endscop
}
