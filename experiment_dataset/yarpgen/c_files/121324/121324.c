/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = (max((arr_0 [i_0]), (((arr_1 [i_0]) ? (((7 ? var_4 : var_8))) : (arr_0 [i_0])))));
        var_13 = (!0);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_14 = ((0 <= (((max(8, 11))))));
                        var_15 = ((((((0 ? (arr_1 [i_0]) : var_9)) >> ((-7 ? 4 : var_1)))) >> ((((var_0 <= (arr_6 [i_0] [i_1 - 1] [i_2] [i_1 - 1]))) ? 7 : (arr_8 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3] [i_2] [i_3])))));
                        var_16 = ((((min(17, (arr_8 [i_0] [i_0] [i_3] [i_3] [i_2] [i_1])))) ? 4 : 16));
                        var_17 = (arr_0 [1]);
                    }
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 20;i_4 += 1)
    {
        var_18 += var_6;
        var_19 = (((((~(arr_10 [i_4 - 3])))) & (((arr_10 [i_4 - 1]) | 0))));
        var_20 = (arr_10 [i_4]);
        var_21 = (arr_11 [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                {
                    var_22 += (!-var_10);
                    var_23 = (((((arr_13 [20] [i_6]) + 2147483647)) >> (arr_11 [i_4])));
                    var_24 = (((+(((arr_11 [i_4]) & (arr_18 [i_4 + 1] [i_5] [i_4 + 1]))))));
                    var_25 = (((((~(!9)))) - 4));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_26 = ((((arr_17 [i_7]) ? -var_9 : (((0 ? 0 : (arr_14 [i_7])))))));
        var_27 = -16;
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_28 += ((((((~var_0) ? (arr_11 [20]) : ((-(arr_20 [i_8] [i_8])))))) - (max((arr_21 [8]), (arr_2 [i_8] [i_8] [i_8])))));
        var_29 = (253 ? 0 : 0);
        var_30 = (((max(var_7, (arr_8 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))) ? (max((~var_2), var_3)) : (((arr_10 [i_8]) ? 1 : ((0 ? var_9 : (arr_3 [i_8] [i_8] [i_8]))))));
        var_31 = (max(var_31, ((((min((arr_0 [i_8]), (arr_8 [i_8] [i_8] [i_8] [i_8] [4] [i_8]))) ^ (((((((0 ? 8 : 30))) <= var_9)))))))));
        var_32 = (min(var_32, (((+(((arr_3 [i_8] [i_8] [i_8]) ? (arr_3 [i_8] [i_8] [i_8]) : var_0)))))));
    }
    var_33 += ((var_0 ? ((((-17 > 0) || (((var_4 >> (var_7 + 138))))))) : (var_6 / var_7)));
    var_34 = (((0 - (((0 ? -17 : 1))))));
    #pragma endscop
}
