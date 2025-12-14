/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((+(min((((arr_1 [i_0]) ? 37444 : 2337204093164944673)), 2337204093164944673))));
                var_16 = ((~(((var_0 - var_13) ? var_14 : (!2337204093164944673)))));
                arr_6 [i_0] = (min(var_5, (max(2337204093164944673, -2337204093164944691))));
                arr_7 [i_0] = var_10;
            }
        }
    }
    var_17 = ((var_12 ? var_9 : var_2));
    #pragma endscop
}
