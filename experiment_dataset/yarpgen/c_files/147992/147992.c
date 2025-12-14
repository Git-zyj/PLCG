/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = (!89);
                var_20 = ((~(~89)));
                var_21 -= ((-(!4178)));
            }
        }
    }
    var_22 += var_17;
    var_23 = var_5;
    #pragma endscop
}
