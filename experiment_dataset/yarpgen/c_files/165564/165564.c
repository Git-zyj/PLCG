/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(((1 ? 3414447528 : 31)), var_14);
    var_18 = (((max(var_5, 880519767))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_0] [i_2] [i_0] = ((((max((arr_8 [15] [0] [i_2] [11]), (arr_8 [i_0] [i_0] [i_2] [i_3])))) ? ((((arr_4 [i_2] [i_1] [1] [i_2]) >= (arr_4 [i_2] [i_1] [i_1] [14])))) : ((max((arr_4 [i_2] [i_1] [i_1] [2]), (arr_4 [i_2] [1] [i_2] [i_3]))))));
                        var_19 = (min(((-1 ? (!1) : (min(1, (arr_3 [i_0]))))), (arr_5 [i_0] [5] [i_3])));
                    }
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        var_20 = 604;
                        var_21 *= (((((((min(604, (arr_7 [2] [12] [i_2] [i_4])))) ? (arr_1 [i_4 + 3]) : 21))) ? 38370 : ((27151 ? (((-30641452 + 2147483647) >> var_16)) : var_2))));
                        arr_13 [i_2] [i_1] [6] = (((((arr_2 [i_4 - 2] [i_4 - 1]) != (arr_12 [i_0] [i_0] [i_2] [i_4] [i_4 + 2] [i_1]))) ? ((((arr_3 [1]) ? var_11 : ((((arr_2 [i_0] [i_1]) ? (arr_8 [i_0] [i_1] [i_2] [i_4]) : 31)))))) : (((arr_12 [i_0] [i_0] [i_0] [i_0] [10] [i_0]) * (max(var_4, -1))))));
                        arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = var_10;
                    }
                    var_22 = (min((!3414447545), (min(var_1, (((-7 ? 1 : 1)))))));
                    var_23 = ((~((((max(809737362, 6734413565349779046))) ? 98 : (!20)))));
                    var_24 = (~(~var_8));
                }
                for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_1] = var_12;
                    var_25 = ((((((arr_5 [i_5 + 2] [i_5 + 3] [i_5 + 2]) ? (arr_5 [i_5 + 2] [i_5 + 3] [i_5 + 2]) : (arr_5 [i_5 + 2] [i_5 + 3] [i_5 + 2])))) ? ((min((arr_5 [i_5 + 2] [i_5 + 3] [i_5 + 2]), (arr_5 [i_5 + 2] [i_5 + 3] [i_5 + 2])))) : ((var_8 ? (arr_5 [i_5 + 2] [i_5 + 3] [i_5 + 2]) : (arr_5 [i_5 + 2] [i_5 + 3] [i_5 + 2])))));
                    arr_18 [i_0] [4] [i_0] [i_0] = (((((arr_12 [2] [14] [i_5 + 3] [i_5 - 1] [0] [i_5 - 2]) > var_13)) ? -350551052 : (min((arr_12 [i_1] [3] [i_5 - 2] [i_5 + 2] [10] [i_5 - 1]), (arr_12 [14] [14] [i_5 - 1] [i_5 + 3] [i_5] [i_5 + 1])))));
                }
                for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    var_26 -= ((((((((~(arr_2 [i_1] [i_6])))) ? ((min(65535, var_10))) : var_2))) ? var_11 : 40966));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_27 = ((1 ? (arr_8 [i_0] [i_0] [i_6 + 3] [i_7]) : ((~(((arr_12 [i_0] [i_1] [i_6] [6] [6] [i_1]) ? (arr_3 [i_0]) : 1))))));
                                arr_26 [0] [0] [0] [i_7] [i_7] [i_8] = (min((!60272), (arr_25 [i_0] [12] [15] [i_0] [2])));
                            }
                        }
                    }
                    arr_27 [i_1] = (arr_7 [i_0] [i_1] [i_1] [3]);

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_28 = arr_0 [i_0];
                        arr_31 [1] [10] [i_6] [i_9] [i_9] = 116;
                        arr_32 [i_6] |= (~var_4);
                    }
                }
                var_29 = (((~3658225345) >= (((-(arr_6 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
