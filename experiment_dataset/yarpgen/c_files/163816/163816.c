/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -20573;
    var_12 = (min(var_12, ((((((max(116, -20573))) | (var_7 != -118)))))));
    var_13 = (max(var_13, var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1 - 1] [i_1] = ((((min((((-(arr_2 [5])))), (~var_8)))) || (((min(var_1, var_6)) >= (!var_0)))));
                    arr_10 [i_0] [i_1 - 1] [i_2] [i_1] = var_1;
                }
            }
        }
    }
    #pragma endscop
}
