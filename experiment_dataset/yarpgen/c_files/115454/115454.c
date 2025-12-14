/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    var_21 = ((var_11 ? (-127 - 1) : var_7));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_22 *= ((!((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0]))))));
        var_23 *= ((((min(-3607, 1989945486)) != (-648947246 < 8341478839515885494))));
        arr_2 [i_0] = ((-4462669036304184323 ? 2305021809 : 1));
        var_24 = (min(var_24, ((((543684588 % 23209) ? var_0 : ((min(-3608, ((543684588 ? 30 : 2305021808))))))))));
        var_25 += 1989945509;
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_26 &= (((arr_1 [i_1 + 1]) ? (((max(1989945503, 54492)) >> (((min(var_10, var_13)) + 5148624506902187233)))) : (arr_0 [i_1 + 3])));
        var_27 = (min(var_27, 197376019));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_28 &= ((!((min(1254827363, (var_5 < 2018318438))))));
                    var_29 = 50316;
                }
            }
        }
        arr_13 [i_1 + 1] &= ((((((arr_7 [i_1 + 3]) ? 4439812329219823299 : (arr_7 [i_1 + 3])))) ? (((arr_5 [i_1 - 1] [i_1]) * 3275090411)) : ((min((arr_12 [i_1] [i_1] [4]), (((arr_9 [4]) - (arr_9 [10]))))))));
    }
    #pragma endscop
}
