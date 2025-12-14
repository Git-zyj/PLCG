/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    var_20 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = (((min(((~(arr_3 [i_0] [i_0] [i_0]))), ((min(46288, var_17))))) & ((~(~-7832431175464642039)))));
                var_22 -= (max((arr_2 [i_1]), 0));
                var_23 = ((!((min((max(25191, var_3)), (!1269614338))))));
            }
        }
    }
    #pragma endscop
}
