/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = 12;
        var_16 &= (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_17 &= var_9;

            for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
            {
                arr_9 [i_0] [i_0] [i_0] &= 14;

                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_18 -= (min(var_4, ((((((arr_13 [i_0] [i_0] [i_2]) ? 222 : 0)) != var_7)))));
                    var_19 = (((arr_13 [i_0] [i_0] [i_0]) ? (((((arr_4 [i_2]) != (arr_4 [i_3]))))) : (1879048192 & var_6)));
                    arr_14 [i_0] [i_0] = (((arr_2 [i_0] [i_1] [i_2]) || ((max((((arr_10 [i_3] [i_2] [i_2] [i_1] [i_1] [i_0]) ? (arr_12 [i_3] [i_2] [i_1] [i_1] [i_1] [i_0]) : var_12)), ((max((arr_8 [i_2] [13] [i_0]), 205))))))));
                    var_20 = (min((((arr_7 [i_0] [i_0] [i_0]) / (arr_7 [i_0] [5] [i_2]))), (((arr_7 [i_0] [i_1] [i_0]) ? (arr_7 [i_0] [i_1] [i_2]) : (arr_7 [i_0] [i_1] [i_2])))));
                    arr_15 [i_1] [i_1] [i_2] [i_3] = ((-(((arr_11 [i_0] [i_0] [i_2] [i_3] [i_0]) >> (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - 988249181))))));
                }
                var_21 = 17179869152;
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
            {
                var_22 -= (!-41);
                var_23 = (min((max(0, (arr_3 [i_0] [i_1]))), -41));
                var_24 = (((((~(0 < var_10)))) ? ((-var_7 ? var_8 : (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_2 [i_4] [i_4] [i_4]) : (arr_10 [i_4] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : 523776));
                var_25 = ((var_13 == (((~6721862031227748352) ? (arr_11 [i_0] [i_1] [i_4] [i_1] [i_0]) : (arr_17 [i_0] [i_1] [i_4])))));
            }
        }
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            var_26 = ((((max((max(-523777, var_10)), (arr_22 [i_5 + 1] [i_5 + 1] [i_5])))) ? ((((0 <= (arr_6 [i_5] [i_5] [i_5]))) ? 16776704 : (arr_10 [14] [i_5] [i_5 - 1] [i_5 + 1] [i_5] [i_5 + 1]))) : ((-523777 ? (arr_11 [i_0] [i_5 + 1] [i_5] [i_0] [i_5 + 1]) : (arr_7 [6] [i_5] [i_5 + 1])))));

            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                var_27 = ((var_0 ? var_5 : -var_12));
                arr_25 [i_6] [i_6] [6] [6] = (var_7 < var_9);

                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_28 = (~11);
                    var_29 = (min((arr_24 [i_0] [i_5] [i_6]), ((var_4 ? (var_7 * var_8) : (arr_1 [i_7])))));
                    arr_28 [i_0] [i_0] [i_0] = (((((arr_18 [i_0] [i_5] [i_6] [i_7]) ? ((((!(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : 11045901127697546434)) <= 3853911343258883765));
                }
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                arr_33 [i_5 + 1] [i_5] = (arr_5 [i_0] [i_5] [i_5 - 1]);
                var_30 = (max(7, (((~178) ? 200 : ((14047444090099246950 ? (arr_19 [i_8] [i_0]) : var_12))))));
                arr_34 [i_0] [i_5] [i_5] [18] = (arr_17 [i_8] [i_5] [i_0]);
                var_31 &= (max(9007061815787520, ((((arr_3 [i_0] [i_0]) || 3853911343258883754)))));
            }
        }
    }
    var_32 = (~var_7);
    var_33 = var_4;
    #pragma endscop
}
