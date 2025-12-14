/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = 25872;
        var_11 += ((~((718599595703673350 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    var_12 += ((((-var_10 ? (!var_10) : var_3)) & var_8));

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_5 [i_1] = ((((((arr_3 [i_1]) | (arr_3 [i_1])))) ? (0 ^ var_3) : ((max((!1081476494), (!var_7))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_13 = (min(var_13, (((~(min((arr_12 [i_3] [i_3] [i_2] [i_1]), 1938662921)))))));
                    var_14 = -75;
                }
            }
        }
        arr_14 [i_1] [i_1] = (arr_12 [i_1] [i_1] [i_1] [i_1]);
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_23 [i_6] [i_6] [i_6] = (((((((~(arr_19 [i_6] [i_4]))) << (((arr_12 [i_4] [i_4] [i_4] [i_4]) - 13436))))) ? ((70 ? (arr_11 [i_4 + 3] [i_4 + 1] [i_4 + 1] [i_4 + 1]) : ((2707580558 ? 39022 : -25873)))) : ((min((arr_7 [i_4]), (arr_8 [i_4] [i_5]))))));
                    arr_24 [i_4] [i_4] [i_4 + 3] [i_4] |= ((!(var_5 - 14998577549074070628)));
                }
            }
        }
        var_15 = (min(3799613195376738300, (((1 << (((var_8 - 1163712417) - 3131255052)))))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        {
                            arr_39 [i_8] [i_10] [i_11] = var_5;
                            arr_40 [i_7] [i_7] [i_7] [i_7] [i_8] [i_10] [i_11] = var_5;
                            var_16 = var_9;
                        }
                    }
                }
            }
            var_17 = (((arr_31 [i_7] [i_7] [i_8]) ? var_8 : var_7));
        }
        for (int i_12 = 3; i_12 < 22;i_12 += 1)
        {
            arr_43 [i_7] &= var_3;

            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {

                /* vectorizable */
                for (int i_14 = 1; i_14 < 22;i_14 += 1)
                {
                    var_18 &= ((((((arr_31 [i_13] [i_12] [i_13]) + var_5))) ? -36028797018963968 : (((955471128 >> (((arr_44 [i_14] [i_13] [i_12]) - 1502081615059362663)))))));
                    var_19 = (max(var_19, ((var_7 <= (arr_6 [i_12 + 1] [i_12 - 1])))));

                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        var_20 = (3818854527 < 46254);
                        arr_51 [i_7] [i_12] [i_13] [i_14 - 1] [i_15] = ((18237827911320943331 * (!var_6)));
                    }
                }
                var_21 = (min(var_21, (((!((((arr_4 [i_12 - 2] [i_12 - 1]) ? (arr_4 [i_12 + 2] [i_12 - 1]) : 4216254126))))))));
                var_22 = (max(var_22, ((min(25872, 14647130878332813315)))));
            }
        }
        var_23 = var_6;
    }
    var_24 = var_9;
    #pragma endscop
}
