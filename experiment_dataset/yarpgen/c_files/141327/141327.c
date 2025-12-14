/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 += ((((((11090 ? 1 : var_11)))) - (((18250 || (arr_6 [i_0] [i_1]))))));
                    arr_10 [i_0] [i_0] = (((((32768 ? 1 : 2121))) ? 1 : ((-((var_9 ? var_8 : var_0))))));
                }
            }
        }
    }
    var_19 = 6189;
    #pragma endscop
}
