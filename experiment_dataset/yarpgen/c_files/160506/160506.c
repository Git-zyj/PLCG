/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_0));
    var_13 = ((-var_4 ? var_1 : 1));
    var_14 ^= ((((max((~var_5), -var_8))) ? var_10 : (max(var_2, (max(var_9, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((max((((arr_0 [i_0] [4]) ? 3904031567 : var_10)), ((((arr_2 [i_1]) ? 1 : 96))))) / (((max((arr_3 [i_1 - 2] [i_1 + 1] [i_1 - 1]), var_4))))));
                var_15 = ((1 ? ((15393716329348375756 ? 3904031566 : 5713367335805083984)) : ((((arr_1 [i_0] [i_1 + 1]) ? 390935751 : (arr_1 [i_0] [i_1 + 1]))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 -= -5507105521587350407;
                                arr_14 [i_2] [i_4] [i_2] [i_3] [i_4 - 1] = var_5;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_17 = 1390844130;
                                arr_20 [i_6] [i_1 - 2] [i_0] &= ((!(arr_18 [i_0] [i_0] [i_0] [i_0])));
                                arr_21 [i_0] [i_0] [i_0] [i_2] |= (arr_16 [i_2] [i_2] [i_2] [i_2] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
