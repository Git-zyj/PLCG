/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_10 -= (max(((((arr_2 [i_1]) / (arr_3 [i_1])))), ((-1058250320498221912 ? 28770 : 144115188042301440))));
                var_11 = (max(var_11, (arr_2 [i_1])));
                var_12 = (arr_0 [i_0] [i_1]);
            }
        }
    }
    var_13 = 1;
    var_14 = var_0;
    #pragma endscop
}
