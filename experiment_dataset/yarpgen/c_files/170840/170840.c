/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_4] = (arr_4 [i_0] [i_2] [i_4]);
                                arr_14 [i_0] [i_1] [i_2] [i_3] = 1843275731;
                                var_14 -= ((-116 ? 6743481103103648486 : (((((max((arr_0 [i_0] [i_0]), 162))) ? (((arr_10 [i_0] [i_1] [i_4] [i_3] [i_4]) << (69 - 63))) : (((arr_1 [i_0] [i_2]) ? var_12 : var_0)))))));
                                arr_15 [i_4] [i_2] [i_2] [i_0] = (((max((0 * 0), (43195 % 40))) > (((255 ? ((min(21629, -22712))) : ((22712 ? 4740 : -4741)))))));
                            }
                        }
                    }
                    var_15 = (arr_8 [i_2] [i_1] [i_1] [i_2]);
                }
            }
        }
    }
    var_16 = ((((max(var_4, -46))) > (65535 % -1109495195192317994)));
    var_17 = var_0;
    #pragma endscop
}
