/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_15 = (max(var_7, var_6));
        var_16 = (~((((max(var_3, var_8))) ? (((var_5 ? -155871757 : var_6))) : (min(var_9, 14627126338948899992)))));
        var_17 = ((var_0 ? (arr_1 [i_0] [i_0]) : (((615349334480731898 != (((min(var_5, (arr_1 [1] [1]))))))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_18 -= ((var_2 ? var_10 : (((~4294967278) ? (((65534 ? 1 : 0))) : ((var_8 ? var_6 : var_10))))));
            var_19 = var_5;
        }
        var_20 |= (((((((min(var_0, (arr_3 [12] [12])))) ? (((var_5 ? (arr_2 [i_1] [1]) : var_0))) : ((var_14 ? 4294967260 : var_13))))) ? var_6 : (((((var_1 ? var_5 : var_0))) ? (max(4294967283, var_11)) : 1905361795))));
        var_21 -= ((((((((var_10 ? 254624854 : (arr_4 [1])))) - var_3))) ? ((((!(var_8 | 9223372036854775807))))) : (min((arr_4 [i_1]), (arr_4 [i_1])))));
        arr_6 [i_1] = (((var_3 ? var_8 : (((var_12 ? var_2 : 3880))))));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    arr_14 [i_4] [i_4] = (((var_12 ? ((1 ? var_14 : var_6)) : (arr_12 [0] [1] [i_5] [1]))));
                    var_22 = var_0;
                }
            }
        }
    }
    #pragma endscop
}
