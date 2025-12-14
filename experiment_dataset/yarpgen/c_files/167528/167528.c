/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_14 *= (min((((-(arr_2 [i_1 - 1])))), ((~(min(var_8, (arr_5 [i_0] [7] [7])))))));
                var_15 = ((0 ? ((((min(var_2, 8191))))) : (min((((arr_5 [10] [10] [i_1 - 1]) | var_9)), (arr_3 [i_1 - 1])))));
            }
        }
    }
    var_16 = (min(var_16, ((min(-8202, 8190)))));
    #pragma endscop
}
