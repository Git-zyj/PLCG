/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_9 > 0) + ((0 ? var_18 : (1088322104 ^ var_16)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 += var_18;
                var_22 = (((((+(max((arr_2 [i_0] [i_1]), (arr_3 [i_0])))))) ? (((var_6 - (arr_5 [i_1] [i_0])))) : ((var_18 + (((((arr_5 [i_0] [i_1]) == (arr_3 [i_0])))))))));
            }
        }
    }
    var_23 = var_7;
    var_24 = 0;
    var_25 = var_1;
    #pragma endscop
}
