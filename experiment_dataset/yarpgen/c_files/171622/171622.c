/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_9));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (arr_6 [20] [20] [3] [20])));
                    arr_8 [i_0] [20] [i_2] = arr_0 [i_0];
                }
            }
        }
    }
    #pragma endscop
}
