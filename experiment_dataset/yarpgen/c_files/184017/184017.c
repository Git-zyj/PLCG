/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = max(6957464611105534305, (((!-24) ? -6957464611105534305 : (((-6957464611105534312 + 9223372036854775807) >> (-1172876638027552252 + 1172876638027552256))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [8] [i_0] [i_4] [i_0] [i_0] [i_0] = (min(((((min(-1172876638027552252, (arr_6 [i_1] [i_4])))) ? 1482133960436014415 : 2017231028286608766)), (max(6957464611105534301, var_5))));
                                var_17 = (min(var_17, -1172876638027552252));
                            }
                        }
                    }
                    var_18 = var_7;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_20 [i_1] [i_2] [i_5] [i_6] = var_8;
                                var_19 = max((((~-693384824) ? var_0 : (min((arr_1 [i_0]), 1)))), 1);
                                arr_21 [i_0] [i_1] [i_2] [i_5] = -1172876638027552236;
                            }
                        }
                    }
                    arr_22 [i_0] = ((~((~(((arr_15 [i_2] [i_2] [i_1 - 1] [i_0] [i_0]) ? 6957464611105534311 : 11551777647150653722))))));
                }
            }
        }
    }
    var_20 = (min(6957464611105534305, 1));
    #pragma endscop
}
