/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (var_2 <= var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (max(11071943212935172028, 11071943212935172033));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_2] [i_1] [0] = 17162974631417593698;
                                var_13 *= 1283769442291957918;
                                arr_13 [i_1] [i_4] = 8057252816278759828;
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1] = 15;
                var_14 -= ((min((arr_3 [i_1 + 3] [0]), 17162974631417593698)));
                var_15 = 1283769442291957913;
            }
        }
    }
    var_16 = (1283769442291957924 >= -1);
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                var_17 = (((arr_16 [i_5] [i_5]) ? ((((max(17, 8057252816278759833))) ? (arr_11 [i_5 + 1] [i_5] [i_5] [i_6] [i_6]) : (arr_18 [8]))) : (((((46855 ? 1067523545 : 3798899049768740852)))))));
                var_18 = (arr_11 [i_5] [i_6] [i_5] [i_6] [i_6]);
                arr_23 [i_6] = (11 < 7374800860774379588);
                arr_24 [i_6] = (arr_2 [i_6]);
            }
        }
    }
    #pragma endscop
}
