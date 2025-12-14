/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(min(-1639397591049325854, var_0))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((min((arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1]), (min(var_12, var_1)))))));
                    var_15 = (min(-32745, 1));
                    var_16 = (min(var_16, ((((((min((arr_2 [i_0 - 1] [i_1]), (arr_2 [i_0 - 1] [i_1]))) ^ (min(-1639397591049325854, -30701)))) - ((min((arr_4 [i_2] [i_1]), (arr_6 [i_0 - 2])))))))));
                }
            }
        }
    }
    #pragma endscop
}
