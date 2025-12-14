/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (max(var_14, (-9223372036854775807 - 1)));
        var_15 = (min(var_15, (((((((((10105 ? -7931613841704483233 : var_6))) * 0))) ? ((var_12 ? (((var_2 / (arr_1 [1])))) : ((16777215 ? (arr_1 [1]) : -7931613841704483233)))) : (((max((arr_0 [8] [13]), (arr_0 [i_0] [i_0]))))))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_16 = (max(var_16, 39906));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_17 = (min(var_17, (((var_7 ? (var_4 <= 723130614) : var_2)))));
            var_18 = (arr_3 [21]);
            var_19 = (arr_5 [i_1] [i_2]);
            arr_8 [i_1] [11] = 1487354744;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_20 = (max(var_20, 3571836682));
                        var_21 = ((((!(arr_6 [i_2] [i_4]))) || 16777222));
                        var_22 = (max(var_22, ((((((10 << (((arr_5 [i_1] [i_3]) - 488146624))))) ? ((var_10 ? (arr_6 [i_2] [i_2]) : 0)) : (arr_13 [i_1] [i_2] [9] [i_2] [i_1] [17]))))));
                        var_23 = (max(var_23, ((((arr_2 [i_3]) > 1)))));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_24 = 1;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        var_25 = (max(var_25, ((min(((max((arr_5 [i_1] [i_1]), (arr_18 [i_1])))), (max((arr_5 [i_1] [16]), var_6)))))));
                        var_26 = (min((((-((-(arr_25 [i_6] [0])))))), (max(((var_6 ? var_11 : (arr_19 [i_1] [i_1] [i_1]))), ((((arr_9 [i_1] [i_5]) - -4396493583167457232)))))));
                        var_27 = (((arr_9 [i_1] [i_5]) + (min((arr_9 [i_5] [i_7]), (arr_9 [i_1] [i_6])))));
                        var_28 = (min(var_28, ((min((min((((16777222 ? var_4 : var_6))), (18446744073709551615 - var_9))), (((((((arr_22 [i_7] [i_1] [i_6]) ? 0 : 65531))) ? (~723130614) : (max((arr_6 [i_6] [i_5]), var_6))))))))));
                    }
                }
            }
            var_29 = ((((max((((0 >= (arr_4 [i_1])))), (arr_18 [i_1])))) && (arr_18 [i_5])));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_30 = (max(var_30, (((max(4621964755494007700, (arr_27 [i_1] [i_8]))) * ((max((((arr_9 [i_1] [i_8]) ? (arr_26 [7]) : (arr_10 [i_1] [i_1] [i_8] [i_8]))), var_12)))))));
            var_31 = ((+((-((var_13 ? (arr_12 [i_1] [i_1]) : var_0))))));
        }
        for (int i_9 = 1; i_9 < 21;i_9 += 1)
        {
            var_32 = (max(var_5, (var_6 / var_0)));
            var_33 = ((max(var_3, (arr_19 [16] [i_9 - 1] [i_9]))));
            arr_31 [i_1] = ((-(max((arr_21 [i_9 + 1] [i_9 - 1]), (arr_21 [i_1] [i_9])))));
            var_34 = (max(var_34, ((-(max(680801090, ((((arr_11 [i_9 + 1] [i_9 + 1] [21] [i_1]) ? -547143722 : -16)))))))));
            arr_32 [i_1] = (min((min((arr_15 [i_9 - 1] [i_9 - 1] [i_9] [i_9] [15]), (arr_15 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9] [i_9]))), 102));
        }
    }
    /* vectorizable */
    for (int i_10 = 4; i_10 < 20;i_10 += 1)
    {
        arr_35 [i_10] [i_10] = (arr_4 [i_10]);
        var_35 = (max(var_35, (arr_15 [17] [i_10 - 2] [i_10 - 4] [i_10 - 4] [i_10 - 1])));
    }
    var_36 = (((((var_8 | ((max(var_5, var_10)))))) ? (((max(-99, var_6)) | var_12)) : var_10));
    var_37 = (max(var_37, (((((var_1 ? ((min(var_10, var_13))) : (max(var_5, var_9)))) - (((!(!var_4)))))))));
    var_38 = (min(var_38, (((var_7 - ((min(var_4, var_6))))))));
    #pragma endscop
}
