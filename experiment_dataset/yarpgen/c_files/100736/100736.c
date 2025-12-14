/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((var_9 ? -23805 : (var_2 | var_5))))));
    var_20 += var_11;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 -= (((arr_8 [i_0] [i_1] [i_4 + 3] [i_3] [i_4 - 1]) > (arr_11 [i_3 - 1] [i_3] [i_3] [i_3 + 1] [i_3])));
                                var_22 = (max(var_22, (arr_10 [i_0] [14] [i_0] [i_0] [4])));
                                arr_13 [i_1] [1] [i_2 - 1] [i_2 + 2] [1] [i_2 - 1] [1] = ((+(((arr_7 [i_0 + 3] [i_0 + 1] [i_0 + 1] [i_0 + 3]) ? var_11 : (arr_7 [i_0] [i_0 + 1] [i_0] [i_0 + 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_23 ^= (max((max((!3272778472658529700), (-29115 < -29115))), (((arr_15 [8] [i_1] [i_2 - 1] [i_5]) == 0))));
                                var_24 = ((arr_6 [i_5 - 1] [i_5 - 1] [i_6 + 2] [i_2 - 1]) ? (((arr_6 [i_5 - 1] [i_0 + 3] [i_6 + 2] [i_2 - 1]) ? (arr_15 [i_5 - 1] [i_1] [i_6 + 2] [i_2 - 1]) : (arr_15 [i_5 - 1] [i_1] [i_6 + 2] [i_2 - 1]))) : (arr_6 [i_5 - 1] [i_5 - 1] [i_6 + 2] [i_2 - 1]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 &= (((((18049448560123209442 / 1611634672) ? -23800 : 104274882))) == (((var_11 & var_8) & (((23805 ? var_17 : var_6))))));
    var_26 = (~var_1);
    #pragma endscop
}
