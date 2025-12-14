/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_3 + 4] [i_2] [i_1] [i_0] = 16503;
                                arr_12 [i_0] [3] [i_1] [i_2] [i_0] [i_0] [i_4] = ((var_5 ? ((((!((((arr_6 [i_0]) ? var_7 : 3723593047))))))) : (((((arr_4 [i_0] [i_0]) <= (arr_0 [i_1] [i_3 - 2]))) ? ((var_10 ? (arr_3 [i_2]) : (arr_7 [i_0 - 1] [i_1] [i_0] [i_0]))) : 1))));
                                var_20 = var_17;
                            }
                        }
                    }
                    var_21 = (max(var_21, 1534109866));
                    arr_13 [i_0] [i_0] = ((((arr_8 [i_1 + 2] [i_1 + 1] [i_0 - 1] [i_0 - 1] [6] [i_0 - 1]) ? (arr_8 [8] [i_1 - 1] [i_0 - 1] [i_0] [8] [i_0 - 1]) : 32767)));
                    var_22 = (min(var_22, (((((((arr_4 [i_0 - 1] [i_0 - 1]) ? (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0]) : (arr_4 [i_0 - 1] [i_0 - 1])))) ? ((((((1534109860 ? (arr_0 [i_1] [i_1]) : 1715171673))) || (((var_4 ? 1934063687 : (arr_10 [i_0] [8] [i_2]))))))) : ((49034 / (var_3 - var_14))))))));
                }
            }
        }
    }
    var_23 = ((((((198 & -1837161565) ? ((var_1 ? var_3 : 2760857433)) : ((var_3 ? -94 : 665121202))))) ? var_3 : (var_15 <= -239)));
    #pragma endscop
}
