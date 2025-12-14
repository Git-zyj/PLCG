/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (((~2443192727902238967) ? (((0 ? 1 : 1))) : 4294967295));
                var_19 = (max((90 + 358792073041808852), (max((1 && -1), (min(var_0, 15))))));
                arr_4 [i_1] [i_1] = var_14;
            }
        }
    }
    var_20 = ((var_2 ? var_12 : (((var_2 && (~var_13))))));
    #pragma endscop
}
