/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~214) ? var_5 : var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = ((((1 ? 2419500618 : (arr_3 [i_1])))) > ((min(20613, -2021389069))));
                    arr_6 [i_0] = ((-((1910826385 % (min(1910826396, 1))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 = (min(32751, (max(2384140933, (arr_7 [i_1] [i_1] [i_2 + 4])))));
                                arr_12 [i_0] [i_1] [12] [i_3] [i_4] &= ((((min(-1, (min((arr_1 [i_0]), (arr_5 [i_0] [i_0] [5])))))) ? ((min(31065, (max(2384140933, 2021499341))))) : (min((max(53551, 2341649417305466644)), ((max(12, 40250)))))));
                                var_13 = (arr_5 [i_4] [i_1] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
