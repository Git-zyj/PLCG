/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 248;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = ((min((arr_1 [i_1 + 1]), (arr_1 [i_0]))));
                    var_22 &= (((((var_15 + 9223372036854775807) << (var_4 - 2197212289))) + (((min(243, 73))))));
                    arr_8 [i_2] [i_2] [i_0] = (arr_4 [i_1 + 2] [i_2 - 1]);
                }
            }
        }
    }
    var_23 = (((((((254 ? var_9 : var_7)) & -4806))) ? ((((var_12 >> (234 - 229))) * (~0))) : ((var_1 ? var_16 : (!var_7)))));
    var_24 = (min(var_24, var_2));
    #pragma endscop
}
