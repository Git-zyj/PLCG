/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((!54) ? ((var_13 ? var_3 : 201)) : var_15));
    var_19 = var_11;
    var_20 = (((((((((9 ? 221 : var_5))) ? var_16 : var_15)) + 2147483647)) >> ((((~(~-1412642672))) + 1412642691))));
    var_21 -= ((~(((~var_0) ? var_9 : (~var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] = (min(((min((var_11 & var_9), 1526660904))), ((205 ? (arr_2 [i_1] [i_1 + 4]) : (arr_2 [i_1] [i_1 - 1])))));
                    arr_7 [i_0] [i_0] [i_0] = (min((((arr_5 [i_1 + 2] [i_1 + 2]) | (arr_2 [i_1 + 4] [i_1 + 4]))), 2));
                }
            }
        }
    }
    #pragma endscop
}
