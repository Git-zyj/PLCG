/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (~var_1);
    var_11 -= (max(((max((~63), ((min(var_3, var_0)))))), (max(var_1, ((min(var_9, 65514)))))));
    var_12 = (max(var_5, (((!(((-1333761971150397778 ? -1333761971150397767 : var_3))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (~-var_5);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [6] [i_0] [i_0] [i_0] [i_0] [0] = ((((min(var_0, (arr_14 [i_4 - 3] [i_4 + 2] [21] [i_4 + 2] [i_4 - 1])))) && (arr_14 [i_4 + 2] [i_4 - 1] [i_4] [i_4 + 2] [i_4 - 3])));
                                var_13 = var_1;
                                var_14 = (min(var_14, ((min((~-1333761971150397757), (var_1 & -1333761971150397764))))));
                                var_15 = (min(var_15, (+-1333761971150397777)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
