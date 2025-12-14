/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = -615230424766394300;
                arr_7 [i_0] [2] [i_0] = arr_2 [2] [4];
                var_21 = 6;
            }
        }
    }
    #pragma endscop
}
