/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((((var_6 ? var_3 : var_0))));
    var_14 = var_10;
    var_15 = var_11;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_16 = var_5;
        var_17 = (i_0 % 2 == zero) ? ((min((((((!(arr_1 [i_0])))) % ((((arr_1 [i_0]) >= var_8))))), (((var_6 & var_1) ? var_12 : (var_4 && var_7)))))) : ((min((((((!(arr_1 [i_0])))) * ((((arr_1 [i_0]) >= var_8))))), (((var_6 & var_1) ? var_12 : (var_4 && var_7))))));
        arr_2 [i_0] = var_12;
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_18 = (arr_3 [i_1]);

        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_19 ^= (arr_6 [i_1] [i_1]);
            arr_8 [i_1] [i_2] = ((var_0 <= (arr_3 [i_1])));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_20 -= ((max((((arr_7 [i_3] [i_4 + 2] [i_6]) + (arr_14 [i_1] [i_4] [i_4] [i_5]))), (~var_9))));
                            var_21 = (~var_1);
                        }
                    }
                }
            }
            arr_20 [i_3] = ((+(((-var_5 > (((((arr_10 [i_1]) != var_7)))))))));
            var_22 = (((50167 || 156) + (((-(~var_12))))));
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {
            var_23 = (!var_7);
            var_24 = ((((min((arr_10 [i_7]), (((arr_7 [i_1] [i_7] [i_1]) - var_8))))) ? -var_12 : ((-(arr_19 [i_1 + 2] [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2] [i_1] [i_1])))));

            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {
                var_25 = (((((~((max((arr_6 [i_7] [i_8]), var_8)))))) >= (max((((!(arr_5 [i_7])))), ((var_12 ? (arr_14 [i_1 + 2] [i_7] [i_8] [13]) : (arr_12 [13] [13] [i_7] [i_1])))))));
                var_26 = var_11;
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                var_27 = (min(var_27, (((((!(arr_16 [i_1] [i_7] [i_7] [19] [i_7] [i_1])))) ^ (((!(arr_27 [i_1]))))))));
                var_28 = (min(var_28, (((+(((arr_27 [i_9]) << (var_9 - 6646317325912121447))))))));
                arr_30 [i_9] |= ((((((arr_22 [i_7] [i_1 - 1]) ? (arr_12 [i_1] [10] [i_7] [i_9]) : (arr_18 [i_1] [i_7])))) * var_5));
            }
        }
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        var_29 &= (!var_4);
        var_30 = (min(var_30, ((((((var_10 ? (((arr_25 [i_10] [i_10] [i_10] [i_10]) ^ (arr_18 [i_10] [6]))) : (((arr_9 [11] [11] [i_10]) ^ (arr_3 [i_10])))))) ? var_7 : (((((var_7 | var_1) >= (((((arr_13 [i_10] [i_10] [i_10] [i_10]) >= (arr_4 [2] [i_10]))))))))))))));
    }
    #pragma endscop
}
