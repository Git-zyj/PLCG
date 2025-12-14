/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = var_0;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = var_3;

                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        var_11 = (min(var_11, (((((-2147483647 - 1) & 104))))));
                        arr_12 [i_1] [i_1] [i_1] [i_2] [i_3] = var_5;
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_12 = (max(var_12, var_8));
                            arr_18 [i_0] [i_0] [i_2] [i_4] [i_1] = (min((((arr_0 [i_4]) ? (arr_8 [i_0] [i_1] [i_2] [7]) : 133)), ((-962964606 ? (max((arr_10 [i_1] [i_4] [i_1] [i_4] [7]), -202124722)) : ((var_3 ? var_5 : (arr_5 [i_1] [i_4])))))));
                        }
                        var_13 = (!1785258333);
                        var_14 += var_1;
                        var_15 = (68 & -343221001);
                    }
                    arr_19 [i_1] [1] [i_2] [i_2] = var_4;
                    var_16 = (i_1 % 2 == 0) ? (((((var_1 ? (arr_7 [i_1]) : var_0)) << (((max((arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_10 [i_1] [i_0] [i_0] [i_0] [i_0]))) - 256188087))))) : (((((var_1 ? (arr_7 [i_1]) : var_0)) << (((((max((arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_10 [i_1] [i_0] [i_0] [i_0] [i_0]))) - 256188087)) - 1547602413)))));
                    var_17 = (max(106, ((min(var_0, var_7)))));
                }
            }
        }
        var_18 = (((arr_5 [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_0])));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_19 = (arr_1 [i_6] [11]);
        var_20 = (arr_15 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
        arr_22 [i_6] = (((((((arr_1 [9] [i_6]) ? 109 : 133)))) ? (((-(arr_0 [i_6])))) : ((1785258333 * (((max((arr_16 [i_6] [i_6] [i_6] [i_6]), (arr_21 [i_6] [i_6])))))))));

        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_21 = (((~552255816) + (arr_3 [i_7])));
            var_22 = (((arr_3 [i_6]) ? ((min(var_4, 163))) : ((((min((arr_21 [i_6] [i_6]), var_3))) ? ((((arr_20 [i_6]) || 4386922676492866070))) : ((max((arr_0 [i_7]), (arr_8 [i_6] [i_7] [i_7] [i_7]))))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_23 = (arr_21 [i_8] [i_8]);
            var_24 = (((arr_5 [i_6] [i_8]) > (((arr_7 [i_8]) ? 133 : var_4))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    {
                        var_25 &= (((arr_17 [i_6] [i_8] [i_9] [i_10] [i_10] [i_6] [i_8]) ? (arr_17 [i_6] [7] [i_6] [i_8] [i_8] [i_9] [i_10]) : (arr_10 [i_9] [i_8] [i_8] [i_8] [12])));
                        arr_34 [i_6] = ((var_9 << (((arr_1 [3] [i_9]) - 18693))));
                    }
                }
            }
            arr_35 [i_6] [i_6] = var_4;
            var_26 = 202;
        }
    }
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        arr_40 [10] = (max(-2496694910791640151, 16643));
        arr_41 [i_11] = (min((max(0, (((arr_39 [i_11] [i_11]) ^ (arr_38 [i_11]))))), (236 > var_3)));
    }
    for (int i_12 = 4; i_12 < 20;i_12 += 1)
    {
        var_27 = (-32767 - 1);
        var_28 = var_8;
        var_29 = (!68);
        var_30 = (max((arr_43 [i_12 + 3]), var_8));
        var_31 = (+(((arr_43 [i_12 + 4]) % (((arr_45 [i_12]) ? 10901 : 236)))));
    }
    var_32 = (min(((var_2 ? ((var_6 ? var_1 : 82)) : var_2)), ((max(var_10, 105)))));
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        for (int i_14 = 2; i_14 < 11;i_14 += 1)
        {
            {
                var_33 = (((!var_3) ? (((~(arr_38 [i_13])))) : (arr_24 [i_13])));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 9;i_16 += 1)
                    {
                        {
                            var_34 = (max((((arr_47 [i_14 + 1]) & 181)), (((var_5 == (arr_30 [i_13] [i_13] [i_13]))))));
                            var_35 = (max(var_35, ((max(((max((var_4 == var_0), (((arr_11 [12] [i_15] [i_14] [i_13]) || var_8))))), (min(((((arr_4 [i_13]) ? (arr_21 [i_15] [i_16]) : 4294967291))), (123 / 3727248972558652982))))))));
                        }
                    }
                }
                var_36 = (((arr_23 [i_13] [i_13]) ? (arr_23 [i_13] [i_13]) : ((max((arr_23 [i_13] [i_13]), var_9)))));
                var_37 |= ((var_4 ? var_6 : ((max(((max(1565455790, 2147483638))), (min((arr_42 [i_14 - 2]), 193625841)))))));
            }
        }
    }
    #pragma endscop
}
