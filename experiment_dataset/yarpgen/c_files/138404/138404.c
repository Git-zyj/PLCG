/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1 + 1] [i_0] = var_11;
                arr_7 [i_0] = (((((2047 ? 120750008 : var_12))) ? -70 : var_7));
            }
        }
    }
    var_20 = (min(var_11, (29033 | var_2)));

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_21 = ((!((((arr_9 [i_2]) ? (!29033) : (min(var_2, (arr_9 [i_2]))))))));

        for (int i_3 = 4; i_3 < 20;i_3 += 1)
        {

            for (int i_4 = 4; i_4 < 22;i_4 += 1) /* same iter space */
            {
                var_22 = (max(var_22, ((max((arr_13 [i_2] [i_2]), (max(var_11, (((arr_12 [i_3] [i_3] [i_3]) ? var_10 : (arr_12 [i_2] [i_2] [i_2]))))))))));

                for (int i_5 = 4; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    var_23 = (((arr_15 [i_4] [i_4 - 3] [i_4] [i_4 - 1]) - (arr_14 [i_2] [i_3 - 1] [i_4])));
                    var_24 = ((!((((!var_12) ? (((arr_13 [i_2] [i_5]) ? var_15 : (arr_16 [i_2] [i_2] [i_2] [i_5] [i_5]))) : (min((arr_13 [i_5] [i_4]), var_17)))))));
                }
                for (int i_6 = 4; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    arr_20 [i_2] [i_2] = (26967 - 160597378);
                    arr_21 [i_3] [i_3] [i_4] = ((((min((arr_9 [i_2]), -1))) ? (((((arr_14 [i_3 - 4] [i_3 - 3] [i_3 - 4]) && (arr_14 [i_3 + 1] [i_3 - 2] [i_3 - 1]))))) : (arr_10 [i_2] [i_2] [i_2])));
                    arr_22 [i_2] [i_2] [i_4 - 2] [i_6] |= ((min((arr_8 [i_6 - 1]), (arr_8 [i_6 - 1]))));
                    var_25 *= (min((arr_12 [i_2] [i_4 - 1] [i_6 - 3]), (((!((max(var_19, 32767))))))));
                }
                arr_23 [i_2] [i_2] [i_3 - 2] [i_4] = var_18;
                var_26 = var_13;
            }
            for (int i_7 = 4; i_7 < 22;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 2; i_8 < 22;i_8 += 1)
                {
                    arr_30 [i_2] [i_7] [i_8] = (((!2047) & (((arr_16 [i_7] [i_7 - 3] [i_3 + 1] [i_8] [i_7]) ? 1 : 39087))));
                    arr_31 [i_2] [i_7] [i_2] [i_2] = ((!((((arr_17 [i_8 + 1] [i_8] [i_8] [i_8] [i_8 + 1]) & 116)))));
                    arr_32 [i_7] = (max((1 != 18), var_4));
                    var_27 = (max((max(-var_0, ((min(1, 39087))))), 210));
                }
                var_28 = var_6;
            }
            var_29 = (((((arr_11 [i_3 - 4] [i_3 + 1]) != (arr_11 [i_3 - 2] [i_3 + 1]))) ? (arr_16 [i_2] [i_2] [i_2] [i_2] [i_3]) : ((max((-47 != 1), -30)))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            arr_35 [i_9] [i_9] = (arr_12 [i_9] [i_9] [i_9]);
            arr_36 [i_2] [i_2] = (((((arr_15 [i_2] [i_9] [i_9] [i_2]) | var_13)) + (!1)));
        }
        for (int i_10 = 4; i_10 < 20;i_10 += 1)
        {
            var_30 = (max(var_30, ((min((min(-1, -5580421493382412441)), (((-(arr_39 [0])))))))));
            var_31 = var_9;
            arr_40 [i_10] = 238;
            var_32 = var_19;
            arr_41 [i_2] [i_2] [i_10] = (min(((((max((arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] [i_10]), (arr_38 [i_2] [i_2] [i_10]))) & (arr_33 [i_10 + 1])))), (arr_37 [i_2] [i_2] [i_2])));
        }
    }
    #pragma endscop
}
