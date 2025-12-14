/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 0;
    var_15 = (min(var_15, var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = ((((((arr_6 [i_2 + 1] [i_1 - 1] [i_1 + 2]) / var_3))) ? ((~(arr_4 [i_2 + 1]))) : -var_4));
                    var_17 = var_11;
                }
            }
        }
    }
    var_18 = (min(var_18, (((!(!var_6))))));
    #pragma endscop
}
