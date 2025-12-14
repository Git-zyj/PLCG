/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_1, ((~((0 ? 0 : var_10))))));
    var_18 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = var_0;
                    var_20 = (min(var_20, (arr_7 [i_0] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, 9223372036854775807));
                                arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1] [1] [i_0] [1] = (max((!var_13), (arr_10 [1] [i_1 - 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(var_22, ((min(-512, (max((1 | var_7), var_7)))))));
    #pragma endscop
}
