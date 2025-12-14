/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_12 -= (((max((arr_7 [i_4 - 1] [i_4 - 1] [i_1 - 2] [12] [i_4]), (arr_7 [i_4 - 3] [i_1] [i_1 - 2] [i_1] [i_1]))) == 1));
                                var_13 = (((~((~(arr_3 [i_0] [12]))))));
                            }
                        }
                    }
                    var_14 = (~var_9);
                }
            }
        }
    }
    var_15 = ((((~(var_3 | 1))) > 1));
    var_16 = var_5;
    #pragma endscop
}
