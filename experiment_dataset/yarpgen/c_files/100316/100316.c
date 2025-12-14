/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 *= (((((((((arr_4 [i_0] [i_1]) ? (arr_2 [2] [i_1]) : 16576878056282049191))) ? (1046150718 > var_6) : (arr_2 [i_0] [i_1])))) > ((min(var_12, 16576878056282049191)))));
                var_19 = (min(var_19, ((((var_2 + 13608463965881832759) ? ((3547853295 ? (arr_3 [i_0] [i_1]) : var_14)) : ((var_0 ? (arr_0 [i_0 + 1]) : -var_14)))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_20 = (arr_6 [i_2]);
        arr_7 [i_2] [11] = ((-((((var_4 ? var_9 : var_4)) + (max(var_4, var_16))))));
        var_21 -= ((var_10 ? (((var_2 < (((arr_5 [13]) ? (arr_5 [i_2]) : var_4))))) : ((-(((arr_6 [i_2]) ? (arr_5 [i_2]) : var_0))))));

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_11 [i_2] [i_3] = (((arr_9 [i_2] [i_2] [1]) ? -1046150719 : (((arr_5 [i_3]) ? (!var_17) : ((var_2 + (arr_6 [i_2])))))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_22 *= 127;
                var_23 = 255;
                var_24 = (max(var_24, (arr_12 [1])));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_16 [i_2] [1] [i_5] [i_5] = (((max(var_5, -var_13)) > (((~(var_0 / var_9))))));
                var_25 = ((+(((!var_5) ? (var_15 + -3732930445145171778) : ((((arr_9 [i_5] [1] [i_2]) + (arr_15 [i_5] [i_3] [i_3] [i_2]))))))));
            }
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                arr_19 [i_6] [i_3] [i_6] [i_3] = (max((~3732930445145171777), var_8));
                arr_20 [13] [i_3] [i_6] [i_6] = -2226329135;
                var_26 = ((((+(((arr_15 [i_2] [5] [8] [i_2]) ? 1 : var_14))))) ? (((((1 ? (arr_17 [i_2] [i_2] [i_6] [0]) : 1046150727)) << (var_4 - 3688299473)))) : var_8);
                var_27 = (max((1 ^ 1046150719), ((((min((arr_18 [3] [i_3] [i_6]), (arr_17 [i_2] [i_2] [i_6] [6])))) ? (((arr_6 [12]) ? (arr_15 [2] [8] [i_3] [i_6]) : (arr_5 [11]))) : (((arr_18 [i_2] [i_3] [i_6]) ? var_11 : -1046150719))))));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                var_28 = (((arr_14 [i_2] [i_3] [1]) >> (((~var_8) - 3607627837))));
                arr_24 [i_3] [i_7] = (((((-1 > (arr_12 [14])))) & (arr_10 [i_2] [i_3])));
                var_29 ^= (((((55 / (arr_10 [i_2] [i_7])))) ? ((1554423622 ^ (arr_17 [i_2] [i_2] [i_7] [i_2]))) : (arr_17 [i_7] [i_7] [i_7] [i_2])));
                arr_25 [i_7] = (((((var_8 - (arr_22 [i_2] [i_2] [1] [1])))) ? (((arr_17 [i_2] [i_3] [i_7] [i_2]) & (arr_6 [i_2]))) : (((arr_12 [i_2]) ^ (arr_6 [i_2])))));
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 1; i_8 < 10;i_8 += 1)
    {
        var_30 += var_11;
        arr_28 [i_8] = (((!0) > (arr_26 [i_8])));
        var_31 = (((var_12 - 101) - ((var_3 ? (arr_14 [i_8] [i_8] [i_8]) : (arr_12 [11])))));
        var_32 = (((arr_22 [i_8] [i_8] [i_8] [i_8]) > ((var_5 ? 1 : (arr_5 [1])))));
    }
    for (int i_9 = 3; i_9 < 20;i_9 += 1)
    {
        var_33 = var_7;
        var_34 = (min((((~var_13) ^ (((var_9 ? (arr_29 [i_9]) : (arr_30 [6] [17])))))), (~var_14)));
        var_35 = (min(((var_11 ? var_15 : (arr_30 [i_9 + 2] [i_9 - 1]))), ((((arr_30 [i_9 + 2] [i_9 - 2]) && (arr_30 [i_9 + 1] [i_9 - 2]))))));
        arr_32 [11] = var_3;
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        arr_35 [i_10] = ((arr_31 [i_10]) > ((((var_3 && (arr_30 [i_10] [i_10]))))));
        var_36 = (((((arr_34 [i_10]) > (max(var_1, 22864)))) && (((var_13 <= 15) > ((1046150733 ? var_9 : (arr_31 [i_10])))))));
    }
    var_37 = (min(var_3, ((var_7 + (min(var_13, var_6))))));
    #pragma endscop
}
