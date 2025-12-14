/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (((min((~var_4), (var_2 | var_1))) | (max(var_4, (max(var_6, var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 += (((arr_12 [i_1] [i_2] [i_3] [i_1]) ? ((((var_8 ? var_3 : var_1)))) : (((arr_8 [i_2]) | (arr_8 [i_0 - 1])))));
                                var_12 = ((+(max((((arr_6 [1] [i_3]) ? (arr_8 [i_4]) : (arr_10 [i_4] [i_3] [i_0] [i_0]))), var_8))));
                            }
                        }
                    }
                    arr_13 [1] [i_1] = ((var_9 << (((!var_5) ? ((var_6 - (arr_5 [i_2]))) : var_8))));
                }
            }
        }
    }
    var_13 = ((~(((~var_1) | ((var_7 ? var_7 : var_0))))));
    #pragma endscop
}
