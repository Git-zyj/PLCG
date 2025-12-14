/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = ((116890260 ? -116890245 : ((9223372036854775806 ? (arr_3 [i_0 - 1] [i_1 + 1] [i_1 - 2]) : (arr_2 [i_0 - 2] [i_1] [i_0])))));
                var_19 &= ((((((var_12 ? 30 : var_14))) ? (41 != 1625238349410291243) : (arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1]))));

                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    var_20 = var_9;
                    var_21 = (max((-1519646754 % 1), (max((arr_5 [i_0 + 2] [i_1] [i_1 + 2] [i_2 + 1]), -1625238349410291243))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_22 = 89;
                                var_23 = (((max(191806036, ((((arr_9 [i_0] [i_2] [i_3] [i_0]) || (arr_1 [i_0]))))))) ? ((-3179176123463193581 ? 29558 : ((1 ? -116890231 : (arr_9 [i_0] [i_0] [i_0 + 3] [i_0]))))) : (((((max(325431146, 1008))) & 1625238349410291243))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (((!((max(226, var_2))))) ? (((var_0 ? ((226 ? 54 : 1625238349410291215)) : (((162 ? var_17 : 1)))))) : var_2);
    var_25 = 35851;

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_26 = ((!(-32767 - 1)));
        var_27 = (arr_5 [i_5] [i_5] [i_5] [i_5]);
    }
    #pragma endscop
}
