/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((((min((max(4072287061, -604171594219761744)), (((604171594219761743 ? 253 : 19795)))))) ? (min((3 || var_11), 604171594219761769)) : (((var_3 | ((min(var_15, -1))))))));
    var_19 = ((var_7 <= (~var_13)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [6] [i_0] = (((((arr_2 [i_0]) ? var_5 : var_14)) == (arr_3 [i_0])));
        var_20 = (min(var_20, (2429414194 < 1)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] = ((~((65535 ? var_0 : 55815))));

        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            var_21 = (min(var_21, (arr_6 [i_1] [i_2])));
            var_22 = (max(var_22, (arr_6 [i_2] [i_1])));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_23 = ((((((var_1 != (arr_10 [i_1] [i_1]))))) | ((65535 % (arr_8 [i_1] [i_1] [i_3])))));
            var_24 = ((0 ? 4697623373018932651 : 604171594219761733));
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_15 [14] [i_4] = (arr_11 [i_1] [i_4] [i_4]);
            var_25 += ((((((arr_6 [i_1] [i_4]) > var_6))) ^ (~var_9)));

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                arr_19 [i_1] [i_4] [i_5] = var_10;
                arr_20 [i_1] [i_4] = (((var_15 ? (arr_13 [i_5] [i_5]) : (arr_10 [i_1] [i_4]))));
                arr_21 [i_1] [4] [9] [8] = (((arr_12 [i_1] [i_4] [i_5]) ? (45741 / 604171594219761768) : (arr_18 [i_1] [i_4] [i_5] [15])));
            }
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                arr_25 [i_1] = ((((((arr_6 [i_1] [14]) && var_9))) + (((var_11 >= (arr_5 [i_6]))))));
                var_26 = (((((-55 ? -604171594219761762 : var_16))) ? (arr_5 [i_1]) : (var_1 == 2147483647)));
                var_27 = (max(var_27, ((((arr_17 [i_1] [11] [i_6]) ? ((604171594219761734 ? 3887608826149357798 : var_14)) : (arr_12 [i_1] [i_4] [i_4]))))));
                var_28 += ((~(arr_12 [i_1] [i_1] [i_1])));
            }
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                arr_28 [i_4] [i_7] = ((1745751186 ? 49989 : 65535));
                var_29 = (min(var_29, var_5));
                var_30 += ((+(((arr_13 [i_7] [i_1]) ? (arr_16 [i_7]) : (arr_8 [i_1] [i_1] [18])))));
            }
            arr_29 [i_1] = ((-(arr_6 [i_1] [i_1])));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    {
                        var_31 = ((var_8 == (var_3 | 32)));
                        var_32 = (min(var_32, (((((45740 ^ (arr_5 [i_1]))) % 2)))));
                        arr_35 [i_1] [i_8] [i_8] [i_9] = ((((var_0 ? (arr_16 [13]) : var_10)) ^ var_13));
                    }
                }
            }
        }
        var_33 = (max(var_33, ((((127 > 15) >= (((arr_33 [i_1] [i_1] [10] [i_1]) ? var_13 : var_5)))))));
        arr_36 [i_1] = (((var_13 / var_10) > ((var_1 ? 60 : (arr_22 [i_1] [i_1] [i_1] [i_1])))));
    }
    var_34 = 30;
    var_35 = ((10 ? ((21327 ? 2 : (-775311913808006166 < 32))) : 31));
    #pragma endscop
}
