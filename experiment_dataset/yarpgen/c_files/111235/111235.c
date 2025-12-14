/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 *= (max(-8885902014338719332, -2406736678306887164));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0 - 1] [i_1] [i_2] [i_3] [i_3] [i_4] = var_10;
                                arr_14 [i_4] [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] = ((-(((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = ((-((((min(421919109041177228, 22988))) ? (min(421919109041177220, 17179869183)) : ((1 ? 18024824964668374407 : 421919109041177232))))));
    #pragma endscop
}
