/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_6));
    var_11 = (min(var_11, (((var_2 ? (0 != var_9) : var_5)))));
    var_12 = ((((((1 ? 0 : 1)) > (var_9 != 1))) ? -var_0 : var_0));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = ((32767 ? 3047804094850762052 : 1));
                    var_14 = (!3047804094850762052);
                }
            }
        }
    }
    #pragma endscop
}
