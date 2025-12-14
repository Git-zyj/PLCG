/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_19 = (max(var_1, (((17921 ? 13636932582478870765 : 41475)))));

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            var_20 = ((~(((arr_4 [i_1 - 1] [i_0 + 1] [i_0 + 1]) ? ((max(var_14, (arr_0 [11])))) : var_4))));
            arr_5 [i_0] = ((-((max(var_11, (arr_4 [i_1 - 1] [i_1 - 1] [i_1]))))));
            var_21 = (min(var_21, (((((max(65521, (arr_3 [7])))) != ((((-32767 - 1) ? var_3 : (arr_0 [i_0 + 1])))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        var_22 = 2147483646;
                        var_23 &= (arr_2 [i_0]);
                        arr_11 [i_3] [i_1] [i_3] [i_3] = var_6;
                        var_24 = max((~32749), (max(1353465731992559011, (var_16 && var_0))));
                    }
                }
            }
        }
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            var_25 = (max((((!(((10831190583420295384 ? (arr_2 [i_0 + 1]) : var_16)))))), (max((arr_8 [i_0] [i_4 + 1] [i_4 + 1] [i_4]), (max(7615553490289256231, -32762))))));
            var_26 = var_6;
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                var_27 ^= (((((arr_13 [i_0 - 1] [10] [i_0 + 2]) && 144560244)) ? ((var_12 ? (max(17093278341716992605, var_11)) : (((var_7 / (arr_6 [i_0 + 2] [i_0 + 2] [i_6])))))) : (((((var_10 ? var_10 : 17921)))))));
                var_28 += (~(arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 - 1]));
                var_29 *= (max((((!var_2) ? ((min((arr_6 [i_0 - 2] [i_0 - 2] [i_0 + 2]), var_7))) : (((!(-32767 - 1)))))), (((2147483642 || var_11) ? (~var_7) : (var_12 - 65522)))));
            }
            arr_18 [i_0 - 2] = (max((((11134 || (arr_15 [i_5])))), (((var_1 * -58) << (32767 - 32721)))));
        }
        var_30 *= -32767;
        var_31 = (min(var_31, ((min((((arr_7 [i_0 - 1] [i_0] [i_0] [i_0 - 2]) & (arr_7 [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 2]))), ((var_5 ? var_14 : (arr_1 [i_0 - 2]))))))));
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_32 = (((((62 ? (((arr_20 [i_7]) | (arr_19 [i_7] [i_7]))) : var_8))) ? 47614 : ((2147483639 ? -2147483643 : -2115024868419690894))));
        arr_22 [i_7] = ((!(!2985163632)));
        var_33 = var_10;
    }
    #pragma endscop
}
