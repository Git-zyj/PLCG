/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_9;
    var_21 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_22 = (min(60024, -5076587332800853709));
                arr_8 [i_0] [14] = ((min((arr_1 [i_0]), (!-1139632758))));
            }
        }
    }
    #pragma endscop
}
