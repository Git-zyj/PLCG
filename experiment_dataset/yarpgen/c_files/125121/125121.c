/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = (min(var_14, var_8));
    var_15 += (((((-9223372036854775807 - 1) ? (4294967295 / var_6) : (((var_12 ? var_0 : var_5))))) >> (((!(((var_0 ? var_4 : var_10))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = ((((((((var_7 ? var_6 : -32756)) + 9223372036854775807)) >> (((((arr_0 [i_0 + 1] [i_0 + 1]) ? 40576 : var_8)) - 56)))) & ((max((arr_3 [i_0 + 1]), var_9)))));
                arr_6 [i_0] [i_0 - 1] [i_0 + 1] = (arr_0 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
