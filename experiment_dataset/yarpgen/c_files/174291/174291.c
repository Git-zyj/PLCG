/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [3] [i_0] [i_1] = (!-var_8);
                var_12 = (((arr_2 [i_0] [i_0]) ? 1 : ((((max(var_5, 1))) ? -23030 : ((2534136552 ? (arr_4 [21]) : 64))))));
                var_13 = 69;
            }
        }
    }
    var_14 = (((!var_9) ? -var_4 : var_9));
    var_15 = (((((-((max(49000, -23030)))))) ? var_3 : var_2));
    #pragma endscop
}
