/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                var_12 = (min(var_0, (((arr_5 [i_0 + 1] [i_0] [i_1]) ? (arr_5 [i_0 - 1] [i_0] [i_2]) : (arr_7 [i_0 - 1] [0] [i_0 - 1] [i_2])))));
                                var_13 ^= ((-(arr_9 [i_4] [i_4] [10] [i_3] [2])));
                            }
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 15;i_5 += 1)
                            {
                                var_14 = (((((123 ? var_10 : 1762733051))) ? (arr_8 [i_2] [15] [4] [i_0] [i_5] [i_0]) : -var_9));
                                var_15 = var_11;
                            }

                            for (int i_6 = 0; i_6 < 18;i_6 += 1)
                            {
                                var_16 = (((((-(min(17969894, 4276997402))))) || ((((((-(arr_0 [i_0])))) ? var_5 : (min(4276997402, (arr_3 [i_0]))))))));
                                arr_17 [i_0] = (((2191201475 ? (~124) : (~var_10))) | (~-130));
                            }
                            arr_18 [i_2] [i_1] [i_0] [i_3] [i_1] = (((2399342102167580846 * 31) * ((((min((arr_4 [14] [14] [i_2] [14]), 63)) / ((1563503520 ? (arr_16 [i_0]) : (arr_15 [i_0] [5]))))))));
                            var_17 = (arr_8 [i_0 + 1] [i_0 - 1] [1] [i_0] [i_0 + 2] [i_0]);
                        }
                    }
                }
                arr_19 [i_0] = ((((min((!46944), var_8))) ? (min((arr_15 [i_0 + 1] [i_0 + 1]), var_3)) : 4276997401));
            }
        }
    }
    var_18 = var_9;

    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 23;i_10 += 1)
                {
                    {
                        var_19 = (((arr_27 [i_8 + 3] [i_10 - 4] [i_9] [i_9 + 1]) ? (max((arr_27 [i_8 + 3] [i_10 - 2] [i_9] [i_9 - 2]), 5763762734959406190)) : ((((arr_27 [i_8 + 3] [i_10 - 1] [i_9] [i_9 - 1]) ? (arr_27 [i_8 - 1] [i_10 - 1] [i_8 - 1] [i_9 - 1]) : 250)))));
                        var_20 = (min(var_20, (((arr_21 [i_7]) + (min((arr_21 [i_7]), (arr_21 [i_9])))))));
                        arr_30 [i_7] [22] [i_7] [i_7] [i_9] [i_9 - 1] = (arr_23 [i_10 - 2]);
                        var_21 = ((!(4 >= -4191351824591214492)));
                    }
                }
            }
        }
        var_22 -= (((arr_22 [i_7]) + ((((min((arr_27 [18] [i_7] [17] [i_7]), 137))) / (1073741823 && 53605)))));
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 23;i_12 += 1)
        {
            {

                /* vectorizable */
                for (int i_13 = 1; i_13 < 24;i_13 += 1)
                {
                    arr_41 [i_11] [i_12] [i_13] = ((-((88 ? (arr_33 [i_12]) : var_4))));
                    var_23 = (max(var_23, (((((((!(arr_37 [i_13] [i_12 - 1] [i_12]))))) & (arr_39 [i_13 + 1] [12] [12] [i_12]))))));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    var_24 = ((-(arr_35 [i_11])));

                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        arr_47 [15] [i_12] [i_14] [i_14] = var_3;
                        var_25 = (((~2972939870237224621) >> ((((var_4 << (((arr_31 [i_11]) + 7374)))) - 25165804))));
                        var_26 -= -3929714105;
                        var_27 = (((arr_34 [i_12 - 1] [i_12]) >= (arr_45 [i_12 + 1] [i_12 + 2] [i_12 - 1] [i_12 + 2])));
                    }
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    var_28 = (!var_8);
                    arr_50 [i_11] [i_12] = (((arr_36 [i_12 + 1]) / -529587160));
                    var_29 = (((((var_9 ? 6 : -5469))) <= 945890053));
                }
                var_30 = min(-2399342102167580845, -5477);
            }
        }
    }
    #pragma endscop
}
