/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_7;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = (0 * 0);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_0 - 3] [i_1] [i_2] [i_2] [i_3] [i_4 - 2] = (var_8 / var_2);
                                var_13 = var_5;
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_4] [i_1] = (min((arr_8 [i_1] [i_2] [i_3]), ((1 ? (var_10 + var_6) : var_10))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (min(0, 0));
    var_15 = (((min(((min(0, var_4))), var_6)) | var_7));
    #pragma endscop
}
