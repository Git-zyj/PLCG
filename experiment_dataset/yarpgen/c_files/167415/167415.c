/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_13 -= (((2047 / var_6) ? (arr_1 [i_0 + 1] [i_0]) : -1936695160));
        arr_3 [i_0] = (((0 * 247) ? (arr_1 [i_0] [i_0]) : 7));
        arr_4 [i_0] = (max(((-(min(-7140820652721297706, var_11)))), (((17372 / (arr_1 [i_0 + 1] [i_0 - 1]))))));
        arr_5 [i_0] = (((0 ? 1 : 232)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                {
                    arr_15 [i_1] [i_2] [i_2] [i_3] = ((!(arr_6 [i_3])));
                    arr_16 [i_2] = var_9;
                }
            }
        }
        var_14 *= (!var_4);
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_15 = ((-((22 | (max(1, 3145792916192752486))))));
        var_16 ^= ((!(((-(((!(arr_19 [i_4] [i_4])))))))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_17 = (arr_17 [i_5]);
        arr_22 [i_5] = (~48);
    }

    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_18 = ((((((var_11 > (arr_23 [i_6] [i_6]))) ? ((((!(arr_20 [i_6]))))) : ((var_7 << (2497587107556864299 - 2497587107556864279))))) / ((var_0 ? ((var_4 ? 1768678903 : var_5)) : ((((arr_25 [i_6]) / var_8)))))));
        arr_26 [i_6] = (arr_21 [i_6] [i_6]);
        arr_27 [i_6] = ((((((~(arr_1 [i_6] [i_6]))))) ? ((-((0 ? 5722 : 44)))) : (((!(-26677 / var_5))))));
        arr_28 [i_6] [i_6] = (max(((((arr_25 [i_6]) >= ((-(arr_18 [i_6])))))), (min(9223372036854775807, -28620))));

        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
        {
            var_19 = ((!(arr_29 [i_6] [i_6] [i_7])));
            var_20 = (max(var_20, (((!((min(0, 785))))))));
            var_21 = (arr_23 [i_6] [i_6]);
            var_22 *= ((-(~480)));
            arr_31 [i_7] = ((((~(~8589934591))) >= (((((0 ? (arr_17 [i_6]) : (arr_18 [i_7]))) - var_12)))));
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            var_23 = (((-(arr_36 [i_11] [i_9] [i_8]))));
                            arr_42 [i_6] [i_8] [i_9] = var_11;
                            arr_43 [i_6] [i_6] [i_8] [i_9] [i_9] [i_10] [i_11] = ((+(((((min((arr_17 [i_11]), -68))) <= (((arr_1 [i_6] [i_11]) ? -1 : (arr_40 [i_6] [i_8] [i_9] [i_10] [i_11]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 11;i_13 += 1)
                    {
                        {
                            var_24 = (arr_32 [i_6] [i_8]);
                            var_25 = (((arr_20 [i_6]) ? -var_7 : var_12));
                            var_26 = ((((((arr_44 [i_12] [i_9] [i_8] [i_6]) ? (arr_48 [i_6] [i_6] [i_6] [i_6]) : 4574114704385524852))) ? ((max(26478, (arr_21 [i_13] [i_8])))) : var_10));
                        }
                    }
                }
                var_27 = (min(var_27, (((-22452 ? (((!(((arr_24 [i_8]) >= (arr_24 [i_6])))))) : ((((var_7 ? 7 : 1558989815)))))))));
            }
            var_28 = ((!((!(var_11 != var_8)))));
            var_29 -= 1;
        }
    }
    #pragma endscop
}
