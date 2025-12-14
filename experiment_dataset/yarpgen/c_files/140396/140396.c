/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_10 ? (min(var_4, (max(18446744073709551602, 1898851104)))) : var_11));
    var_13 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (-2028501283093418791 != 86);
                arr_7 [i_0] = ((((max((((var_0 ? (arr_0 [i_0] [i_0]) : var_9))), (max(20970, 8257093379982483206))))) ? (((((min((arr_0 [i_0] [i_0]), 0))) ? ((min(0, var_3))) : var_11))) : ((((((arr_4 [i_0] [i_0]) << (236 - 236)))) ? var_7 : (((-2028501283093418791 + 9223372036854775807) << (var_1 - 4428)))))));
                arr_8 [i_1] = (min(((~(arr_4 [i_0] [i_1]))), ((max((arr_0 [i_0] [i_0]), (((!(arr_3 [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
