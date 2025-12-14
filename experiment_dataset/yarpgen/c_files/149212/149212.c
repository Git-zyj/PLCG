/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((min(var_1, var_7))) ? (((0 ? 214 : ((10931014172516375362 ? 56 : 1))))) : var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [15] = ((1 ? 1 : 56));
                    arr_9 [i_0] [9] = 27341;
                }
            }
        }
    }
    var_15 = ((1 ? ((var_4 ? 127 : var_0)) : (((470350782270890212 <= -18) ? var_7 : 15))));
    var_16 = (!-119);
    #pragma endscop
}
