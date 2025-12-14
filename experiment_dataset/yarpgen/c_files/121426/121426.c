/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    var_19 = (max((17811360886923225530 ^ 5602), ((((max(var_0, var_7)) + var_17)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_20 ^= ((~(((var_8 ^ var_11) >> (((var_2 | var_1) + 271))))));
                var_21 = (min(var_21, (((((5746409715823891760 ? -var_11 : ((var_5 ? var_9 : var_8)))) * ((((26923 * (arr_1 [i_1]))))))))));
                var_22 *= ((((-16998 ? -22996 : var_6))));
            }
        }
    }
    #pragma endscop
}
