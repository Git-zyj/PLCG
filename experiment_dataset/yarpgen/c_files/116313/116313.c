/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_0));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_17 = (arr_0 [3] [i_0]);
                var_18 &= ((!((((var_3 > 1) ? ((var_0 ? var_15 : (arr_0 [i_1] [i_0]))) : ((0 ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
