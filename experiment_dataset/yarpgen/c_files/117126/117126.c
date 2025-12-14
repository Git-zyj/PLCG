/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_4 ? ((var_9 ? (~var_2) : var_7)) : (!var_7)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = 9223372036854775803;
                    var_13 = (max(var_13, (arr_4 [i_2] [i_1] [i_0])));
                    var_14 = (max((((arr_1 [i_0 + 3]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 2]))), (arr_1 [i_0 - 3])));
                    var_15 |= (((arr_1 [i_2]) ? (max((arr_0 [i_0 - 3] [i_2]), 2147483647)) : ((((arr_2 [i_0 - 1]) ? var_2 : var_9)))));
                    arr_6 [i_0] [i_1] [i_2] [i_0] = (max((((3501401715 ? 0 : 2))), -1));
                }
            }
        }
    }
    #pragma endscop
}
