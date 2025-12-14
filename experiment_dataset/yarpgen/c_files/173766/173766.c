/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((var_5 ? ((((min(var_9, var_5))) ? (min(var_14, var_8)) : (arr_4 [i_0]))) : ((max(719010328, 67108863)))));
                var_16 = (var_10 % -var_5);
            }
        }
    }
    #pragma endscop
}
