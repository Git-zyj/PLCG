/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_9));
    var_12 = 1;
    var_13 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_0] [i_4] = ((177 ? 1 : 4294967292));
                                var_14 = ((var_6 | 3111630299) >> (5806 - 5776));
                            }
                        }
                    }
                    var_15 = ((~(((arr_6 [i_0] [i_0] [i_2]) ? (arr_11 [i_0] [i_1] [i_2] [i_0]) : var_8))));
                }
            }
        }
    }
    #pragma endscop
}
