/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_14 |= (((1 ? 173 : 1)));
                arr_7 [i_1 - 2] [i_0] = 9284;
                var_15 = ((var_2 == (((((183 ? 19398 : var_6))) ? ((var_2 ? 76 : var_13)) : 38926))));
            }
        }
    }
    var_16 = (((((~var_13) ? (((max(var_4, var_1)))) : -var_13)) * var_3));
    var_17 = ((-(32768 && var_6)));
    var_18 = (0 ? ((((var_7 | 0) ? ((var_12 ? 19398 : 1)) : (min(1, var_5))))) : ((var_9 ? (var_1 == var_7) : ((var_6 ? 7313335817582808664 : var_7)))));
    var_19 = var_3;
    #pragma endscop
}
