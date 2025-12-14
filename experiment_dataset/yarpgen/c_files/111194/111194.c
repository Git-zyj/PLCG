/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    var_21 ^= (((((1 ? var_9 : ((var_4 ? var_7 : var_9))))) ? (var_11 ^ var_3) : ((var_13 ? ((var_10 ? var_10 : var_19)) : var_1))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_22 = (max(var_22, (((+(((((arr_3 [i_0]) ? (arr_2 [i_0]) : (arr_3 [i_0]))) - (arr_2 [i_0]))))))));
        var_23 = ((52 ? (arr_3 [i_0]) : ((1 ? (arr_2 [i_0]) : (((arr_1 [i_0]) ? 8161391737345854992 : (arr_0 [i_0] [10])))))));
        var_24 = arr_3 [i_0];
        var_25 = (max(var_25, (~262143)));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_26 = (((((arr_6 [i_1] [i_1]) == (arr_6 [i_1] [i_1]))) ? (((arr_6 [i_1] [i_1]) << (((arr_6 [i_1] [i_1]) - 3246957560)))) : (((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))));
        var_27 = (((((262143 + (arr_5 [i_1])))) ? (arr_2 [i_1]) : ((((((arr_3 [i_1]) ? (arr_7 [i_1]) : -2))) ? 262143 : (arr_5 [i_1])))));
        var_28 = (max(var_28, (((4294705153 ? 262143 : 1265437692177439772)))));
        var_29 = ((-(((arr_3 [i_1]) << (((arr_3 [i_1]) - 65))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_30 = ((((((arr_2 [i_2]) ? 262163 : -1))) ? (arr_5 [i_2]) : 262177));
        var_31 = (min(var_31, (arr_3 [4])));

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_32 = (((((-1000754577 ? (arr_6 [9] [i_2]) : (arr_5 [i_2])))) ? (arr_5 [i_2]) : -966578118));
            var_33 = (max(var_33, ((((arr_7 [i_2]) / (arr_7 [i_2]))))));
        }

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_34 = (((((arr_11 [i_4] [i_2] [i_2]) <= 2220369764)) ? 2220369764 : 4294705144));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        var_35 = ((arr_11 [i_2] [i_4] [i_5]) & (((arr_19 [i_5]) ? (arr_18 [i_2] [i_2] [i_5] [2]) : (arr_18 [i_2] [i_4] [i_5] [i_4]))));
                        var_36 = arr_5 [i_2];
                    }
                }
            }
            var_37 = (((arr_5 [i_2]) ? (arr_2 [i_2]) : (arr_21 [i_2] [i_2] [i_2] [13])));

            for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
            {
                var_38 += (((arr_20 [i_2] [i_2]) ? (arr_20 [i_2] [i_2]) : (arr_18 [i_7] [i_4] [i_4] [i_2])));
                var_39 = (min(var_39, (((!((((arr_21 [i_7] [1] [i_4] [i_2]) ? (arr_3 [i_7]) : (arr_10 [i_2] [i_4] [i_4])))))))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_40 = (arr_32 [i_2] [i_7] [i_7] [i_8] [i_8 - 1]);
                            var_41 = (((((arr_19 [i_7]) && 255)) ? (arr_31 [i_8 + 3] [i_8 + 3] [i_8 + 2] [i_8 - 1] [i_8 + 3] [i_8 - 1] [i_8 + 3]) : (arr_5 [i_7])));
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
            {
                var_42 = (arr_1 [i_2]);
                var_43 |= ((arr_8 [i_2]) ? (((arr_33 [i_2] [i_4] [i_10] [i_4] [i_10] [i_10]) ? (arr_17 [i_4]) : 262151)) : (arr_19 [i_2]));
                var_44 = (max(var_44, (((-83 ? (((((arr_31 [11] [11] [i_2] [i_2] [1] [1] [6]) || (arr_26 [i_2]))))) : (((arr_15 [i_2] [i_2]) ? (arr_6 [i_2] [i_2]) : (arr_28 [i_2] [i_2] [i_4] [14] [i_4] [i_4]))))))));
            }
            for (int i_11 = 1; i_11 < 15;i_11 += 1)
            {
                var_45 = ((-4294705170 ? (arr_36 [i_4]) : -9223372036854775798));
                var_46 = 4294705133;
                var_47 = (((arr_11 [i_4] [0] [i_11]) + ((-8467 ? 0 : (arr_0 [i_2] [i_2])))));
                var_48 = ((((((arr_28 [i_2] [i_2] [i_4] [i_11 - 1] [8] [i_2]) ? (arr_13 [i_11 - 1]) : (arr_9 [i_4] [i_11])))) ? 2220369764 : ((((arr_14 [i_2]) && (arr_0 [i_2] [i_2]))))));
                var_49 = (((arr_13 [i_11 - 1]) ? (arr_16 [i_2] [i_4] [i_11 + 1]) : (arr_32 [i_2] [i_4] [i_4] [14] [i_4])));
            }
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                var_50 = (((arr_17 [i_4]) ? (arr_4 [i_2] [i_4]) : (arr_22 [i_2] [i_12] [i_4] [i_12] [i_12])));
                var_51 = ((-((1 ? (arr_8 [i_12]) : (arr_35 [i_4] [i_12] [i_12] [i_12])))));
            }
        }
    }
    var_52 = ((var_6 ? 23082 : (var_1 ^ var_0)));
    #pragma endscop
}
