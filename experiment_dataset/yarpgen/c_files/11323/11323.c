/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 *= (((!17592186044415) % ((15343 ? 6369 : (arr_1 [i_0 - 2] [i_0 - 2])))));
                    var_18 = 1424246525;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = ((~(((arr_13 [i_0] [i_0] [i_2] [i_3] [i_4 + 1]) ? (max(2574452548, 14390)) : -6620))));
                                var_20 += (((~0) * (max(1424246525, -1))));
                                var_21 -= (!37425);
                                var_22 = (max(var_22, (arr_13 [i_4 - 3] [i_4] [i_3 - 1] [i_3 - 1] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (~var_13);
    #pragma endscop
}
