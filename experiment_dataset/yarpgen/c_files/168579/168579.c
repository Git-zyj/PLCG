/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    var_20 = ((9 ? (var_13 | -6688508278005471229) : (~6688508278005471221)));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_21 = (arr_1 [i_0]);
        var_22 = (max(var_22, ((max(((((min(58952, 1))) ? (arr_0 [i_0 + 1] [i_0 - 1]) : (arr_1 [i_0]))), ((((max((arr_0 [i_0] [8]), 3)) == (min(65535, (arr_0 [i_0 - 1] [i_0 - 1])))))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_2 - 1] = (((((min((max(65522, -10)), 8486877000712720217)))) - 0));
                        arr_11 [i_0] [i_0] [i_2] [15] = ((-50 ? 33552384 : (((var_17 ^ (arr_9 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_23 = (arr_5 [i_4] [i_4] [i_4]);
            arr_14 [i_0] [i_4] [i_0] = (((((((max((arr_7 [i_0] [i_0] [i_0] [i_4]), (arr_7 [i_0] [i_0] [i_0] [12])))) ? (((max((arr_3 [i_0 + 1] [5]), 1)))) : (min(var_9, var_12))))) ? ((((arr_3 [i_0 + 1] [i_0 - 1]) ? (arr_1 [i_0 + 2]) : (arr_5 [i_0 + 2] [i_4] [14])))) : (arr_13 [i_4] [i_0 - 1] [i_0 - 1])));
            var_24 = ((((((max((arr_6 [i_0] [i_0 - 1] [i_0]), (arr_3 [4] [i_4])))) ? (arr_12 [i_0] [i_0] [i_0 + 1]) : (arr_0 [i_4] [i_0 + 1]))) + (arr_5 [i_0] [i_4] [i_4])));
        }
        var_25 = var_3;
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_26 = (max(var_26, ((max((((-(arr_3 [i_5] [i_5])))), (min((arr_15 [i_5] [i_5]), (arr_15 [i_5] [i_5]))))))));
        var_27 = (((((max(var_13, (arr_8 [i_5] [i_5])))) ? (((arr_3 [6] [6]) ? var_10 : 185310586464670771)) : ((var_8 ? 1163438053 : var_8)))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_28 = (min(var_28, 1));
        var_29 = -var_2;
        arr_20 [i_6] [i_6] = (((((((6 ? var_16 : (arr_18 [i_6]))) * ((max(var_1, var_10)))))) ? ((((((arr_18 [i_6]) / (arr_19 [i_6] [i_6])))) ? (arr_17 [i_6] [i_6]) : -4320550954320559632)) : ((min((((arr_17 [i_6] [i_6]) ? 1 : 67)), 21)))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_30 = var_10;
        var_31 = (1 ? -4442855089386652654 : 1);
        arr_23 [i_7] = ((((((arr_19 [i_7] [i_7]) * ((-2305843009213693952 ? (arr_19 [i_7] [i_7]) : var_1))))) ? (((arr_17 [i_7] [i_7]) | var_8)) : ((((~var_15) ? (((-4 ? (arr_22 [i_7]) : var_11))) : (max(var_11, -4050906355763449323)))))));
        var_32 = (((((-((-9 ? -23 : var_6))))) ? (max(((26551 ? -4 : (arr_21 [i_7] [i_7]))), ((var_18 ? 207 : var_2)))) : ((((arr_17 [i_7] [i_7]) || ((((arr_17 [i_7] [i_7]) ? var_15 : 26551))))))));
    }
    #pragma endscop
}
