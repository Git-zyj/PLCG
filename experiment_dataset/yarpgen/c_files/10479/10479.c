/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(!-var_2)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 |= max((((((64 ? var_2 : var_7))) | (arr_2 [i_0 + 1] [i_1]))), ((((min((arr_3 [i_0] [i_1] [i_1]), var_7)) << (((min(var_1, (arr_2 [i_0] [i_0 + 1]))) - 1619702577333254704))))));
                var_21 = var_6;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [1] [5] = (((((~127) / (min(var_10, (arr_5 [i_3] [5] [i_1] [i_0]))))) + ((((arr_1 [i_3] [i_0]) > var_8)))));
                            arr_11 [i_0] [1] [i_0] [i_3] &= ((-((min((arr_5 [i_0 + 1] [i_0 - 3] [i_1] [i_0 - 3]), (arr_5 [i_0 - 3] [i_0 - 3] [i_1] [i_1]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
