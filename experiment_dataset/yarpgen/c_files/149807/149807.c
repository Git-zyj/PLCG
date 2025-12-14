/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_7 ? var_6 : ((var_6 ? var_10 : ((var_1 ? var_7 : var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 -= (min((((~(arr_3 [i_2])))), (max(((min(0, var_6))), ((var_0 ? 7085335091143352503 : var_4))))));
                    var_18 = max(277811899, (min((max(var_14, var_15)), 8228725763920648994)));
                    var_19 = (-20126 - 645366362);
                    var_20 ^= ((2147483647 ? 42504 : 16202648569037959297));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4] &= ((-(((arr_2 [i_0]) ^ (arr_9 [i_0] [i_0] [i_2] [16])))));
                                arr_14 [18] [i_1] [i_2] [i_2] [i_3] [i_4] [i_4 + 1] = (min(-77, ((((((arr_6 [i_4] [i_3]) * var_9))) ? 2 : (arr_0 [i_4 + 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_15, var_13));
    #pragma endscop
}
