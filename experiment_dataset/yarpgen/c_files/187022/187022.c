/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((~0) ^ ((var_13 ? (!var_13) : var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_15 = ((~(((((var_11 ? var_1 : var_6))) ^ (max(var_10, (arr_1 [i_0])))))));
                            arr_9 [i_0] [i_1 - 1] [i_2] = (((((arr_2 [i_1 - 3] [i_1 + 1] [i_1 + 1]) ? -4096 : var_7)) ^ (!var_12)));
                        }
                    }
                }
                var_16 = (max(var_16, (arr_2 [i_0] [i_1] [i_1 + 1])));
            }
        }
    }
    #pragma endscop
}
