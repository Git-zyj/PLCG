/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = var_3;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] = (((((-(arr_10 [i_4] [i_4 + 2] [i_4] [i_4] [i_4 - 1] [i_4])))) || (6668247774304330774 * 6668247774304330776)));
                                arr_14 [i_1] = (max(((((((var_4 || (arr_10 [i_0] [i_1] [i_1] [i_1] [i_3] [16])))) <= ((((arr_1 [i_2]) <= (arr_4 [i_2] [i_3]))))))), (((arr_3 [i_4] [i_1] [i_4 - 1]) / (arr_3 [i_4 - 1] [i_1] [i_4 + 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = min(-12, ((max((var_10 - var_0), ((var_3 ? var_1 : var_4))))));
    #pragma endscop
}
