/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_11 = (max(var_11, ((min(((~(min(58987, (arr_7 [i_3] [i_2] [i_2] [i_3]))))), (((min(-2147483643, 3582484439)))))))));
                            var_12 = ((((min((arr_6 [i_0 - 1]), (arr_0 [i_0 - 1])))) ? (((arr_6 [i_0 - 1]) & (arr_6 [i_0 - 2]))) : (((arr_9 [i_1] [i_0 - 2] [i_2]) ? (arr_6 [i_0 - 1]) : 1054980913))));
                            var_13 = 11434497773103247952;
                            var_14 ^= ((arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 2]) ? (((((((arr_6 [i_2]) ? var_9 : (arr_6 [16])))) ? (((arr_0 [i_3]) - 3834920487)) : (arr_9 [i_1] [i_2] [i_3])))) : ((-2 - (((arr_10 [i_0] [i_1] [i_2] [i_3]) ? var_10 : (arr_0 [i_2]))))));
                        }
                    }
                }
                var_15 = ((-(((var_3 == 6548) & (var_8 & var_10)))));
            }
        }
    }

    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        var_16 = ((((!((((arr_9 [i_4 - 2] [i_4 - 2] [i_4 - 1]) ? var_6 : (arr_2 [i_4])))))) ? ((max((arr_10 [i_4 - 2] [i_4] [i_4] [i_4 + 1]), (((((arr_8 [11] [i_4]) + 9223372036854775807)) >> (((arr_5 [i_4]) - 16587895726548632393))))))) : ((-4651289972641531663 ? (arr_6 [i_4]) : (((~(arr_10 [i_4 - 2] [i_4] [i_4 - 1] [i_4]))))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        var_17 += (-((460046789 ? (arr_20 [16] [i_5] [i_6]) : (arr_20 [i_4 - 2] [i_6] [i_4 - 2]))));
                        arr_25 [i_4] [i_4] = (((arr_1 [i_4 + 1]) * (((arr_1 [i_4 + 1]) + (arr_1 [i_4 + 1])))));
                        arr_26 [i_7] [i_4] [i_4] [i_4] = ((~(((((14225955618977386289 ? var_3 : var_1))) ? var_5 : var_0))));
                        var_18 = ((((min((arr_7 [i_7] [i_6] [i_5] [i_4]), (arr_5 [i_5])))) ? (((-(arr_22 [i_4 - 2] [i_4])))) : (((arr_19 [i_4 - 2]) ? (arr_10 [i_4 + 1] [i_5] [i_6] [6]) : (arr_7 [i_5] [i_7] [i_7] [i_6])))));
                        var_19 = (max(var_19, ((min((var_6 && -11434497773103247952), (((arr_0 [i_4 + 1]) || (arr_0 [i_4 - 2]))))))));
                    }
                }
            }
        }
        arr_27 [i_4] = ((!((min(3834920512, 58987)))));
        arr_28 [10] |= ((-(min((~var_0), var_1))));
    }
    #pragma endscop
}
