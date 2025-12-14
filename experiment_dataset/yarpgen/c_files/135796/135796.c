/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_2;
    var_21 = (67 || 1769379799);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0 - 1] [i_1] [i_0 - 1] = (min(((((var_12 ? (arr_3 [i_0 - 1] [i_1] [i_1]) : -8936)))), (arr_5 [7])));
                arr_7 [i_0] [i_0] [i_1] = -29273;
                arr_8 [i_0] [i_0] [i_0] = var_0;
                arr_9 [12] [1] [15] |= (var_2 ? ((3197393468 ? var_2 : -68)) : ((1769379799 ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 2]))));
            }
        }
    }
    #pragma endscop
}
