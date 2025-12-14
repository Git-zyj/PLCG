/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_6 ? (((var_10 ? var_8 : var_7)) : 9223372036854775806))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = ((var_3 ? (arr_7 [i_0] [2] [0]) : (arr_2 [i_0] [i_0])));
                    var_15 = 164;
                    var_16 = ((154 | (min((((var_11 + 9223372036854775807) << (((arr_4 [i_0] [i_1] [i_2]) - 120)))), (arr_6 [i_0] [i_1] [i_2])))));
                    var_17 = ((-(((arr_6 [i_0] [i_0] [i_0]) >> (((arr_3 [i_1] [i_2]) - 9167190219885639022))))));
                }
            }
        }
    }
    var_18 = ((((((var_9 - var_4) ? (~var_0) : var_2))) ? ((min(var_12, var_4))) : 36));
    var_19 = (min(var_10, ((((var_10 ? var_3 : var_5)) * (var_1 / var_8)))));
    #pragma endscop
}
