/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 += var_11;
                var_16 = ((~(!24842)));
                var_17 = var_12;
                arr_4 [i_0] = (arr_2 [i_0] [16]);
                var_18 = (arr_0 [i_0]);
            }
        }
    }
    var_19 *= ((-((min(32767, ((min(1, 1))))))));
    #pragma endscop
}
