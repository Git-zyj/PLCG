/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_17 = (((min(((((arr_2 [i_0]) != (arr_2 [i_0])))), (arr_2 [i_1 + 2])))) ? ((((arr_0 [i_1] [i_1]) ? (arr_3 [i_0] [i_1]) : var_15))) : (((arr_0 [i_0 - 2] [i_1]) / var_3)));
            var_18 = (min(var_18, (((!((((arr_2 [i_1]) ? (arr_0 [i_1 + 1] [i_0 - 2]) : 18446744073709551615))))))));
            var_19 = (min(((((6460984962367942994 * 4294967295) || 3111401322130507601))), (((arr_1 [i_1]) ? (arr_1 [i_1]) : 0))));
        }
        var_20 = (min(var_20, 15));
        var_21 = (min((((!(arr_3 [i_0 - 1] [i_0 - 1])))), ((-(arr_3 [i_0 - 2] [i_0 - 2])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                {
                    var_22 = 32736;
                    var_23 = var_9;
                    arr_9 [i_3] = 0;
                    var_24 = (min((((((arr_5 [i_3]) * var_9)))), (arr_2 [i_0])));
                }
            }
        }
        var_25 = (max(var_25, var_9));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_26 = var_5;
        var_27 = 32800;
        var_28 = var_1;
        var_29 = (((arr_2 [i_4]) * var_7));
    }
    var_30 = (min(var_2, ((((var_5 ? var_12 : var_11)) >> ((((var_10 ? var_6 : 1)) - 2709244107))))));
    var_31 = (((((-108 ? 0 : 65529))) ? var_12 : ((var_0 << (((min(var_11, var_11)) - 14064000345436499308))))));
    #pragma endscop
}
