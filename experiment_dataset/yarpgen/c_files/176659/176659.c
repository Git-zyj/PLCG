/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [17] = (min(((((-(arr_0 [i_0]))))), (min(((var_3 ? var_12 : (arr_0 [i_0]))), ((var_5 << (var_0 - 181)))))));
        var_17 = ((var_10 ? ((((var_7 || (arr_0 [i_0]))))) : ((((max(var_16, (arr_1 [i_0])))) ? ((204 ? 218 : 50)) : 206))));
        var_18 = 34;
        arr_4 [6] = ((var_10 / ((max(50, 53)))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                var_19 = (!-206);
                var_20 = (max(((-((42 ? 157 : 0)))), ((max((arr_5 [i_2 - 2] [10] [i_0]), 255)))));
            }
            arr_11 [i_0] [i_0] = (((arr_2 [i_1]) / 207));
            var_21 = 50;
            arr_12 [i_1] = ((~(((max(132, var_3))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_22 = ((255 ? 216 : var_4));
            arr_15 [i_3] [i_3] [i_0] = 89;
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_23 = (arr_10 [i_4] [i_4] [i_0]);

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                arr_22 [i_4] [i_4] [21] [i_0] = ((-(((53 * 200) * var_15))));

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    arr_25 [i_5] [i_4] [i_0] = (i_4 % 2 == 0) ? ((min(((var_4 >> (((((arr_14 [i_5] [i_4] [i_0]) ? (arr_24 [i_4] [i_0] [i_5] [i_5]) : (arr_9 [i_4] [i_4] [i_6]))) - 222)))), (arr_19 [i_0] [i_4] [i_5] [i_6])))) : ((min(((var_4 >> (((((((arr_14 [i_5] [i_4] [i_0]) ? (arr_24 [i_4] [i_0] [i_5] [i_5]) : (arr_9 [i_4] [i_4] [i_6]))) - 222)) + 169)))), (arr_19 [i_0] [i_4] [i_5] [i_6]))));
                    var_24 += (((((var_0 > ((max(11, 186)))))) % (arr_6 [i_5])));

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_25 = (!var_4);
                        var_26 += ((-(((!(arr_19 [i_0] [0] [i_5] [i_6]))))));
                    }
                    var_27 = ((+(((!2) ? ((min((arr_24 [i_4] [i_4] [i_5] [i_6]), 194))) : (arr_2 [i_5])))));
                    arr_30 [i_0] [i_4] [i_5] = (max((((!120) || (!16))), (!229)));
                }

                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    var_28 = (max(((((arr_6 [i_0]) > var_16))), ((var_5 ? (arr_6 [i_0]) : 159))));
                    arr_35 [i_0] [i_5] [i_5] [i_5] [i_4] [i_5] = -21;
                    var_29 *= (((~var_12) ? ((244 ? (arr_17 [6] [22]) : ((max((arr_2 [i_0]), var_2))))) : (arr_21 [i_0])));
                }
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                arr_38 [i_0] [i_4] [i_4] [i_9] = (((!var_13) > var_1));
                arr_39 [i_4] [i_4] [i_0] [i_4] = (~var_10);
                var_30 = var_6;
            }
            arr_40 [i_4] [19] = ((165 < (max(-var_8, (arr_36 [i_4] [i_4] [i_4] [i_0])))));
        }
    }
    var_31 = var_16;
    var_32 = (max((!146), (40 - var_7)));
    var_33 = ((var_8 ? (!163) : 149));
    var_34 = var_12;
    #pragma endscop
}
