/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    var_17 *= (min((max(var_6, (arr_3 [i_0 + 2]))), (((var_10 < (arr_2 [i_0 - 1]))))));
                    arr_7 [i_0] [4] [i_2] = (((~6327579247712505231) ? 3936010348 : ((~(((arr_0 [i_0]) / var_15))))));
                }
                var_18 = (min(var_13, (((var_13 || (!-5166545284335208998))))));
                var_19 = ((var_3 / (max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2])))));
                var_20 = (min(var_20, (((((((((var_1 ? (arr_6 [i_0] [i_0]) : var_16))) ? var_10 : (((arr_3 [i_0]) ? var_11 : 839420207))))) || (((-((var_13 ? 1 : var_2))))))))));
            }
        }
    }
    var_21 = var_1;
    #pragma endscop
}
