/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 &= 1;
                    var_18 = (((1 ? 1 : 1)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_13 [i_3 - 1] [8] = 1122268582;
                arr_14 [i_3] [i_4] &= 232;
                arr_15 [i_4] = (((var_15 ? ((1 ? var_3 : var_11)) : 1)));
                arr_16 [i_3 - 1] [i_3] = (-9223372036854775807 - 1);
            }
        }
    }
    #pragma endscop
}
