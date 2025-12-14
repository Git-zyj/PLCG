/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_9));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = var_11;
                    arr_10 [i_2] = 8388608;
                }
            }
        }
    }
    var_19 = 0;
    var_20 = (max(var_13, 0));
    #pragma endscop
}
