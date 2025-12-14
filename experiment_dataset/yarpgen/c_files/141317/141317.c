/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_13 = (min((arr_1 [i_0]), (((((-4794775142760530448 ? (arr_1 [i_0 - 1]) : var_6))) ? var_11 : (max((arr_1 [i_0 + 4]), (arr_1 [i_0])))))));
        var_14 = (((((((arr_0 [0]) < var_10)) ? var_12 : 4967))) ^ (~1542193989514252779));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_15 = (min(var_15, (arr_3 [i_1])));
        var_16 = (max(var_16, (arr_2 [i_1 - 1])));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_17 = var_6;
                        var_18 = ((((((32704 << (arr_10 [i_1]))) < (arr_0 [i_1 - 1]))) ? 1663060091 : -4794775142760530474));
                    }
                }
            }
            var_19 = (max(var_19, (((((!((((arr_3 [i_2]) % var_3))))) && (arr_6 [13]))))));
        }
        for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
        {
            arr_17 [i_1] = 198;
            arr_18 [i_1] [i_1] = ((-(((arr_5 [i_1 - 1]) ? (arr_5 [i_1 + 1]) : 108))));
            var_20 |= ((+(((((arr_4 [8]) ? var_2 : var_1)) / ((((arr_1 [i_5]) ? (arr_5 [i_5]) : (arr_0 [8]))))))));
        }
        for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
        {
            arr_21 [i_1] = ((var_5 ? (max((min(800974569, (arr_13 [i_1 + 1] [i_1] [i_6 + 2] [i_6]))), (~-1789486808))) : (((((((arr_9 [i_6] [i_6] [i_6]) >> (var_9 - 562853756)))) ? (arr_9 [i_1 - 1] [i_1 + 1] [i_1 + 1]) : (((arr_20 [i_1] [i_6]) << (((arr_11 [i_1] [i_1] [10]) - 10162)))))))));
            var_21 = (((!66) ? ((((-(arr_16 [i_1] [i_1]))) + (((arr_7 [i_1] [i_1] [i_6]) - (arr_0 [i_6]))))) : ((var_12 ? ((21 ? (arr_2 [i_1]) : (arr_6 [i_6]))) : (((arr_13 [i_1] [i_6] [i_6 + 2] [i_6]) ? -5724 : (arr_7 [i_1] [i_1] [i_1 - 1])))))));
            var_22 = (min(((-(arr_19 [i_1]))), ((min((arr_9 [10] [11] [10]), var_0)))));
        }
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_23 = ((~(arr_22 [i_7])));
        var_24 = ((!(((+(((arr_22 [i_7]) ? (arr_22 [i_7]) : (arr_22 [i_7]))))))));
        var_25 = ((~var_8) ? (((((arr_24 [i_7]) || (arr_22 [i_7]))) ? -1281249595238393408 : (((arr_22 [i_7]) ? var_4 : (arr_23 [i_7]))))) : ((-(arr_22 [i_7]))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 24;i_9 += 1)
            {
                {
                    var_26 *= 31802;
                    var_27 ^= ((((((var_3 ? (arr_26 [i_7] [i_9]) : (arr_25 [i_8])))) ? ((1874549873 ? var_8 : -1158517677)) : (arr_27 [i_8]))));
                }
            }
        }
    }

    for (int i_10 = 2; i_10 < 23;i_10 += 1)
    {
        var_28 &= ((((((arr_34 [1]) ? (arr_34 [6]) : (arr_26 [i_10] [i_10 + 2]))) ^ (arr_29 [i_10] [8] [i_10] [i_10 + 2]))) % (min((min(var_9, (arr_25 [0]))), ((((arr_31 [i_10] [i_10] [i_10] [i_10 - 2]) / (arr_33 [20] [i_10])))))));
        var_29 = (max(var_29, ((max((((+((((arr_26 [i_10] [i_10]) >= (arr_34 [1]))))))), (arr_24 [i_10 - 2]))))));
    }
    #pragma endscop
}
