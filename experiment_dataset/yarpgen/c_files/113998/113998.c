/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = 10;
                var_20 -= var_16;
            }
        }
    }
    var_21 = (((((var_7 - -6873893783900009161) || var_15)) ? var_3 : ((min(-8939841197290765672, (((0 ? 16380 : 2658942880))))))));
    #pragma endscop
}
