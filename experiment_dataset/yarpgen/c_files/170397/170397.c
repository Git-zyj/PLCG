/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_1 ? var_7 : (var_4 || 0))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0 - 2] [i_1 + 1] [i_1 + 3] = max(((-(~var_3))), (((18446744073709551615 ? var_11 : (!41702)))));
                arr_7 [i_0 - 1] [i_1 + 2] = (288230376151711743 ? (~255) : (37185 ^ 2341048685746118865));
            }
        }
    }
    var_14 *= ((!1023) ? ((((((min(-127, var_9))) || var_10)))) : ((8716926028479176723 ? 51499 : 2701044759)));
    var_15 = ((((((var_3 & 77) & var_3))) ? var_10 : (((var_7 ? var_3 : 18446744073709551615)))));
    #pragma endscop
}
