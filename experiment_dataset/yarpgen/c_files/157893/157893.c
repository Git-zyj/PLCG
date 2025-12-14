/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (~var_6);
                var_15 = (max(var_15, (((-((var_6 - (-127 - 1))))))));
                var_16 &= (min((min((((~(arr_0 [10])))), ((~(arr_2 [i_1]))))), ((((((~117) + 2147483647)) >> (((arr_4 [i_1] [i_0] [i_0 - 1]) + 17)))))));
            }
        }
    }
    var_17 -= ((var_12 ? ((min((125 % 56646), var_13))) : ((~(3372357245257863323 + var_7)))));
    #pragma endscop
}
