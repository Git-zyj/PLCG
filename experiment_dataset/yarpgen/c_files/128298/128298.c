/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_0));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_2] = (((max((((arr_2 [i_0] [i_0]) ? var_7 : 1)), (!0))) <= ((min(var_1, (arr_6 [i_2 + 2] [i_2] [i_2 + 3]))))));
                    var_18 = (min(var_18, 1));
                }
            }
        }
    }
    #pragma endscop
}
