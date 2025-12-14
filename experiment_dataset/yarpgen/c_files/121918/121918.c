/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 ^= var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [0] &= (max((arr_5 [14] [i_0 + 1] [i_0 + 1]), (arr_5 [2] [i_0 + 1] [i_0 - 1])));
                var_16 = ((605409681 ? (4 | 4) : (arr_1 [i_0])));
                arr_7 [i_0 - 1] [0] |= ((max(var_9, (arr_0 [10] [10]))));
            }
        }
    }
    #pragma endscop
}
