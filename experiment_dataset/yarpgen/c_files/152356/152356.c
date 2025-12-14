/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (arr_4 [i_1] [i_0]);
                var_20 = 2084709632;
            }
        }
    }
    var_21 &= var_13;
    var_22 = (min((min((!var_9), (var_12 | -2084709633))), var_2));
    var_23 = (min((((!((min(2, 4294967295)))))), var_12));
    #pragma endscop
}
