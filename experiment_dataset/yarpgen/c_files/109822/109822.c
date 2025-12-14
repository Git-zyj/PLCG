/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0 + 4]) ? (max(var_15, (arr_0 [i_0 + 4]))) : (((min((arr_1 [i_0]), (arr_1 [i_0 + 4])))))))) ? (arr_1 [i_0]) : var_6));
        arr_3 [i_0] [i_0 + 1] = max(1, ((var_5 ? (arr_1 [i_0]) : 1)));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_17 = (((!var_10) ? var_2 : var_5));
            var_18 -= (arr_0 [i_0]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_19 = ((!(arr_6 [i_0 + 2])));
            arr_9 [i_2] [i_0] = ((var_15 ? (arr_6 [i_0 + 3]) : (arr_5 [i_0 + 2] [i_0 - 2] [i_0 - 1])));
            var_20 = ((1 ? 1 : 26));
            var_21 = (arr_5 [i_2] [i_0 + 2] [i_0 + 1]);
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_22 = ((~(min((arr_11 [i_3]), (arr_0 [i_3])))));

            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                var_23 = (max(var_23, (((!(((449736541 ? 1 : 1))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_21 [i_4] [i_5] [i_6] = ((!((((min(1, 22269)))))));
                            var_24 = var_6;
                        }
                    }
                }
                var_25 = (min(var_25, 1));
            }
            /* vectorizable */
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                var_26 *= var_13;
                var_27 = (((arr_13 [8] [i_0 - 2] [i_7 + 2]) ? (arr_13 [i_0] [i_0 - 1] [i_7 + 1]) : (arr_13 [i_3] [i_0 - 2] [i_7 + 1])));
                var_28 = ((arr_13 [i_7] [i_3] [i_7]) ? var_6 : var_8);
            }
            arr_24 [i_0] = (max((((-9223372036854775807 - 1) ? 90 : 21)), 29116));
        }
    }

    for (int i_8 = 1; i_8 < 18;i_8 += 1)
    {
        var_29 = (min(var_29, ((max((min(((min(1, 1))), ((14713158685503544510 ? 45702 : 0)))), (max(45567, ((67108860 ? -1192290511 : (arr_26 [i_8]))))))))));
        var_30 = (arr_28 [17] [i_8]);
        var_31 = (((arr_27 [i_8]) ? (arr_28 [i_8] [i_8]) : ((max(1, 48172)))));
        var_32 = var_9;
    }
    for (int i_9 = 2; i_9 < 18;i_9 += 1)
    {
        arr_32 [8] [i_9] = (min(226, 85));
        var_33 = (max((min((max((arr_30 [i_9] [i_9]), var_15)), (((var_7 ? (arr_29 [i_9]) : var_6))))), (arr_30 [i_9 - 2] [i_9])));
        arr_33 [9] = (max((min(245705761, 245)), (arr_28 [i_9 + 1] [i_9 - 2])));
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        var_34 = ((((max((arr_35 [i_10] [i_10]), (arr_35 [i_10] [i_10])))) ? (arr_34 [1] [i_10]) : (arr_35 [i_10] [i_10])));
        var_35 ^= ((+(((arr_35 [i_10] [14]) ? (arr_34 [i_10] [i_10]) : (((arr_34 [i_10] [i_10]) ? (arr_34 [13] [i_10]) : (arr_35 [i_10] [16])))))));
    }
    var_36 = (!var_10);
    #pragma endscop
}
