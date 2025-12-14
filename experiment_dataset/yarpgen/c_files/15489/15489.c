/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (((((arr_2 [i_0]) ? var_13 : (arr_2 [i_0]))) << (((((arr_1 [i_0 + 2]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 2]))) - 13717991599582659092))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] [i_0] = ((((((((arr_7 [i_0] [i_0 - 2] [i_0 - 2]) & var_14))) ? -172 : ((var_13 ? var_16 : (arr_2 [i_0]))))) * ((((((((arr_11 [i_0 - 1] [i_0]) ? 192 : -33))) > ((var_2 ? (arr_1 [i_0]) : (arr_4 [i_3])))))))));
                            var_20 &= max((((((117 >> (112308340228545735 - 112308340228545723))) ^ (~252)))), var_7);
                        }
                    }
                }
            }
        }
    }
    var_21 = (max(var_21, ((((((max(var_16, var_15)))) && ((min(var_1, ((var_10 ? var_10 : var_13))))))))));
    var_22 |= var_8;
    var_23 = var_2;
    #pragma endscop
}
