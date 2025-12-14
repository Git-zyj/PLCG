/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 -= var_2;
                    var_13 = (min(var_13, (((!(~var_3))))));
                }
            }
        }
    }
    var_14 = var_0;
    #pragma endscop
}
