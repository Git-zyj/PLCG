/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_10 = ((((((arr_1 [i_0 - 3]) - (arr_5 [i_1] [i_1 - 2] [i_1 - 2] [i_1 + 1])))) ? (((arr_5 [i_1] [i_1 - 2] [i_1 - 2] [i_1 + 1]) ? -888360207 : -7903206904346199156)) : (min((arr_5 [i_1] [i_1 - 2] [i_1 - 2] [i_1 + 1]), (arr_1 [i_0 - 3])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_11 = max(((var_8 ? (((-28 ? 1 : -993156035))) : 16791490041247921246)), (!var_1));
                                var_12 = 993156035;
                                var_13 = (arr_1 [i_0 + 1]);
                                var_14 = (max(var_14, 993156034));
                            }
                        }
                    }
                    var_15 = ((((((((var_9 ? var_9 : var_7))) ? (arr_0 [i_0 - 4] [i_0 + 1]) : 0))) / -4251218590664219633));
                }
            }
        }
    }
    var_16 = var_9;
    #pragma endscop
}
