/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, 113724672));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (((arr_5 [i_1 + 1] [i_1 - 2] [i_1 + 1]) != ((-((1 ? 1504293355 : 113724657))))));
                var_15 = (8989018099309894680 > 1686128078);
                arr_6 [1] = -113724672;
            }
        }
    }
    var_16 = 1504293355;
    #pragma endscop
}
