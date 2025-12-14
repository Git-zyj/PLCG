/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-116 && (~115)));
    var_16 = (max(var_16, (((((((!115) ? (!var_4) : var_14))) ? (104 || 113) : var_5)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (((((-(arr_1 [i_0] [i_0])))) || (-116 - -111)));
        var_18 = (max(var_18, (((!(115 != 102))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = ((~(((arr_2 [i_1]) - (115 - 99)))));
        var_19 *= ((-((-121 ? -103 : 109))));
        var_20 = ((~((var_7 ? var_13 : (arr_3 [i_1])))));
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        var_21 = ((~(((-116 * 88) & (~-99)))));
        var_22 += (((((-100 >= (arr_1 [i_2 + 1] [i_2 - 1])))) <= ((var_9 ? -114 : (!84)))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_13 [i_4] = ((~(-95 >= -116)));
                var_23 += ((~-114) >> ((((((((arr_12 [8]) ^ (arr_11 [3] [5])))) ? (-92 ^ 90) : ((91 ? var_1 : (arr_0 [18]))))) + 29)));
            }
        }
    }
    #pragma endscop
}
