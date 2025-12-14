/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                var_17 = -0;
                var_18 = 72057594037927935;
                var_19 = ((~(((!(~182))))));
            }
        }
    }
    var_20 = 255;
    #pragma endscop
}
