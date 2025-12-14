/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!((((var_7 ? var_13 : var_3))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = (min(((~(((!(arr_1 [i_0])))))), (((arr_0 [i_0]) * (arr_0 [i_0])))));
        arr_2 [i_0] = (((arr_1 [i_0]) | (-var_4 | var_2)));
        var_20 = (max(var_20, (((var_1 + (min((arr_0 [i_0]), var_8)))))));
        var_21 = (max(((max((max((arr_1 [i_0]), var_5)), var_0))), (+-6)));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        var_22 = (min(((((((arr_4 [i_1]) ? var_16 : (arr_3 [i_1])))) ? (arr_4 [i_1]) : (arr_0 [i_1 - 3]))), (((-22915 * (var_15 | 12948))))));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_23 = ((!((min((max((arr_4 [i_3]), (arr_12 [i_1] [i_1] [i_1] [i_1] [i_4]))), (arr_8 [i_1 - 2] [i_1 - 2] [i_1 - 3] [i_1 - 2]))))));

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_16 [i_1] = arr_11 [i_1] [i_2] [i_5];
                            arr_17 [i_1 - 1] [i_1 - 1] [i_3] [i_3] [i_5] = (((((-(arr_9 [i_1 - 3])))) % (max(-var_14, var_0))));
                            var_24 *= (max((((((arr_4 [i_1 + 1]) + 9223372036854775807)) << (((arr_1 [i_1 - 1]) - 64619812)))), ((~(((arr_6 [i_1]) ? (arr_4 [i_1]) : var_0))))));
                            var_25 *= ((((((arr_14 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 3] [i_1] [i_1 - 3]) < (arr_8 [i_1] [i_1] [i_1 - 2] [i_1])))) > ((~((var_15 / (arr_12 [i_1] [i_1] [i_3] [i_3] [i_1])))))));
                            arr_18 [i_5] [i_1] [i_1] [i_1] [i_1] = ((+(((!2663035813) + -8239893731463807647))));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_26 = (min(-22915, -6601441006956570963));
                            arr_21 [i_1] [i_1] [i_3] [i_4] [i_3] = var_8;
                        }
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            var_27 = (max(var_27, ((max((1426714440 <= 11158), (max((((var_9 ? var_13 : var_1))), ((var_10 ? var_8 : var_9)))))))));
                            var_28 = ((~(max(var_6, var_11))));
                        }
                        var_29 |= (max(((~(arr_23 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1]))), ((var_13 / (arr_22 [i_2] [i_2] [i_2] [i_2] [i_2])))));
                    }
                }
            }

            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    var_30 = (min(var_30, (((((max((arr_23 [i_1 - 2] [i_2] [i_8] [i_9]), (arr_23 [i_1] [i_1] [i_8 + 2] [i_9])))) || ((((arr_23 [i_1] [i_2] [i_8] [i_9]) ? (arr_23 [i_1] [i_1] [i_1 - 1] [i_1]) : (arr_23 [i_1] [i_1 - 1] [i_1 + 1] [i_1])))))))));
                    arr_29 [i_9] [i_8] [i_2] [i_1] = (((((arr_4 [i_8 + 1]) / var_1)) / (((-(arr_12 [i_8 + 1] [i_8] [i_8] [i_8 + 1] [i_8 + 3]))))));
                }
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    var_31 = (max(var_31, (((((((arr_1 [i_8 + 3]) * (arr_1 [i_8 + 2])))) || ((((arr_1 [i_8 + 3]) ? var_1 : (arr_1 [i_8 + 2])))))))));
                    var_32 ^= (max(((((~(arr_14 [i_10] [i_8] [i_2] [i_1] [i_1] [i_1] [i_1]))) << (((((((arr_4 [i_8]) / var_1)) + 22190500404710219)) - 18)))), ((((arr_25 [i_10] [i_8 + 3] [i_1] [i_1]) != (var_14 / var_15))))));
                }
                arr_32 [i_1] [i_2] [i_8] = ((((max(-18, 6))) ? 4294967295 : (((0 * (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
            }
            /* vectorizable */
            for (int i_11 = 3; i_11 < 16;i_11 += 1)
            {
                var_33 = (min(var_33, (((-(arr_35 [i_11 - 3] [i_1 + 1]))))));
                arr_36 [i_1] [i_1] [i_1] = (arr_15 [i_1 + 1] [i_1 - 2] [i_1] [i_1 + 1] [i_2] [i_1]);
            }
            var_34 ^= (((arr_13 [i_2] [i_2] [i_2] [i_1 - 1] [i_2] [i_1]) ? (arr_13 [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [i_2]) : (arr_13 [i_1] [i_2] [i_1] [i_1 - 2] [i_1 - 2] [i_2])));
            var_35 &= (!6601441006956570957);
        }
        var_36 = (min(var_36, (((((+(((arr_11 [i_1] [i_1] [i_1]) & var_16)))) == (((((var_0 ^ var_9) || ((((arr_20 [i_1] [i_1 - 3] [i_1] [i_1] [i_1]) | (arr_5 [i_1] [i_1 + 1])))))))))))));
    }
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        var_37 = var_1;
        var_38 &= 11827;
    }
    var_39 &= (max(var_14, (((-var_17 <= (((var_2 ? var_7 : var_4))))))));
    #pragma endscop
}
