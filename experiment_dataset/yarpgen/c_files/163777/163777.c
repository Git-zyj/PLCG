/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_0 == (((208 == 111) ? ((var_5 ? var_17 : 182)) : var_14))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 ^= (arr_0 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [15] [15] [i_2] [2] [2] [i_1] [i_2] = 3959606944862512766;
                                var_21 = ((((var_6 ? var_15 : 424066254))) ? (((arr_10 [i_4 + 2] [14] [i_4] [1] [23] [i_3]) ? var_14 : var_1)) : (((var_11 ? 424066249 : -424066251))));
                                arr_14 [i_0] [i_1 - 1] [i_1] [i_3] [i_2] = max(5308304998274813644, (arr_6 [i_1 + 1]));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
