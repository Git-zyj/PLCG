/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = ((((((((var_7 ? var_5 : var_3))) ? var_3 : ((var_2 ? var_5 : var_5))))) ? (((((201 ? 40 : 0))) ? (max(var_3, var_5)) : ((var_7 ? var_1 : var_9)))) : (((var_6 ? var_0 : ((65535 ? 1069547520 : 54)))))));
                    arr_10 [i_0] [i_0] [i_0] = (((((var_7 ? var_5 : -var_5))) ? (((-((var_6 ? var_0 : var_11))))) : (((var_11 * var_1) ? ((var_7 ? var_6 : var_10)) : var_8))));
                }
            }
        }
    }
    var_14 = ((((((var_11 <= var_12) ? ((var_12 ? var_6 : var_4)) : -var_6))) ? var_2 : (((var_7 + 2147483647) >> ((((var_8 ? var_12 : var_5)) - 8251016753839409338))))));
    var_15 = var_4;
    #pragma endscop
}
