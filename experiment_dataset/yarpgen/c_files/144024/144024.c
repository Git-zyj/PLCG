/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            arr_5 [5] [i_1] [i_1] = ((149 > ((max(125, (arr_2 [10]))))));
            var_19 = max((--61), (max((arr_0 [4]), -496196691)));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_20 *= ((((((min((arr_2 [i_1]), var_8))) ? (arr_3 [i_0] [11] [i_0]) : ((((arr_8 [i_1]) != (arr_2 [i_3])))))) <= (arr_10 [i_3] [i_2] [i_1] [i_0])));
                        var_21 = (max(var_21, 12468));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    {
                        var_22 = (max(var_22, ((max(var_10, (((2993084125540677842 < (arr_11 [3] [i_5 - 1])))))))));
                        arr_17 [i_0] = (min((((((var_15 ? var_16 : (arr_1 [4])))) ? 24139 : (max(var_17, 53974)))), (arr_8 [i_0])));
                        var_23 = (-(min(((max((arr_3 [2] [i_0] [i_4]), (arr_16 [i_4] [i_5] [i_4] [i_1] [i_0])))), (min(2026561697390318420, 16102288386735904612)))));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
        {
            arr_20 [i_0] [i_0] [i_6] = ((-3504015712 != ((((arr_16 [i_0] [i_0] [i_0] [i_6] [11]) / var_9)))));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        var_24 = (arr_12 [i_0]);
                        arr_26 [i_8] [i_6] [i_7] [i_7] |= ((((-var_18 != ((var_4 ? -126 : 118)))) ? (var_16 <= var_6) : (~-2786686297129323315)));
                        arr_27 [i_0] [i_6] [i_7] [i_8] = (~var_0);
                        var_25 = (arr_6 [i_0] [i_6] [i_7]);
                        arr_28 [i_0] [i_0] [7] [i_0] = (max(65535, 2363571744222726091));
                    }
                }
            }
            var_26 = (max(var_26, (!4144085502)));
        }
        for (int i_9 = 3; i_9 < 11;i_9 += 1)
        {
            var_27 = (max(var_27, ((((((~var_13) ? (arr_14 [0] [i_9] [i_9 - 2] [i_9]) : (((max((arr_6 [i_0] [i_0] [i_9]), 1695))))))) ? 9122057341878613699 : ((min((((arr_1 [i_0]) ? (arr_29 [i_9] [i_0] [i_0]) : 18789)), ((~(arr_30 [i_9 + 2]))))))))));
            var_28 = (!33324);
        }
        arr_33 [i_0] = ((((max((arr_14 [i_0] [i_0] [i_0] [i_0]), (!var_4)))) & (((((0 ? -5816368596620124988 : (-127 - 1)))) ? (arr_1 [i_0]) : ((max(-7253055886308859074, (arr_24 [i_0] [i_0] [i_0] [i_0]))))))));
    }
    var_29 = ((var_5 >> (!var_11)));
    var_30 = (var_17 & -3313954436476932238);
    /* LoopNest 2 */
    for (int i_10 = 4; i_10 < 22;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 21;i_11 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        {
                            arr_42 [i_11] = 2858645073288573661;
                            var_31 = (max(var_31, ((((((((max(25929, var_3))) ? (arr_41 [i_10] [i_11] [i_10]) : var_15))) ? 60575 : var_9)))));
                            arr_43 [i_10] [i_11] [i_11] [i_13] = (min(((((((arr_40 [i_10] [3] [17] [i_11] [i_12]) ? (arr_41 [i_10] [i_12] [i_11]) : var_11))) ? var_3 : ((41396 ? var_17 : var_16)))), (((var_11 ? (arr_40 [i_10] [i_11] [i_12] [i_11] [i_13]) : (10873 != var_16))))));
                            var_32 = ((!((((min((arr_36 [i_11] [20] [i_12]), var_7))) > (arr_40 [i_13] [i_11] [i_11] [i_11] [i_10])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        {
                            arr_49 [i_10 - 4] [i_10] [13] [i_11] = arr_45 [i_11];
                            var_33 = ((((((((arr_38 [i_11]) ? var_13 : var_2)) + (arr_45 [i_11])))) ? var_14 : -var_10));
                        }
                    }
                }
            }
        }
    }
    var_34 = ((((((var_1 ? 41396 : 0) != (((max(var_14, var_14)))))))));
    #pragma endscop
}
