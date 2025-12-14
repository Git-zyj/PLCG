/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((var_9 ^ var_9) ? ((var_1 ? var_1 : var_4)) : ((var_7 ? var_6 : var_1))))) ? (((~var_7) ? (var_0 | var_9) : (2229168506492272309 & 4088))) : var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = ((((min((!var_4), (9223372036854775807 ^ var_3)))) ? (((arr_2 [i_0] [i_1 - 1]) + var_3)) : (var_1 == var_5)));
                    arr_7 [i_0] [i_1] [i_2] = ((!((min(var_1, 59232)))));
                    var_12 *= ((~((var_3 ? (arr_5 [i_0] [i_1 + 2]) : (arr_4 [i_0] [i_1 + 2])))));

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_13 = var_7;
                        arr_12 [i_0] [i_1] [i_1] [i_3] [i_3] = ((((var_8 != (arr_11 [i_1] [i_1] [i_3] [i_3 - 1]))) ? (((arr_10 [i_3] [i_1] [i_1 + 1] [i_3 - 1]) ? var_7 : var_4)) : (-10 && 60)));
                        arr_13 [i_0] [i_1] [i_3] [i_3] = ((!((!(var_8 / var_2)))));
                        arr_14 [i_0] [i_3] = ((((((!var_9) != (!var_8)))) ^ (arr_8 [i_0] [i_3 + 1] [i_3] [i_3] [i_3] [i_3])));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        var_14 ^= (((((max(var_1, var_9)) ^ (var_9 && var_3))) >= (max(var_8, (((var_7 ? var_9 : var_4)))))));
                        arr_18 [i_0] [i_1] [i_1] [i_2] [i_4] = (max((((!((max(60, (arr_17 [i_0] [i_1] [i_2] [i_4]))))))), (((((-98 ? var_4 : var_2))) ? (max((arr_16 [i_1]), var_8)) : var_5))));
                        arr_19 [i_0] [i_1] [i_2] [i_4] = var_4;
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_15 += (((((!((((arr_3 [i_1]) ? var_7 : var_6)))))) * (arr_2 [i_1 + 2] [i_2])));
                        var_16 = ((!(((var_2 + (arr_4 [i_1 + 1] [i_2]))))));
                        var_17 |= ((!((max(var_7, (arr_2 [i_1] [i_1]))))));
                        var_18 ^= ((((65532 ? 0 : (arr_9 [i_0] [i_1] [i_2] [i_5] [i_5])))) ? (((arr_2 [i_1 + 3] [i_1 + 1]) ? var_2 : var_1)) : (((arr_16 [i_1 + 1]) | var_3)));
                        var_19 = (((((((max(var_8, (arr_20 [i_1] [i_2]))) <= var_0)))) - (((((var_1 ? var_0 : 9223372036854775807))) ? 9 : (min(var_8, var_4))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
