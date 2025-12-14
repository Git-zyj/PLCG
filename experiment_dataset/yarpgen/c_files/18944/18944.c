/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_12 - var_3);
    var_17 |= ((((max(((max(-1230424631, var_3))), -var_6))) ? (max((var_12 != var_4), 4813114432122758261)) : (((~-7651571234254681437) ? (var_0 | var_3) : var_14))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1 - 1] = ((((((arr_5 [i_1] [i_0]) & (arr_5 [i_1] [13]))) | var_9)));
                var_18 = (max(var_1, ((((max((arr_1 [i_0]), -7930805749994869303))) ? ((0 ? (arr_3 [21]) : (arr_3 [i_0]))) : (arr_1 [i_0 + 2])))));
                arr_7 [i_0] [i_1] = ((((var_10 + 9223372036854775807) >> (var_9 - 0))));
            }
        }
    }
    #pragma endscop
}
