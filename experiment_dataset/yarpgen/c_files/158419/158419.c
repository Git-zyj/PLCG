/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((~((min(-48, 89)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = (min(var_11, 12));
                var_12 = (max(var_12, 1));
                arr_5 [i_0] [i_0] [i_0] = 9251413348580206128;
                var_13 = (!-13);
            }
        }
    }
    #pragma endscop
}
