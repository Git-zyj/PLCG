/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = 10111929865705410135;
                var_19 = (arr_0 [i_0]);
            }
        }
    }
    var_20 = (!-1);
    #pragma endscop
}
