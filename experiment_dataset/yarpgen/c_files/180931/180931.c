/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, 65535));
    var_14 *= (min(var_0, ((((~-26700) != 240125426)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] = -var_0;
                var_15 = ((var_9 ? var_7 : ((min((~var_5), -var_3)))));
            }
        }
    }
    #pragma endscop
}
