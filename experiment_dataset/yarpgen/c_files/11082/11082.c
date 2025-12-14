/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_9);
    var_14 = (min(var_14, var_7));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (((+((((109 || 125) && (!-139154589578510104)))))))));
                arr_6 [i_1] [i_1] = (arr_1 [2] [i_1]);
                arr_7 [i_0] [i_1] [i_1] = -23269;
                var_16 -= 1;
            }
        }
    }
    var_17 = ((1 ? 33 : 1));
    #pragma endscop
}
