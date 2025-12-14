/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((62367 ? var_4 : var_7)) ? var_6 : var_7))));
    var_13 = ((~(~var_9)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = (max(var_14, var_7));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_2] [19] = (max(((-((min(197, 62367))))), (((((31122 / (arr_9 [i_0] [i_0] [i_0] [i_0])))) ? ((0 ? 7279 : (arr_10 [i_0] [i_2] [i_0] [i_1] [i_0]))) : (arr_6 [i_0])))));
                        var_15 = ((min((arr_3 [i_0] [0] [i_0]), (arr_4 [i_0]))));
                    }
                }
            }
        }
    }

    for (int i_4 = 4; i_4 < 16;i_4 += 1)
    {
        var_16 = ((((max(((var_1 ? (arr_4 [i_4]) : 1172295577)), (var_8 & var_1)))) ? (((((var_9 ? 62377 : var_7))) ? (arr_8 [i_4 - 4] [i_4] [i_4] [9]) : ((((arr_4 [i_4]) % (arr_1 [i_4])))))) : ((((max(var_0, var_1))) ? var_4 : (((3168 ? 196 : (arr_9 [i_4 - 4] [i_4] [i_4] [i_4]))))))));
        var_17 = (((34414 ? 197 : 0)) - -112);
        var_18 = (arr_7 [i_4]);
    }
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        var_19 = -108;
        var_20 = (((arr_1 [i_5]) ? (max((min(624395682, (arr_14 [i_5]))), ((((arr_10 [i_5 + 3] [i_5] [i_5] [2] [i_5]) - (arr_9 [i_5] [18] [i_5] [i_5 + 2])))))) : ((((arr_6 [23]) | (max(1694609761, var_1)))))));
        arr_16 [i_5] = ((((((((arr_8 [i_5 - 1] [13] [i_5 + 3] [13]) - -1376256996)) / (((arr_8 [i_5] [i_5] [i_5 + 2] [i_5 + 2]) ? (arr_8 [1] [21] [i_5 + 1] [i_5]) : (arr_2 [20] [i_5 + 1])))))) ? ((max(((~(arr_10 [i_5] [i_5 + 1] [i_5] [i_5 + 1] [1]))), 31122))) : (max((arr_5 [i_5] [i_5 + 3] [i_5]), (((arr_9 [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 2]) % (arr_0 [i_5])))))));
    }
    for (int i_6 = 3; i_6 < 13;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        arr_27 [i_6 + 1] [i_6] [i_6] [i_9] = (arr_10 [i_8 - 1] [i_8] [i_6] [i_8] [i_8]);
                        arr_28 [i_6] [i_7] [i_8 + 1] [i_6 - 1] = ((!((!(((62367 ? 3168 : 14990)))))));
                        arr_29 [i_9] [i_6] [i_6] [i_6] = (max(((max(14990, -1216387155))), (((((-(arr_2 [i_7] [i_7])))) ? var_3 : (arr_14 [i_6])))));
                        var_21 = 204;
                        arr_30 [i_6 - 2] [i_6] [i_8] [i_6] [i_6 - 2] = ((+((((((arr_6 [i_7]) ? 43979 : (arr_13 [i_6])))) ? ((((arr_17 [i_6]) <= (arr_20 [i_6] [i_6])))) : (((arr_14 [i_6]) - (arr_2 [i_7] [i_9])))))));
                    }
                }
            }
        }
        var_22 = (min((max(var_4, (((-13 ? (arr_15 [i_6]) : (arr_15 [i_6 - 1])))))), ((max(((~(arr_3 [i_6] [i_6 - 1] [i_6]))), (((arr_15 [i_6 - 3]) ? 3168 : (arr_6 [i_6 - 1]))))))));
        var_23 *= (arr_19 [i_6] [i_6]);
    }
    var_24 = (max(((1913814105 ? (min(var_5, var_4)) : var_9)), (((2 & var_5) ? (var_0 % var_2) : var_8))));
    #pragma endscop
}
