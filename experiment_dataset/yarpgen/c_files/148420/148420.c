/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((!var_6) || (((var_14 ? (-127 - 1) : var_13))))) ? var_2 : ((-(var_5 / var_4))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_17 = 102;
        arr_4 [i_0] = var_10;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] = var_7;

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(((~var_1) || (arr_3 [i_0])))));
                        var_18 += ((((((min((arr_0 [i_1]), var_4)) == (((~(arr_6 [i_0] [i_0] [i_0]))))))) >= (((!(((-1029361296 ? var_12 : var_1))))))));
                        var_19 = (max((arr_8 [i_0] [i_0] [i_0]), (arr_12 [i_2])));
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        arr_18 [i_0] = (((((((((arr_7 [i_4]) & var_11)) != var_0)))) == var_5));
                        arr_19 [i_0] = (arr_15 [i_2] [i_2 + 2] [i_2] [i_2 - 2] [i_2 + 1]);
                        arr_20 [i_0] = var_8;
                    }
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min((((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) & var_6)), var_13));
                        arr_25 [i_2] [i_2] = ((!(((-(((arr_2 [i_0]) | var_2)))))));
                    }
                    var_20 = ((~((max(118, -32355)))));
                    var_21 = (arr_0 [i_2]);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
    {
        arr_29 [i_6] = ((~(arr_28 [i_6])));
        var_22 -= (((((var_4 ? (min(4653838404994785630, (arr_7 [i_6]))) : var_14))) ? (((-var_7 << (((arr_15 [i_6] [i_6] [i_6] [i_6] [i_6]) >> (512 - 503)))))) : (((((var_4 << (((arr_5 [i_6] [i_6] [i_6]) - 58935))))) ^ (((arr_28 [i_6]) * var_0))))));
        arr_30 [i_6] = (~118);
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
    {
        arr_33 [i_7] = (((arr_26 [i_7] [i_7]) ? (var_2 + var_6) : -32752));
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {
                    {
                        arr_40 [i_7] [i_7] [i_7] = (((((arr_17 [i_7] [i_7] [i_7] [i_7] [i_7]) ? (((arr_3 [i_10]) ? var_4 : var_15)) : ((((!(arr_32 [i_8] [i_8]))))))) - (arr_32 [i_7] [i_7])));
                        arr_41 [i_7] [i_7] [i_7] [i_7] [i_7] = ((((((((arr_3 [i_10]) >> (((arr_9 [i_7] [i_7] [i_7]) - 11497))))) ? 3 : ((((arr_11 [i_7] [i_7] [i_7] [i_7]) >> (((arr_1 [i_10]) + 1443858985))))))) % ((min(1029361282, -var_14)))));
                        var_23 = (min((((((2124740768 - (arr_31 [i_8]))) != -1029361269))), (((((32 ? 1 : 4653838404994785629))) ? ((3640562336 ? 4433230883192832 : var_3)) : -745578170))));
                    }
                }
            }
        }
        arr_42 [i_7] = (!(arr_34 [i_7] [i_7]));
    }
    var_24 = ((!(((max(0, var_15)) < (min(var_10, var_12))))));
    var_25 = var_11;
    var_26 = (min((((var_12 >> (var_7 + 1827397526)))), var_5));
    #pragma endscop
}
