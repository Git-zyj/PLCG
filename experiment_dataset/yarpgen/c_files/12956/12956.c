/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_9 >> ((((~var_4) || (((var_4 ? var_9 : 126)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [0] [i_4] = ((!(~139)));
                                arr_15 [i_0] [i_1] [i_2] [i_4] = 6162819536881479921;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_21 [13] [i_1] [i_5] [i_5] [i_6 - 1] = ((((((min(1, 15127344395444042488)) / (148 * 15342193087163845933)))) ? (((3331141145382101549 ? 0 : 120))) : (768 && 135)));
                                arr_22 [i_5] [i_5] [1] [i_5] [i_5] [i_5] [i_5] = var_10;
                            }
                        }
                    }
                    arr_23 [i_0] [i_0] [i_0] [i_0] = (((~1) ? ((0 ? 1142808163 : 2147483647)) : 14));
                }
            }
        }
    }
    #pragma endscop
}
