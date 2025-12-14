/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = ((((((((18014398442373120 ? 11396546784770744821 : 11396546784770744827))) ? var_3 : (-2147483647 - 1)))) ? (((arr_4 [i_0 - 1] [i_1] [1]) ? (arr_3 [3] [3] [i_1]) : var_9)) : ((max(((11396546784770744823 ? 16 : var_2)), var_3)))));
                var_12 = (((arr_2 [i_0 + 1]) % (max((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1])))));
                arr_6 [i_1] = (((arr_1 [i_0 + 1] [i_1]) < -76));
            }
        }
    }
    var_13 = var_10;
    #pragma endscop
}
