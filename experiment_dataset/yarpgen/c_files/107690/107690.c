/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 = ((!(((-(var_0 * var_7))))));
                var_21 = 0;
                var_22 = (~var_4);
            }
        }
    }
    var_23 &= -16;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_24 = ((-((((var_0 ? var_9 : 16)) >> (-9223372036854775787 + 9223372036854775792)))));
                    var_25 = (min(var_11, var_14));
                }
            }
        }
    }
    #pragma endscop
}
