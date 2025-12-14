/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((min(var_17, -18483)), ((max((18474 && var_2), (!-18483))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_19 = (((var_15 ? 63 : (arr_2 [i_2 + 1]))));
                    arr_10 [i_0] [i_1] [i_0] = var_3;
                    arr_11 [i_0] [i_1] [i_1] [i_0] = (min(var_14, ((var_17 ? (arr_7 [i_0] [i_1] [i_0] [10]) : ((max(var_2, var_6)))))));
                }
            }
        }
    }
    var_20 = var_7;
    #pragma endscop
}
