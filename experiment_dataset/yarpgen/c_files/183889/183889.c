/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 -= 4620573341631641987;
        var_21 = (min(var_21, ((((((-1 & (0 > 6443864345127590069)))) > (min((!var_14), 7569929738162053083)))))));
        arr_3 [i_0] = ((-(min(((0 ? var_3 : var_9)), (min(127, var_7))))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_22 = (min((arr_5 [i_1] [19]), (arr_4 [3] [i_1])));
        var_23 = min((min((arr_5 [i_1 + 3] [i_1 + 4]), var_17)), ((min((var_1 ^ var_7), (!-1)))));
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_24 = (arr_1 [i_2]);
        var_25 = (((((671805370649009404 >> (5846096686152127099 - 5846096686152127057)))) < 1984));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_26 += (((((((arr_6 [22]) / var_8))) ? var_3 : (min(var_9, var_14)))));

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_27 = (min(var_27, (max(-8, (max(1557335726950080737, 4294967295))))));
                        var_28 = (min(var_28, (((((min(0, 7))) * ((((var_11 ? (arr_2 [i_5]) : var_16)))))))));

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_29 = var_18;
                            var_30 *= var_5;
                            var_31 = (((15049172798622043877 | 998072512) ? var_5 : (max(var_10, (arr_17 [i_7])))));
                            var_32 = ((((max((min(-10, 6220930251531513682)), (max(var_1, var_17))))) ? ((~(~1598283396))) : ((~(~var_14)))));
                        }
                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            var_33 += ((~((((arr_18 [i_3] [i_6] [7]) ? 3175363378 : var_17)))));
                            var_34 = (max(((max((arr_27 [i_3] [6] [i_3] [i_3] [i_3]), (31763 | var_14)))), ((max(var_11, var_10)))));
                        }
                        var_35 = (((~var_9) <= (max(var_4, var_10))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((((arr_2 [i_9]) + 2147483647)) << (var_3 - 12726));

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_36 = ((((var_16 ? (arr_14 [i_3] [5]) : (arr_19 [13] [14] [i_5] [i_9]))) >> (((arr_23 [i_3] [3] [i_10]) - 12843211738319149870))));
                            var_37 = ((~(arr_28 [i_9] [i_9] [i_4] [i_3])));
                            arr_35 [i_5] [i_9] [i_5] [i_4] [9] = 72;
                        }
                    }
                    arr_36 [i_3] [i_4] [i_4] |= min((~751489461198169610), -989836959);
                    arr_37 [2] [i_5] = (max(0, (max(-1570017853, (max(3175363378, 1))))));
                    var_38 = max((((~(((arr_21 [i_4] [i_4] [i_3]) ? -1 : (arr_19 [i_3] [i_3] [i_5] [i_3])))))), var_11);
                }
            }
        }
    }
    var_39 = (max(var_39, (((((min((min(-1, var_14)), 1037376455593258119))) ? (min(-var_5, (var_15 * 37470))) : (((var_18 & var_1) ? var_3 : (9227078958232924422 + var_1))))))));
    #pragma endscop
}
