/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max((max(var_1, var_3)), var_1))) % (((((var_12 ? var_13 : var_13))) ? ((min(91, 91))) : (((var_0 + 2147483647) >> (var_12 + 669167170)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (max(var_11, (((var_12 ? var_12 : 5)))));
                arr_5 [i_0] [i_0] = (min((min((max(var_2, 70)), ((min(70, 4458546913062269759))))), ((164 ? ((var_1 ? var_2 : var_15)) : (((max(var_15, 1))))))));
                arr_6 [i_0] [i_1] = ((((max(164, -1796445056341529861))) - (max((12088910853733068403 * 9223372036854775807), (arr_1 [i_0])))));
                var_18 = (min(var_4, var_10));
                arr_7 [i_1] [i_0] [i_0] = (((65472 / 18446744073709551615) ? ((var_13 / (arr_2 [i_0]))) : (arr_2 [i_1])));
            }
        }
    }
    var_19 = (((var_9 ? (var_11 || var_8) : (min(var_4, var_14)))) + (((((min(var_4, var_14))) ? (var_7 / 1613570392) : (var_1 / var_13)))));

    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        arr_11 [0] = ((1 ? ((((((arr_9 [i_2]) ? 420395472 : var_11)) + var_13))) : (min((arr_10 [5]), var_9))));
        var_20 *= (((((arr_1 [i_2]) ? (min((arr_8 [i_2]), var_2)) : (arr_2 [i_2 - 1]))) - ((((1 ? 215 : 18446744073709551607)) / var_2))));
    }
    #pragma endscop
}
