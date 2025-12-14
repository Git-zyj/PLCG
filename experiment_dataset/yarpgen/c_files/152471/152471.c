/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] = arr_2 [i_1 - 2] [i_1 + 1];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_9 [i_1 - 1] [i_1] = (max(((max((arr_0 [i_1 - 1]), (arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1])))), (((((min(13892, -20807)))) / var_4))));
                            var_15 |= var_4;
                        }
                    }
                }
                var_16 = (min(var_16, 109));
            }
        }
    }
    var_17 = ((((((var_14 ? 63 : var_3)) ? (min(var_5, 3072)) : -16))));
    #pragma endscop
}
