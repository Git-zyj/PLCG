/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((39 ? 21877 : 2669008121));
    var_21 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_22 = ((+(((0 + -3) / var_16))));
                var_23 = (min(var_23, (36028247263150080 * -3)));
                arr_4 [i_1] = 14848;
            }
        }
    }
    var_24 = ((max(var_3, -var_9)) ^ var_17);
    #pragma endscop
}
