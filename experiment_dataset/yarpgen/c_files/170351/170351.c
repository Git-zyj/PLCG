/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (min(((max(1, 1))), 17));
                    var_18 = (((246 ? 157 : 1)));
                }
            }
        }
    }
    var_19 = var_9;
    var_20 ^= (min(var_12, ((max(var_9, 2210251688)))));
    #pragma endscop
}
