/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 2233;
    var_18 ^= (((min((!19838), 19838)) <= var_13));
    var_19 = (min(((~(~-19861))), var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [4] &= (((19838 >> (((arr_0 [i_0] [i_1]) + 103)))));
                var_20 ^= (19838 != var_11);
            }
        }
    }
    #pragma endscop
}
