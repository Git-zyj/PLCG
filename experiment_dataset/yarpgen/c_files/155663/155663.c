/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_12 = -1478418940;
        arr_3 [i_0] = (((((((-127 - 1) + 332592934)) * (!var_8)))) ? var_3 : ((min(0, (-32767 - 1)))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_0 + 1] [i_0] [i_1] = ((16380 ? ((~(arr_4 [i_0] [i_1] [i_0]))) : var_11));
            var_13 = (-(arr_5 [i_0] [i_0] [i_0]));
            var_14 = var_7;
        }
        var_15 = ((+(((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 1])))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = var_3;
        arr_10 [16] |= (-(arr_0 [i_2 + 2]));
        var_16 = (((arr_5 [i_2] [i_2 - 1] [i_2]) ? -1943795008 : (arr_5 [i_2 + 2] [i_2 - 2] [i_2])));
    }
    for (int i_3 = 2; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_17 = min((min(var_8, (arr_2 [i_3] [i_3]))), ((((arr_2 [i_3 - 1] [i_3]) >= (arr_2 [i_3] [i_3])))));
        arr_15 [i_3] = ((((((var_0 ? (arr_4 [i_3] [i_3 + 1] [i_3]) : (arr_1 [i_3 - 2]))) >> (((arr_13 [i_3 + 1]) - 1300417819))))) ? (arr_4 [i_3 - 1] [5] [i_3]) : ((((max((arr_12 [i_3 + 1]), (arr_0 [i_3])))) ? (min(var_9, (arr_13 [i_3]))) : (!-1943795008))));

        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                var_18 = ((((((((var_5 - (arr_12 [i_4])))) ? (((arr_14 [i_3]) ? 1943795007 : (arr_14 [i_3]))) : (min((arr_5 [13] [i_4 - 1] [i_3]), (arr_20 [i_3 - 1] [i_4 + 1] [i_5])))))) ? ((-var_5 ? (arr_20 [i_3] [i_3] [i_5]) : var_1)) : ((-((-1 ? var_4 : var_6))))));
                arr_21 [i_3] [i_3] [i_3] = (max((min(var_11, (arr_12 [i_3 - 1]))), ((min(var_6, (arr_12 [i_4 - 1]))))));

                /* vectorizable */
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    var_19 = (((arr_12 [i_3 + 1]) ? -var_10 : (!11432)));
                    var_20 -= -442575184;
                    var_21 = 0;
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_27 [i_3 + 1] [i_3] [i_5] [i_3 + 1] [i_3] [i_7] = min((((!(((1 * (-32767 - 1))))))), ((((max((arr_14 [i_3]), (arr_16 [i_3] [i_3] [i_5])))) ? (((!(arr_18 [i_3 + 1] [i_5] [i_7])))) : (arr_25 [i_3] [i_4] [i_3]))));
                    arr_28 [i_3] [i_4 + 1] [4] [i_7] &= var_6;
                    var_22 = (max(var_22, ((((min(((var_11 ? (arr_2 [i_3 - 1] [0]) : 0)), (min(var_6, (arr_16 [0] [i_4] [8])))))) ? 1943795007 : (((arr_14 [6]) ? var_11 : (arr_14 [10])))))));
                }
            }
            arr_29 [i_3] = (((arr_24 [4] [i_3] [i_3] [i_3]) + var_2));
        }
    }
    for (int i_8 = 2; i_8 < 11;i_8 += 1) /* same iter space */
    {
        var_23 = ((((min(var_7, 32767))) ? ((var_3 * (((-32767 - 1) ? 0 : 26470)))) : (((((var_10 ? (-9223372036854775807 - 1) : var_0)) == (((max(896, (-32767 - 1))))))))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    {
                        var_24 = (-127 - 1);
                        var_25 = arr_37 [i_8 - 2];
                        arr_38 [i_8 - 1] [i_8] [i_9] [i_9] [i_8] [i_11] = ((var_6 ? var_1 : ((((min(var_11, (arr_5 [i_9] [i_10] [i_8])))) ? (arr_32 [i_8 - 1] [i_8 - 1] [i_8]) : -var_5))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 11;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        var_26 = ((!(arr_13 [i_13 + 1])));
                        var_27 = (((((arr_5 [i_8 - 2] [i_12] [i_8]) ? var_7 : (arr_18 [i_8] [i_12] [i_13 + 1]))) == ((((0 > (arr_36 [i_12] [i_13 + 1]))) ? -922481689 : (arr_7 [i_8 + 1])))));
                        var_28 = (max(var_28, ((((arr_30 [i_12]) * var_4)))));
                        var_29 = (max((min((min(var_8, (arr_16 [i_8] [i_12] [i_8]))), (((arr_11 [i_13 - 1]) ? (arr_5 [i_8] [i_12] [i_8]) : (arr_18 [i_14] [i_12] [i_8 - 2]))))), (((var_10 < (min((arr_40 [i_8]), (arr_18 [i_8] [i_12] [i_14]))))))));
                    }
                }
            }
        }
    }
    var_30 = (((min(var_8, (!1943795007)))));
    var_31 = ((((((((var_3 ? var_7 : var_8))) ? var_1 : var_7))) ? var_3 : var_2));
    #pragma endscop
}
