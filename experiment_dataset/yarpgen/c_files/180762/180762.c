/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] = (min((((((1690436564 ? (arr_7 [i_1]) : 31612))) || ((202 || (arr_12 [15] [i_3] [15] [6] [i_0] [i_0]))))), (20246 && -20574)));
                                arr_15 [i_0] [i_0] = (((((((1683184409 ? (arr_5 [i_3] [i_3]) : (arr_0 [i_1 + 2] [i_0])))) || (31624 / 31624))) ? ((min(((min(31611, (arr_1 [i_0])))), (arr_6 [i_0])))) : (((arr_3 [4] [i_3] [i_0]) ? ((min(208, (arr_5 [i_0] [i_4])))) : ((20566 ? 149 : (arr_6 [i_0])))))));
                                var_15 += ((202 ? 26791 : 727147200));
                                var_16 = (max((((((151 * (arr_10 [i_0] [i_1 - 1] [i_2] [i_3] [i_0] [i_4 - 1])))) ? 7583 : -3157)), (-31630 < 167)));
                            }
                        }
                    }
                    var_17 = 1660205585;
                    var_18 = (((1084865091 != 130) - (((arr_5 [i_2] [i_1 + 2]) ? (arr_8 [i_0] [i_0] [i_1 + 1]) : (arr_8 [i_0] [i_2] [i_1 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
