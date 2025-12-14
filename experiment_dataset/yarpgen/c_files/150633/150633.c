/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((~(max(var_3, var_3)))), (~var_10)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_14 = ((arr_5 [i_2] [i_0]) ? 13602491699962003442 : var_4);
                    arr_9 [i_0] [10] [i_2] [i_2] = ((-var_1 ? ((min((~var_12), (arr_2 [i_1])))) : (max(var_1, (((arr_1 [7]) ? var_5 : var_8))))));
                    var_15 = ((((arr_0 [i_0 - 1]) != (arr_0 [i_0 - 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_1] [5] [21] [i_4] [i_2] = (min(((var_7 | (arr_7 [i_1] [i_1] [i_1]))), 1));
                                arr_15 [i_0 + 1] [i_1] [i_2] = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
