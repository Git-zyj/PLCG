/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((max(var_13, (((((min(var_9, var_5))) ? var_3 : (var_4 != 4924114069333448606)))))))));
    var_16 = (!var_13);

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_17 = ((1 ? -519171559159522489 : 1));

                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            var_18 ^= ((~(min(var_2, ((16 ? 1 : var_3))))));
                            var_19 += (arr_0 [i_3] [i_4]);
                        }
                        for (int i_5 = 3; i_5 < 24;i_5 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_0 + 1] [i_0] [i_5] = 3795762653;
                            var_20 = (max(var_20, (min(var_8, (max((~var_1), ((min(499204638, 499204643)))))))));
                            var_21 = (max((((arr_3 [i_0]) ? (arr_7 [i_5]) : (arr_1 [i_0] [i_0 + 1]))), (((!(-9223372036854775807 - 1))))));
                        }

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_22 = 27;
                            var_23 = var_13;
                            arr_18 [i_0] [i_0] = 11;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_24 = 1;
                            arr_21 [i_0] [i_0] [i_0] [i_3] = ((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1 + 1] [i_2]), (arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1 - 1] [i_1]))));
                            var_25 = (max(((var_10 ? (arr_19 [i_0] [i_0] [i_0 + 3] [i_0] [i_0]) : 63)), ((((arr_19 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 4]) != var_11)))));
                        }
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            arr_24 [i_8] [i_0] = var_9;
            arr_25 [i_0] [i_8] [i_0] = ((((((~(var_13 / var_13))) + 9223372036854775807)) >> (-11 < 3795762653)));
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            arr_28 [i_0] [i_0] [i_0] = (min((min((arr_1 [i_0] [i_0 + 3]), (arr_9 [i_0] [i_0]))), 4));
            var_26 = ((((((~var_2) ? (min(var_8, 4250502824)) : 57340))) ? (((!((!(arr_6 [i_9] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])))))) : -1567674347));
        }
        for (int i_10 = 1; i_10 < 24;i_10 += 1)
        {
            var_27 = (max(var_27, (((!(((-(arr_26 [i_0] [1])))))))));
            arr_32 [i_0] [i_0] [i_0] = var_4;
            var_28 = 1754;
            var_29 = -14;
            arr_33 [i_0] [i_0] = ((-(((arr_2 [i_0]) ? var_13 : var_14))));
        }
        for (int i_11 = 4; i_11 < 21;i_11 += 1)
        {
            var_30 = (max(var_30, 1754));
            var_31 = ((-(min((arr_23 [i_11] [i_0 - 3]), ((2184812452460325259 ? (arr_11 [i_0] [i_0] [i_11] [i_0] [i_11] [i_11] [i_11]) : 66))))));
        }
    }
    #pragma endscop
}
