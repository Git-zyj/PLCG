/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (9223372036854775807 || 0);
    var_16 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = var_13;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = (min(15698, (var_10 / var_8)));
                                arr_18 [i_0] [i_1] [i_1] [i_3] [i_1] [i_3] [i_4] = 0;
                                arr_19 [i_1] [i_1] [5] [5] [11] [i_1] = (((((-(var_3 > var_1)))) % (min((var_3 % 45134), var_6))));
                                var_18 = (max(var_18, 38203));
                            }
                        }
                    }
                    arr_20 [16] [i_1] = var_1;
                }
            }
        }
    }
    #pragma endscop
}
