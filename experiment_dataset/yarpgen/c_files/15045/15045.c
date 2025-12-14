/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, 16));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] = (min(((112 ? var_15 : (arr_5 [i_0]))), (((var_15 || (arr_5 [i_0]))))));
                                var_21 = (((((~((112 ? var_2 : (arr_9 [i_0] [i_0] [4] [i_0])))))) && ((((~112) | (!var_8))))));
                            }
                        }
                    }
                    arr_16 [21] [i_0] [i_0] = (arr_0 [i_0] [i_0]);
                    var_22 = (max(var_22, (((max((arr_11 [i_1] [i_1 - 2] [i_1 + 2] [i_1] [i_1] [i_1 + 3]), var_4)) | (((var_6 ? (arr_11 [i_1] [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 3]) : (arr_11 [i_1] [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 3]))))))));
                }
            }
        }
    }
    var_23 = (max(var_23, var_16));
    #pragma endscop
}
