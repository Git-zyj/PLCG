/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = ((3494 && (((-182 ? var_15 : (arr_6 [i_0 + 3] [i_2 + 1]))))));
                    var_19 = var_3;
                    arr_7 [i_1] [i_2] = ((((max((arr_1 [i_2 - 1]), (arr_2 [i_0 + 1])))) ? ((var_10 ? ((var_13 ? var_5 : (arr_6 [10] [i_1]))) : (!50459))) : (28764 + 36703)));
                }
            }
        }
        var_20 = (max((~5052), (((!(arr_4 [i_0] [i_0] [i_0 + 3] [i_0]))))));
        var_21 = 201;
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_22 = (min(var_22, var_14));
            var_23 = arr_11 [i_3];

            for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
            {
                var_24 *= ((((max(63, (arr_5 [i_3])))) ? (((arr_1 [i_3]) << ((((var_0 ^ (arr_8 [i_3]))) - 27436)))) : (arr_5 [i_3])));
                var_25 = ((((max((arr_10 [i_3] [i_4] [i_5]), 236))) ? (!var_10) : ((((arr_0 [i_3]) >= var_7)))));
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
            {
                var_26 = (max(((-((-16327 / (arr_16 [i_6] [i_4] [7] [i_3]))))), -15343));
                var_27 = ((max((arr_13 [i_3]), (arr_13 [i_3]))));
            }
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_28 ^= ((((max(6472, 16326))) ? ((~(((arr_2 [i_3]) ? (arr_15 [i_3] [i_4] [i_7]) : var_0)))) : ((-(((arr_17 [i_3] [i_3] [i_4] [i_7]) % var_14))))));
                var_29 = (((((15080 / (arr_11 [i_3])))) ? ((((max(var_4, (arr_17 [i_3] [i_4] [i_4] [i_7])))) + (-21837 + 28820))) : (arr_2 [i_4])));
            }
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            arr_29 [i_9] [i_8] [i_9] = (max((!11799), var_6));
                            arr_30 [i_9] [i_3] [i_9] [i_10] [i_11] [i_11] = ((~(max((var_9 + 21853), (var_13 + 34733)))));
                            arr_31 [i_9] [i_10] [i_9] [i_8] [i_9] = (arr_17 [i_8] [11] [i_8] [i_8]);
                            arr_32 [i_3] [i_9] [i_9] [i_9] [i_9] [i_8] = (max(11816, (~28769)));
                            arr_33 [i_3] [i_3] [i_9] [i_9] [i_3] = (((((!((max((arr_24 [i_3] [i_8] [11] [i_10] [i_11]), var_6)))))) > var_16));
                        }
                        var_30 = (max(var_30, (arr_0 [i_8])));
                        var_31 = ((-((max((arr_26 [i_3] [i_8] [i_9]), (arr_26 [i_3] [i_3] [i_3]))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    {
                        var_32 = ((-(((!8) ? 64 : ((max(var_7, (arr_34 [i_3] [2] [i_12] [i_13]))))))));
                        var_33 = ((-((max((arr_19 [i_3]), (arr_19 [i_8]))))));
                    }
                }
            }
            var_34 += ((!((max(28343, 15360)))));
            var_35 = ((~((max((arr_36 [i_3] [i_8]), -15691)))));
            var_36 = ((var_8 | (((~var_6) ? ((max(var_5, (arr_19 [i_3])))) : (!var_16)))));
        }
        var_37 = (min(var_37, (((~((max(50212, 11431))))))));
        var_38 *= ((!((max(231, 155)))));
    }
    var_39 = 243;
    var_40 = (max(var_40, -var_10));
    var_41 ^= (max(((((max(var_12, var_13))) ? (var_15 + var_2) : -var_16)), (((var_12 > ((max(var_5, -30708))))))));
    #pragma endscop
}
