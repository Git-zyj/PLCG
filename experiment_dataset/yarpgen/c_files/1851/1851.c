/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min(var_11, var_3))));
    var_18 = (max(var_18, (((max(((max(var_11, var_15))), -1883764684435365989))))));
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 = (max((((((~(arr_9 [i_0] [i_1] [i_1] [i_3])))) ^ (arr_10 [i_0 - 2] [16] [i_0] [i_0] [i_0] [20]))), 16562979389274185640));
                            var_21 = 1;
                        }
                    }
                }
                var_22 = (max(var_22, (((var_3 + (((!(arr_11 [i_0 - 1] [i_0 - 2] [i_0 + 1])))))))));
                var_23 += ((!((((1 == 1) ? (0 & 111) : (~4294967295))))));
            }
        }
    }
    #pragma endscop
}
