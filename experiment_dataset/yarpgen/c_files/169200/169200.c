/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = 16431547170856525154;
                    var_17 = (min(var_17, (((max((((arr_0 [i_2 - 1]) || 1)), (!var_10)))))));
                }
            }
        }
    }
    var_18 = var_0;
    #pragma endscop
}
