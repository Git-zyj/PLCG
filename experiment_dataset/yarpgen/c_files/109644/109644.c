/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!(((var_8 ? (max(var_9, var_12)) : (max(var_2, var_9)))))));
    var_17 = -var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = ((+((~(((-32767 - 1) + var_9))))));
                var_19 += (((~32747) ? (min(((50 ? var_5 : (arr_3 [10] [10]))), (((arr_1 [6]) ? (arr_4 [i_1 + 1] [i_1 + 1]) : (arr_3 [22] [22]))))) : 1176914402));
            }
        }
    }
    #pragma endscop
}
