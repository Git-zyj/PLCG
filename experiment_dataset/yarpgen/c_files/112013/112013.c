/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((2702 ? -375734864 : var_6)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = ((-((min(var_8, var_8)))));
                    var_15 = (arr_6 [i_0] [i_0] [i_2] [i_0]);
                }
            }
        }
    }
    var_16 = (~-47006);
    #pragma endscop
}
