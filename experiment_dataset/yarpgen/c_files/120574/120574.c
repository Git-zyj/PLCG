/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((min(18050, -5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = ((var_8 ? ((var_8 % (arr_3 [i_0] [i_1] [i_0]))) : (((min((arr_1 [i_0]), (arr_1 [i_1])))))));
                var_17 *= (((((!660527198) && var_7)) ? var_13 : ((((arr_1 [i_0]) == ((~(arr_3 [i_0] [i_0] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
