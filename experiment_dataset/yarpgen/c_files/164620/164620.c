/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1 + 1] = ((-((min((1 == var_9), 222)))));
                arr_6 [16] = (((-(~var_4))));
            }
        }
    }
    var_11 = ((max((50 ^ 8284882387771353108), (!var_8))));
    #pragma endscop
}
