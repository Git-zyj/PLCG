/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_18 += (arr_3 [i_0] [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_2] [1] [i_3] [i_4] [i_1] = (i_2 % 2 == 0) ? ((((arr_6 [i_4] [i_1 + 2] [i_1 + 3]) << ((((min((arr_13 [i_2] [13]), var_10))) - 5526282433632387659))))) : ((((arr_6 [i_4] [i_1 + 2] [i_1 + 3]) << ((((((min((arr_13 [i_2] [13]), var_10))) - 5526282433632387659)) - 2108724231091220467)))));
                                var_19 = (arr_12 [i_0] [i_2] [i_2] [i_3] [i_4]);
                                var_20 = (max((arr_5 [i_2 + 1] [i_1 + 3] [i_1 - 1]), (arr_5 [i_2 + 1] [i_1 + 3] [i_1 - 1])));
                                var_21 = ((~((-1929480423661991637 ? 19502 : -991916372))));
                            }
                        }
                    }
                }
                var_22 = var_12;
                var_23 = (939524096 & 46038);
            }
        }
    }
    var_24 = (min(var_24, (-697175101744490699 < 63)));
    #pragma endscop
}
