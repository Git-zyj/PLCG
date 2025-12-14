/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_7, var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((-108 ? (((-108 ? 1001848882 : 6891))) : (arr_1 [i_0 - 1])));
                arr_6 [i_0] [i_0] = var_7;
                var_15 ^= ((!(!6891)));
                var_16 &= ((!(arr_2 [8])));
            }
        }
    }
    var_17 = ((!(((var_6 % (~89))))));
    var_18 = (max(((~(!var_6))), ((var_7 ? var_4 : var_2))));
    #pragma endscop
}
