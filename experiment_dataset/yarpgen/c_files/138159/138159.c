/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [10] [i_1] = var_5;
                var_15 -= (((((((max(var_4, -1))) ? (((var_2 < (arr_2 [i_0] [i_1])))) : var_2))) ? (max((~var_12), var_0)) : (!-45801)));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_16 = (arr_1 [i_0]);
                    arr_8 [i_1] [i_1] [i_2] = (arr_2 [i_2] [i_0]);
                    arr_9 [4] [i_1] = var_0;

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_17 = ((!(((18 ? (arr_6 [i_3] [i_1] [i_0]) : var_9)))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_18 *= (((var_4 + var_4) || (((-(arr_3 [i_2]))))));
                            var_19 = 88;
                            var_20 = 0;
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_16 [i_1] [i_1] [i_2] [5] [i_2] = 14364379597951741908;
                            arr_17 [i_0] [i_1] [11] [11] [i_0] [i_1] = -14;
                        }
                        var_21 = 57245;
                        arr_18 [i_0] [i_1] [i_1] [i_3] = ((var_8 ? var_7 : (max((((var_2 + (arr_6 [i_3] [i_1] [i_0])))), (max(var_6, (arr_6 [i_1] [i_1] [i_1])))))));
                        arr_19 [i_3] [i_1] [i_3] [i_3] = (((((-(187 - 163)))) / (max(var_14, var_12))));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_22 [i_0] [i_1] [i_2] = (((min((arr_4 [i_1]), var_6)) * ((max(((8556380160 ? -38 : 72)), (var_2 || 2147352576))))));
                        var_22 -= arr_13 [i_0] [i_1] [i_0] [i_0] [7];
                        var_23 -= 168;
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_24 = (((((((((arr_1 [i_1]) + 15496391167034019334))) ? 183 : (var_1 - 11715202975144079157)))) ? (((((93 ? 23 : var_10))) ? (((arr_21 [i_1] [i_2]) + var_5)) : ((9223372036854775807 ? var_5 : 220)))) : (min((min(var_5, -30)), (arr_13 [i_7] [i_2] [i_2] [i_1] [i_0])))));
                        arr_25 [i_1] [i_1] [4] = var_9;
                        var_25 += ((((!(arr_12 [i_0] [i_1] [i_1] [i_0] [i_7]))) ? (!var_1) : (((max((arr_7 [i_0] [4] [i_0]), (arr_7 [i_0] [i_1] [i_2])))))));
                        var_26 = (~((((((arr_11 [6] [i_7] [i_2] [i_2]) ? 16 : var_2))) ? -1793057757 : var_12)));
                    }
                }
            }
        }
    }
    var_27 = (((!(((var_8 ? var_0 : var_10))))));
    var_28 = var_12;
    #pragma endscop
}
