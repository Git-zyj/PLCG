/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 3763164793240733220;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_14 |= 3763164793240733237;
        var_15 = ((var_6 ? ((((!1) != (arr_1 [i_0])))) : ((((((max(var_3, 1)))) >= (max(-7, (arr_1 [i_0]))))))));

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_16 = (max(-var_8, (arr_2 [i_1 + 3])));
            var_17 &= (((((((var_11 > (arr_3 [i_0]))) ? (var_1 <= 18446744073709551614) : -var_5))) ? ((-((max((arr_3 [i_0]), 15))))) : 207));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_18 = max((arr_5 [i_0] [i_2]), ((65528 ? ((~(arr_1 [i_2]))) : (((1 + (arr_7 [i_2] [7])))))));
            var_19 = ((((~(max(6891377879063973932, 1)))) << ((((56945 - (max(92, 3371369578)))) - 923654659))));
            var_20 -= var_7;
            var_21 = (max(var_4, 9223372036854775807));
        }
        var_22 = ((1 ? ((var_9 ? 57374 : ((var_7 >> (28075 - 28051))))) : ((((max(var_9, var_3)))))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_23 = (arr_9 [i_3]);
        var_24 = ((((max((arr_9 [i_3]), -16384))) & var_5));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_25 = (((((arr_11 [i_3] [i_4]) ? -4404086568196403852 : (arr_11 [i_4] [23]))) + (((((var_4 & 8) <= (arr_8 [i_5])))))));
                    var_26 = 6819;
                    var_27 = (((var_7 ? var_11 : var_10)) < ((((arr_11 [i_3] [i_5]) ? var_0 : var_8))));
                    var_28 = ((~((var_8 ? (max(var_7, (arr_14 [i_3] [i_4] [i_5]))) : var_11))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_29 = ((var_10 + (max(((-(arr_15 [i_5]))), var_3))));
                                var_30 -= (max((max((arr_9 [i_3]), (arr_14 [i_3] [i_3] [i_3]))), (((!(arr_14 [i_3] [i_5] [i_7]))))));
                                var_31 = ((!(max((arr_16 [i_3] [21] [i_3] [i_3] [i_3]), (arr_16 [1] [i_6] [1] [i_3] [i_3])))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_32 = max(((((!var_10) * var_2))), var_7);
            var_33 = (((max(18446744073709551613, (var_6 & 5))) ^ var_11));
            var_34 = ((((max(var_3, var_0))) < (((arr_11 [i_3] [i_3]) - var_3))));
        }
    }
    for (int i_9 = 2; i_9 < 18;i_9 += 1)
    {
        var_35 = var_3;
        var_36 = var_3;
        var_37 = ((((~(max(-32761, 57885788)))) * (((((arr_11 [i_9 - 2] [i_9]) != 8))))));
        var_38 = (max((max(var_4, var_7)), var_0));
    }
    var_39 = ((var_1 > (((max((-690301982 == var_8), (var_8 >= var_0)))))));
    var_40 = (max((((max(var_11, var_5)) != (max(var_7, var_6)))), var_12));
    #pragma endscop
}
