/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((100663296 * 4245304413), ((-5896741457888582188 * (((max(-3, var_8))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [14] [i_0] [i_3] [i_4] [i_4] &= ((6500 ? 250242112 : -6500));
                                var_11 -= (((((2 ? (var_3 < 1038) : -var_9))) ? (!10) : 1946624334));
                                var_12 |= ((!((!(arr_2 [i_0] [i_1] [i_1])))));
                            }
                        }
                    }
                    arr_12 [i_2] = -2372118812480008377;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_13 = var_2;
                                arr_17 [i_6] [i_2] [i_0] = (max((((-1745819488040490548 + 9223372036854775807) << (((arr_2 [i_6 + 3] [i_6 - 2] [i_6 + 1]) - 119)))), ((max((arr_2 [i_6 - 2] [i_6 - 1] [i_6 + 1]), (arr_2 [i_6 + 3] [i_6 - 1] [i_6 - 1]))))));
                            }
                        }
                    }
                    var_14 = (arr_4 [i_0] [i_2] [11] [i_2]);

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_15 = (max(((~((var_5 ? -6133 : 9223372036854775807)))), 1038));
                        var_16 = (((-((min((arr_8 [i_2 - 1]), 22))))));
                        var_17 = (0 * 14765386088324630277);
                    }
                }
            }
        }
    }
    var_18 = max(((3037089043893720538 ? -1745819488040490552 : 1026)), var_4);
    var_19 = (((min(16441, 7346086246381157794)) & var_0));
    var_20 ^= 65514;
    #pragma endscop
}
