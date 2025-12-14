/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_13 -= var_10;
                arr_5 [i_0] [i_0 - 3] [i_1] = max((((arr_3 [i_0 - 1] [i_1] [i_1 - 1]) * var_1)), (max(((var_6 ? 1380327192 : var_4)), var_7)));
                arr_6 [i_1] [i_1] = (min(((max((arr_0 [i_1 + 1]), (arr_2 [i_1 - 1])))), (max(var_8, 2914640106))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_14 = (max((((var_9 ? var_12 : var_9))), ((var_11 ? (255 & 2914640104) : -5583895312646159721))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_18 [i_2] [19] [i_2] [i_2] [24] [1] = (max(((var_9 ^ (arr_11 [i_2] [i_3] [i_4]))), ((min(var_2, (arr_11 [i_2] [i_2] [i_2]))))));
                            arr_19 [i_2] [3] = (((max(0, var_6)) * var_7));
                        }
                    }
                }
                arr_20 [i_2] [i_2] [i_3] = -5583895312646159721;
            }
        }
    }
    var_15 -= (!var_3);
    #pragma endscop
}
