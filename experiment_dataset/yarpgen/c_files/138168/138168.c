/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    var_17 = (((~var_11) ? var_10 : var_15));
    var_18 += (((((((var_4 ? var_15 : 0))) == (3850 - var_7))) ? (min((!var_2), ((var_7 ? 61673 : var_1)))) : var_14));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 -= (max((max((arr_6 [i_1 - 1] [i_1 - 1] [i_1]), (arr_5 [i_0 - 2]))), (arr_5 [i_0 - 1])));
                    arr_10 [i_1 - 1] [i_1 - 1] [i_1] = ((((((arr_0 [i_1 - 1]) ? 3850 : 23154))) ? (arr_7 [i_0] [i_1] [i_0] [i_2]) : (((!(arr_8 [i_0 - 2] [i_1] [i_1 - 1] [i_1 - 1]))))));
                    var_20 *= 6021411734770312437;

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_1] = (((arr_1 [i_3 - 1] [i_3 - 1]) ? (min((((arr_5 [i_1]) ? var_1 : 15273687120323774944)), (((var_10 ? var_15 : (arr_1 [i_0] [i_3])))))) : (arr_9 [i_3 + 1] [i_3 + 1] [i_1])));
                        var_21 += (((((((-12537 && (arr_1 [i_3] [i_0])))))) ? (((arr_0 [i_3 - 1]) | (((arr_11 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2]) ? (arr_11 [i_0] [0] [0] [0] [i_2] [5]) : 3948901279165411873)))) : ((min(((~(arr_7 [i_0] [10] [i_0] [i_3]))), (!var_7))))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_22 = ((((((~(arr_12 [i_2] [i_2] [i_0]))))) ? (arr_0 [i_0 + 1]) : ((((min(255, 992))) ? (max((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]), (arr_8 [i_4] [i_1] [i_1] [i_0]))) : ((1 / (arr_1 [6] [i_2])))))));
                        arr_17 [i_1] [i_1] = (arr_7 [i_2] [i_1] [i_2] [i_2]);
                        var_23 += ((((min(((var_0 ? (arr_1 [i_0] [i_0]) : -5)), ((((arr_4 [3]) || 11463)))))) ? ((((arr_16 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0] [0]) ? (arr_16 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0] [i_0 - 2] [10]) : (arr_16 [i_0 + 1] [i_0] [i_0 - 2] [2] [i_0] [0])))) : 15273687120323774950));
                    }
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        var_24 = ((!((((arr_15 [i_1] [i_0] [i_0] [i_0 - 2]) / var_5)))));
                        var_25 = (min((((arr_19 [i_0 - 2] [i_5 + 1] [i_5] [i_0 - 2] [i_1]) ? (arr_19 [i_0 - 1] [i_5 - 1] [9] [9] [i_1]) : (arr_19 [i_0 + 1] [i_5 + 1] [i_0 + 1] [4] [i_1]))), (max((((arr_11 [i_0] [i_0] [i_0] [i_2] [i_2] [i_5]) ? (arr_19 [i_0] [0] [i_0] [i_0] [i_1]) : var_1)), (arr_9 [i_0] [i_1 - 1] [i_1])))));
                    }
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        arr_23 [i_1] = ((var_14 % ((var_10 ? (arr_19 [i_0] [i_0] [i_0 - 2] [i_0] [i_1]) : (arr_5 [i_6 + 1])))));
                        var_26 ^= ((+((((((arr_21 [i_0] [i_0] [i_2] [i_0]) ? 289653285 : 1))) ? (((arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_6]) ^ 20903)) : 3843))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
