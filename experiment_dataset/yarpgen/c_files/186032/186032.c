/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = var_9;
                    arr_8 [i_2] = (var_14 ? ((var_9 ? var_6 : 871589123)) : ((((arr_5 [i_0 - 1] [i_0 + 3]) ? (arr_0 [i_1] [i_0]) : 871589123))));
                }
            }
        }
    }
    var_17 = var_11;
    #pragma endscop
}
