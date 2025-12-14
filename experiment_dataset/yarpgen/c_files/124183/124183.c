/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((min(var_3, var_11)) + (((var_11 ? 64769 : var_6)))))) ? (((var_8 > (64769 + 64738)))) : 64769);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 += ((~((-(123 <= 9223372036854775807)))));
        arr_3 [i_0] [i_0] = (max((~-17564), (((min(262143, 255)) & ((-(arr_1 [i_0])))))));
        var_14 = ((~(max(64761, 0))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_15 = ((-(arr_6 [i_1])));
                        arr_15 [i_2] [i_4] [i_2] [i_4] = (arr_14 [i_1] [i_1] [i_1] [i_1]);
                        arr_16 [i_1] [i_1] [i_2] [i_2] [6] = (!-24287);
                        var_16 = (min(var_16, (arr_5 [i_4])));
                    }
                }
            }
        }
        var_17 = (((arr_2 [i_1]) ? (arr_12 [i_1]) : 2));
        var_18 = (~(arr_12 [i_1]));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_19 = (((-3 | 61021) ? (((arr_4 [i_5] [i_5]) ^ ((((arr_7 [i_5]) ? -18706 : (arr_12 [i_5])))))) : (((((((arr_8 [i_5] [i_5]) ? var_1 : (arr_7 [i_5])))) ? (((arr_1 [i_5]) ^ 963665879)) : (arr_0 [17]))))));
        var_20 = ((((((arr_11 [i_5] [4] [i_5] [i_5]) - (arr_9 [i_5])))) < (((((arr_0 [i_5]) || (arr_17 [i_5]))) ? -125 : (((((arr_2 [6]) + 9223372036854775807)) << (((-24271 + 24316) - 45))))))));
        arr_19 [i_5] [i_5] = ((((((-2 ? var_2 : 2354100607)) | (arr_0 [i_5]))) != 228720354));
    }
    var_21 = var_10;
    var_22 = var_2;
    #pragma endscop
}
