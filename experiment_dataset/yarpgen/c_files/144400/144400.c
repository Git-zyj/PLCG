/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_5;
    var_11 = var_4;
    var_12 = (max(((min((47 / var_5), 6))), (((((var_6 ? var_7 : -1683037597))) ? ((var_3 ? 49598 : var_3)) : (118 <= var_1)))));
    var_13 = (max((((var_6 & 65520) - (13 & var_1))), ((((65520 <= var_6) ? var_4 : (max(var_7, var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((((((max(var_1, (arr_2 [i_1] [i_1] [i_0]))) >= var_0)) ? ((((((109 ? 13 : (arr_3 [i_1] [i_0] [i_0])))) > (arr_2 [i_1 + 2] [i_1 - 1] [i_1 + 1])))) : (max(((18446744073709551611 ? 16 : var_1)), (50333 & 67))))))));
                var_15 = (max(((190 ? (arr_1 [i_1 - 1] [i_1 - 1]) : (arr_3 [i_1 - 1] [i_1 - 1] [i_1]))), ((min((arr_3 [i_0] [i_1] [i_1 + 1]), var_1)))));
            }
        }
    }
    #pragma endscop
}
