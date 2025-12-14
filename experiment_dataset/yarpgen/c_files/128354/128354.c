/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((61 ? 6 : 65529));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = ((65535 ? 65516 : 46507));
                var_15 = (max(var_15, var_9));
                var_16 = ((((((arr_1 [i_1]) ? (arr_1 [7]) : var_5))) ? ((3975567788 ? -85 : 9)) : var_11));
            }
        }
    }
    var_17 *= var_9;
    #pragma endscop
}
