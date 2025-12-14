/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = ((min((min(var_4, var_9), (992 < var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = -8;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] = ((((((((((arr_1 [i_0] [i_0]) | (arr_8 [i_0] [i_0] [i_0]))) + 9223372036854775807)) << (((var_8 | var_9) - 1132770287))))) ? (arr_10 [i_3] [i_3 - 3] [i_3] [i_3]) : ((var_7 & (arr_10 [1] [1] [i_2] [i_3])))));
                                arr_16 [i_0] = (((8 % 8587465192501335451) && (!-1598063448)));
                            }
                        }
                    }
                    arr_17 [1] [i_1] [i_1] = ((-(((arr_12 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1]) ? (arr_4 [i_1 + 1] [i_1 - 1]) : var_5))));

                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_1] [i_1] [i_5] = arr_8 [i_1] [i_2] [i_2];
                        var_14 = (min(var_14, (arr_9 [i_2] [i_5 - 2] [2] [i_5 - 2] [i_5] [i_5 + 1])));
                    }
                }
            }
        }
    }
    var_15 = var_6;
    #pragma endscop
}
