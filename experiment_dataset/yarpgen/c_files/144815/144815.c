/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(min(((var_2 ? var_10 : var_9)), 380601976))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = var_3;
                    arr_7 [i_0 + 2] [i_0 + 2] [i_0] [i_2] = (arr_0 [i_2] [i_0 - 1]);
                    var_15 += ((((((var_10 * 23841) + (arr_6 [6] [6])))) ? (16384 - 9449) : (max((arr_0 [2] [i_1 - 1]), var_11))));
                }
            }
        }
    }
    var_16 = var_4;

    /* vectorizable */
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        arr_10 [i_3 + 1] = (((arr_2 [18]) ? (arr_2 [10]) : var_6));
        arr_11 [16] = ((-(arr_2 [18])));
    }
    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        arr_14 [i_4] = (-(arr_2 [i_4]));
        arr_15 [i_4] = (min(((max((min((arr_2 [i_4]), (arr_9 [i_4 + 1] [i_4]))), var_6))), (arr_12 [i_4] [15])));
    }
    for (int i_5 = 2; i_5 < 8;i_5 += 1)
    {
        var_17 = (((((!(arr_3 [i_5])))) << (((arr_8 [i_5 + 1] [i_5 - 1]) - 4242145013))));
        arr_18 [i_5 + 2] = (((arr_0 [i_5 - 2] [i_5]) * ((((((-(arr_17 [i_5]))) <= (var_11 & var_6)))))));
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            arr_28 [4] [i_6] [i_6] [i_8] [i_9] [i_6] = (((((var_0 << (1241424348730100597 - 1241424348730100576)))) && (arr_22 [i_6] [4])));
                            var_18 = ((((arr_21 [i_6 - 1] [i_6 - 1] [i_9] [i_5]) * (arr_21 [i_6 + 2] [i_6 + 2] [i_7] [1]))));
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                        {
                            var_19 = (arr_3 [i_10]);
                            arr_31 [i_5] [i_6] [i_7] [i_10] [5] [i_6] = 252;
                            var_20 = (((~(max(var_9, 14985074818476488242)))));
                            var_21 = (~-2461940324349427892);
                        }
                        arr_32 [0] [0] = (((arr_19 [9] [4] [i_7]) != var_2));
                        arr_33 [i_5] [i_5 + 2] [i_5] [i_5] [7] = var_4;
                        var_22 = (arr_19 [i_5] [i_6] [1]);
                    }
                }
            }
        }
        arr_34 [i_5] = 177;

        /* vectorizable */
        for (int i_11 = 1; i_11 < 9;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                var_23 = ((arr_19 [i_5] [i_5] [i_5]) << (((arr_12 [i_11 + 1] [i_11 + 1]) - 8919192216829532332)));
                arr_39 [i_11] [0] [i_12] [i_11] = 50540;
                var_24 = (var_0 - var_3);
                arr_40 [i_5] [i_11 + 1] [i_12] = (arr_1 [i_5]);
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        {
                            var_25 = (arr_12 [i_5 + 2] [i_5 - 2]);
                            var_26 = (((arr_12 [i_5 + 2] [i_5 + 1]) ? (arr_43 [i_5 - 2] [i_5]) : (((arr_2 [i_13]) ? var_2 : (arr_20 [i_5] [i_12] [i_13])))));
                            var_27 = (~-var_8);
                        }
                    }
                }
            }
            for (int i_15 = 1; i_15 < 8;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    arr_52 [i_16] [7] [i_16] [i_16] [i_16] = var_10;
                    var_28 = 30284;
                    var_29 = -1403120859;
                }
                for (int i_17 = 4; i_17 < 9;i_17 += 1)
                {
                    var_30 += ((var_7 < -14030) ? -var_8 : (arr_38 [i_15 - 1] [i_11] [i_11 + 1]));
                    var_31 = 3027663371281337011;
                    arr_56 [i_17] [4] [i_15] [i_15 - 1] = (arr_21 [i_17 - 1] [i_15 - 1] [i_11 + 1] [i_5 - 1]);
                }
                arr_57 [i_5 + 1] [i_11] [i_11] = var_4;
                var_32 = (max(var_32, (!var_10)));
            }
            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                arr_60 [3] [3] [3] = var_0;
                var_33 = (max(var_33, ((-(arr_19 [4] [i_11] [2])))));
                var_34 = (((arr_5 [i_5 + 1] [i_11 - 1] [i_11 + 1]) ? (arr_5 [i_5 + 2] [i_11 + 1] [i_11 - 1]) : var_11));
                arr_61 [i_11 + 1] [5] [3] = var_5;
                var_35 = (max(var_35, ((((arr_23 [i_18] [i_11 - 1] [i_11] [i_5 + 1]) << (((arr_23 [i_5] [i_11 - 1] [i_5] [i_18]) - 4639000361890193775)))))));
            }
            arr_62 [i_5] &= 252;
        }
    }
    #pragma endscop
}
