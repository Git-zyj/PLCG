/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_7 ? (var_5 * -var_5) : var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_3] [i_0] = (max(((((var_0 - var_5) > (max(-1, 2134781269))))), ((1972925326 ? (-127 - 1) : 8645150215583626223))));
                                arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] = ((min(var_3, (arr_3 [i_1]))) < (arr_3 [i_3]));
                                var_12 = ((-((var_5 * (max(var_7, var_5))))));
                            }
                        }
                    }
                }
                var_13 = (((max((!var_8), (max((arr_4 [i_0] [i_1]), var_7))))) ? ((max(-16027, 0))) : (var_1 && var_7));
            }
        }
    }
    #pragma endscop
}
