/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~((16267 ? 22 : 233)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = (((((var_4 & (((max(var_9, var_13))))))) ? (((max((arr_7 [i_0] [i_0] [16]), (arr_7 [i_0] [i_1] [i_2 + 1]))))) : ((49259 ? 2698928502 : 49259))));
                    var_17 = (min(var_17, (((-(-7026722238422200167 >= 112))))));
                }
            }
        }
    }
    var_18 -= ((20 ? 22 : 8315));
    #pragma endscop
}
