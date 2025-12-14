/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((!(65535 / var_4))) ? (((((14336 ? 5426983995699425246 : 3)) != ((var_8 >> (65525 - 65511)))))) : (arr_0 [i_0] [i_0])));
                var_12 ^= ((!(((((10 ? -1 : 4088))) || (!var_5)))));
            }
        }
    }
    var_13 = ((min(var_5, var_4)));
    #pragma endscop
}
