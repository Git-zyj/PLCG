/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 5600;
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 *= ((!((((((5600 ? (arr_4 [10] [17] [i_1]) : var_7))) ? (arr_2 [20] [20]) : ((min((arr_3 [i_1]), (arr_5 [i_0])))))))));
                var_16 = (min((65522 | 5628), (arr_3 [i_0])));
            }
        }
    }
    var_17 = var_6;
    #pragma endscop
}
