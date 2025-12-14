/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((max(233, (min(0, 0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (max(24, ((5634881840538676774 << (-24 + 74)))));
                    arr_9 [i_0] [i_1] [i_0] = (max((((((max(8, 233))) && 233))), 0));
                    var_21 = ((1 && (~-207)));
                }
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}
