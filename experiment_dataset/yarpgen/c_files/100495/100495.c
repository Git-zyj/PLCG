/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((1079787056 < var_7), 6161108301372568995));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = 2474871627;
                arr_5 [i_0] [i_0] = (((max((~934053185), 3046658950)) >= (((-127 - 1) ? 274749947 : 198))));
                var_14 = (max(128, 1));
            }
        }
    }
    #pragma endscop
}
