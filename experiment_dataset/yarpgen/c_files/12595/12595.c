/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((var_0 ? (arr_4 [i_1] [i_1]) : (((arr_4 [i_1 + 1] [i_1 + 1]) ^ ((min(199, 199)))))));
                    arr_7 [10] [i_1 - 2] [10] |= ((((var_0 ? (arr_1 [i_1 - 1] [i_1 - 1]) : var_8)) * (var_6 != var_9)));
                    arr_8 [i_2] [i_0] [i_0] = ((var_8 ? (~42957) : var_1));
                }
            }
        }
    }
    var_10 |= ((((((~188) / var_0))) > var_8));
    var_11 = ((var_9 | ((((min(var_7, var_7))) << ((((var_5 ? var_2 : var_6)) + 498163864))))));
    #pragma endscop
}
