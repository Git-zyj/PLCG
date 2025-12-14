/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~(((var_1 > (((max(6628, 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = (max(((((max((arr_2 [i_4] [1]), -6628))) ? (arr_3 [i_4] [i_0]) : (arr_11 [i_0]))), (--6628)));
                                var_16 = (arr_0 [i_2]);
                            }
                        }
                    }
                }
                var_17 |= (((-(((arr_10 [i_0] [i_1] [10]) / var_5)))));
                var_18 = (arr_5 [i_0] [1] [i_1]);

                for (int i_5 = 4; i_5 < 13;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_19 = arr_1 [i_0] [i_1];
                        var_20 = (arr_8 [3] [i_1] [i_5] [i_6]);
                        var_21 = (arr_9 [i_0] [i_0] [i_0] [i_5] [12] [i_6]);
                        var_22 = (max(26, 49334));
                    }
                    var_23 = (((((~(((arr_9 [i_0] [i_1] [i_0] [i_5] [0] [i_5]) ? (arr_15 [4] [4] [i_5]) : (arr_16 [i_0] [i_1] [i_5])))))) ? (arr_18 [i_0] [i_0] [i_1] [2]) : (((((((arr_17 [6] [2] [i_1] [i_0] [i_0] [i_0]) ? 49341 : var_0))) || (!24233))))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_24 = ((-0 ? (arr_11 [i_1]) : 1));
                    var_25 = ((~(((!(arr_0 [i_7]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_26 = ((!(arr_16 [i_0] [i_7] [i_9])));
                                var_27 = ((-(arr_0 [13])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = ((var_7 | ((~((max(var_0, var_13)))))));

    /* vectorizable */
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_29 = (arr_10 [0] [i_10] [i_10]);
        var_30 = (49341 | -979475292);
        var_31 ^= ((15 ? (arr_13 [i_10] [i_10] [12] [i_10] [i_10] [i_10]) : ((((!(arr_9 [12] [i_10] [4] [i_10] [i_10] [i_10])))))));
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        var_32 = ((((min((arr_28 [i_11]), (arr_28 [i_11])))) ? (arr_28 [i_11]) : (((arr_28 [i_11]) ? (arr_29 [i_11] [i_11]) : (arr_29 [i_11] [i_11])))));
        var_33 = (max((max((arr_29 [i_11] [i_11]), (arr_29 [i_11] [i_11]))), (((arr_29 [i_11] [i_11]) | (arr_29 [i_11] [i_11])))));
        var_34 = (max(var_34, ((min((((((arr_29 [i_11] [i_11]) + var_9)))), (max((arr_28 [i_11]), (arr_29 [i_11] [i_11]))))))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        var_35 = (arr_28 [i_12]);
        /* LoopNest 3 */
        for (int i_13 = 2; i_13 < 17;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 14;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 15;i_15 += 1)
                {
                    {

                        for (int i_16 = 1; i_16 < 17;i_16 += 1)
                        {
                            var_36 = (arr_37 [i_15] [i_15 + 2] [i_14] [i_14]);
                            var_37 = ((((((arr_43 [i_12] [i_13] [i_13] [i_14] [i_14] [i_15] [15]) ? (arr_36 [i_16] [i_15]) : (arr_31 [1])))) ? (arr_37 [i_12] [i_14 + 4] [i_15] [12]) : 10));
                            var_38 = ((var_3 && (((var_10 ? var_6 : (arr_30 [i_12] [i_13]))))));
                            var_39 |= (arr_39 [4]);
                            var_40 = var_0;
                        }
                        var_41 = ((arr_30 [i_15 + 3] [2]) ? (arr_36 [i_13 - 2] [i_14 + 3]) : (((!(arr_43 [i_15] [0] [i_13] [i_13] [7] [0] [i_12])))));
                    }
                }
            }
        }
    }
    for (int i_17 = 3; i_17 < 23;i_17 += 1)
    {
        var_42 = var_2;
        var_43 = ((((max(137719723720437153, (arr_44 [i_17])))) ? (arr_44 [i_17]) : (((-25 <= (arr_44 [i_17]))))));
    }
    #pragma endscop
}
