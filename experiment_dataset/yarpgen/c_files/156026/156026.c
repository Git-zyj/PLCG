/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_6 ? (max((var_1 != 32760), var_4)) : var_8));
    var_12 ^= max(var_5, ((((var_6 && var_1) && var_7))));
    var_13 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = ((arr_5 [i_0] [i_2]) ? 3 : (!var_4));
                    var_15 = (max((min(var_5, (min(58, (arr_4 [i_2] [i_1] [i_0]))))), var_1));
                }
            }
        }
    }
    #pragma endscop
}
