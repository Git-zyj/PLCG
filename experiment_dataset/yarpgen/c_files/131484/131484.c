/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_11 [3] = (min((arr_10 [i_0] [i_2] [i_3 - 1] [6] [i_3 - 1]), 1083034533));
                                var_15 = (arr_9 [i_1] [i_1]);
                                arr_12 [i_0] [i_2] [17] = ((7418453852677983016 ? ((((-57 + 88) ? 2071944653 : -1))) : 502537189804958002));
                            }
                        }
                    }
                }
                arr_13 [0] = (max(2342969051134063949, var_0));
                var_16 = (((~7) ? ((~(-1990083941 ^ 1))) : (-19991 <= 19996)));
                arr_14 [i_0] [i_0] |= -20007;
                var_17 = (1310365394 != ((((84 ? -16147 : -1487239817)))));
            }
        }
    }
    #pragma endscop
}
