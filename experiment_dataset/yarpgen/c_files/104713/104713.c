/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (((var_16 ? var_9 : (arr_2 [i_1 - 1]))))));
                    var_21 = (~33);
                    var_22 = (15974880027323980135 - 162);
                }
            }
        }
        var_23 = (max(var_23, (((-(-32 && 9223372036854775807))))));
        var_24 = (max(var_24, var_12));
    }
    var_25 &= 1;
    #pragma endscop
}
