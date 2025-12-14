/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((((((var_3 ? var_10 : var_9))) ? var_0 : 3002986921)), ((((0 - 1291980375) <= (min(1291980374, 116)))))));
    var_14 &= (max(422482485, var_0));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [23] [23] = (var_4 && 3);
                    arr_8 [i_0] [i_0 - 4] [i_0] [i_0 - 3] |= (-12063 + 1931483784);
                }
            }
        }
    }
    var_15 = 93;
    #pragma endscop
}
