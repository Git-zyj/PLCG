/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_20 = (max(var_20, ((max((((arr_3 [i_0] [i_1 + 1]) * (((arr_4 [i_0] [i_1 - 2]) ? (arr_5 [i_0] [15] [0]) : var_18)))), (((!((((arr_7 [i_3] [1] [i_2] [1] [i_1 + 1] [i_0]) ? var_10 : var_4)))))))))));
                        arr_9 [i_0] = (max(((((arr_3 [i_0] [i_0]) || (arr_3 [i_0] [i_0])))), (((arr_0 [i_1 - 1] [i_1 - 2]) ? var_14 : (max(var_1, (arr_8 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3 - 1])))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_21 = (min(var_21, ((((arr_3 [i_0] [i_1 - 2]) < (arr_3 [i_0] [i_1 + 1]))))));
                        var_22 = ((var_7 ? (arr_7 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 1]) : (arr_7 [i_0] [i_0] [i_1] [i_1 + 2] [16] [i_1 + 2])));
                    }
                    var_23 -= -var_14;
                    var_24 -= ((~(max(var_7, (var_16 / var_7)))));
                }
            }
        }
    }
    var_25 = ((((((-27 < var_16) & ((1 ? var_8 : var_11))))) ? ((var_3 ? var_3 : var_5)) : var_11));
    var_26 = (min(var_26, ((((((((-17 ? 5249 : 24014))) ? var_13 : (max(var_14, var_11)))) >= var_15)))));
    var_27 &= (max((var_10 & var_12), (max(var_3, var_18))));

    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_28 = ((((~var_5) ^ var_11)));
            arr_17 [i_5] [i_5 + 1] [7] = (((((~(((arr_14 [7] [i_6]) / var_18))))) ? ((max(((max(var_10, var_11))), (arr_5 [5] [1] [i_6])))) : (((((arr_16 [i_6] [i_5]) ? var_4 : (arr_7 [i_5 + 1] [i_5 - 1] [i_5] [9] [i_6 - 1] [i_6])))))));
            var_29 = ((-(((max(var_16, var_11))))));
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                var_30 = ((((arr_5 [i_5 - 1] [i_7 - 1] [i_8]) > (arr_4 [i_5] [i_7 - 1]))) || (((!18356426465520973023) || (arr_11 [9] [11] [i_8] [i_8] [i_8]))));
                var_31 = (~27);
                var_32 = (((arr_0 [i_7 - 1] [i_8]) ^ ((-((max(54938, 60286)))))));
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {

                /* vectorizable */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    var_33 = ((var_14 ? (arr_3 [i_5 - 2] [i_7 - 1]) : (arr_3 [i_5 - 2] [i_7 - 1])));
                    var_34 = -var_4;

                    for (int i_11 = 2; i_11 < 18;i_11 += 1)
                    {
                        arr_28 [i_5] [i_7 - 1] [11] [3] [i_11] [i_11 - 2] [i_11 - 2] = ((~(arr_6 [i_5 + 1] [i_11 - 1] [i_11] [i_11])));
                        arr_29 [i_5] [i_7] [i_9] [i_10] [i_11] = (arr_22 [i_5 + 1] [i_7 - 1]);
                        arr_30 [i_11] [i_10] [i_9] [i_7] = (!var_0);
                    }
                    var_35 = ((!(arr_19 [i_5 - 2] [i_7 - 1] [i_7 - 1])));
                    arr_31 [i_5] [i_7 - 1] [i_9] [i_10] = (arr_3 [i_5 - 1] [i_7 - 1]);
                }
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    var_36 = (max(((((~var_15) < (((!(arr_16 [i_5] [i_5]))))))), var_14));
                    var_37 = (~(((arr_12 [i_9] [i_5 + 1]) / ((137 ? var_9 : 0)))));
                    var_38 |= (min((min((var_1 | var_15), ((var_15 ? var_4 : var_2)))), ((((arr_12 [i_7 - 1] [i_7 - 1]) ? var_2 : (arr_18 [i_12] [i_7 - 1]))))));
                }
                var_39 = (min((((((90317608188578592 ? 5250 : 141)) >> (4294967295 - 4294967266)))), (min(((var_10 ? var_7 : var_12)), ((((arr_14 [i_5] [i_7]) < (arr_8 [17] [i_7 - 1] [i_9] [i_5] [1] [1]))))))));
                var_40 = 127;
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                var_41 = ((var_7 ? (arr_24 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 - 1]) : (((((arr_24 [i_5] [i_7 - 1] [i_13] [i_13]) < (arr_13 [i_5])))))));
                arr_39 [i_13] = var_14;
                arr_40 [i_5 - 1] [i_13] [6] = (((arr_6 [i_5 - 2] [i_5 - 1] [i_7 - 1] [i_13]) & var_3));
            }
            var_42 = (arr_32 [i_5 + 1]);
            var_43 = var_4;
        }
        var_44 = (min((((2509077778 ? ((min(var_6, var_15))) : (((arr_13 [i_5]) - var_10))))), (min(((min(var_16, var_0))), var_14))));
        var_45 = var_8;
        var_46 = (((((((min(1, var_4))) ? (var_15 > var_14) : 5249))) ? ((var_17 ? var_5 : var_10)) : (arr_6 [i_5 + 1] [i_5 - 1] [0] [0])));
        var_47 = (((arr_15 [i_5]) > ((max((arr_22 [i_5 - 2] [i_5]), (max(var_19, var_12)))))));
    }
    #pragma endscop
}
