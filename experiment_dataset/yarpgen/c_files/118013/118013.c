/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_17;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_21 = (max(var_21, (arr_5 [i_1])));

            for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
            {
                arr_9 [i_0] [i_0] = (arr_7 [i_0] [i_0] [i_0]);
                var_22 = ((((max((!var_11), (((arr_3 [7] [7] [i_0]) ? 128 : (arr_8 [i_1] [i_1])))))) ? ((((var_5 ? var_6 : 1)))) : ((min((6224749774684636189 || 7), (arr_2 [i_2]))))));

                for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    var_23 = -15044;
                    var_24 ^= (arr_0 [i_0]);
                    var_25 = ((((((64139 + 3081942951) ? (~var_4) : (arr_10 [i_3] [i_2] [1] [i_1] [1])))) ? (arr_10 [i_0] [i_1] [i_2] [i_2] [4]) : (arr_4 [i_2])));
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                {
                    var_26 &= (min(((266338304 ? 4294967286 : -4960)), (((arr_3 [i_0] [i_1] [i_1]) ? (arr_3 [i_0] [i_0] [i_1]) : var_0))));
                    var_27 = (max((arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [2]), ((min((!2), 32754)))));
                    var_28 &= 1398;
                }

                for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    var_29 ^= ((arr_15 [i_0] [i_0]) ? (arr_3 [i_1] [i_1] [i_1]) : ((+(((arr_16 [i_2]) >> (((arr_14 [i_5] [i_5] [i_2] [i_5] [i_5] [8]) - 1248423760)))))));
                    var_30 ^= (+(((arr_3 [16] [i_0] [i_2]) ? var_14 : (arr_11 [i_0] [i_5] [i_0] [i_0] [7] [i_1]))));
                    var_31 = ((-(1 < 1394)));
                    var_32 = (!((((!var_2) ? var_17 : (((((arr_2 [i_5]) + 2147483647)) << (((arr_13 [i_0] [15] [15] [15] [i_0] [1]) - 1714934493037198693))))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    arr_20 [1] [1] [5] [i_0] [5] [1] = (((4294967290 || -42) ? (((((arr_17 [i_1] [i_1]) < (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (var_17 / var_13)));
                    var_33 = 102;
                    var_34 = 3800;
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                {
                    arr_24 [i_0] [i_1] [i_1] [i_1] [i_0] [i_7] = 9115;
                    arr_25 [i_0] [i_0] [i_2] [i_2] [i_7] = (((((((min(138, 59)))) / (min(var_4, 5)))) > (arr_22 [i_0] [i_1] [9])));
                }

                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {

                    for (int i_9 = 1; i_9 < 14;i_9 += 1)
                    {
                        var_35 = (max(var_35, ((min(139, 6)))));
                        arr_31 [3] [i_0] [i_8] [3] [3] [i_0] [i_0] = ((((!(arr_29 [i_9 - 1] [5] [5] [i_8] [3]))) && (((arr_29 [i_9 - 1] [i_8] [i_0] [12] [6]) || (arr_29 [i_9 - 1] [i_9 - 1] [0] [i_8] [0])))));
                        var_36 = (min(var_36, ((((!((max((arr_0 [i_2]), 1)))))))));
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        var_37 |= var_12;
                        var_38 *= ((((max(var_15, 114))) ? (arr_13 [i_0] [1] [i_1] [7] [i_0] [i_0]) : -2067261934));
                        var_39 = (max(var_39, 64167));
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        var_40 = (min((arr_8 [i_0] [i_0]), (((!((((arr_28 [i_0] [i_0] [5] [1] [i_0]) ? (arr_12 [3] [i_0] [i_0] [10] [i_2]) : var_17))))))));
                        var_41 = ((((!(arr_21 [i_0] [i_2] [i_8] [i_0])))));
                        arr_36 [8] [i_1] [i_2] [i_8] [i_1] [i_1] |= (min(32744, ((8848970431592907701 | (arr_26 [i_0] [i_2] [i_8])))));
                        arr_37 [i_0] [i_0] [i_0] [i_8] [i_11] [0] = (((min((arr_19 [i_2] [i_0]), var_11))) / ((~(min(var_14, var_8)))));
                        var_42 = ((((((arr_33 [4] [i_0] [i_0] [i_0] [i_0]) / -47))) ? (((-32759 * (((arr_27 [i_0]) ? 4399 : var_10))))) : 16));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        var_43 = (((arr_14 [i_0] [i_0] [i_0] [i_2] [i_8] [i_0]) ? -266346998 : -2654431777));
                        var_44 = (!var_7);
                        arr_40 [i_0] = ((!(arr_14 [i_12] [i_8] [i_0] [i_0] [i_0] [i_0])));
                        var_45 *= (-11823 * -22694);
                    }
                    var_46 |= ((var_1 ? (max((arr_4 [i_0]), (arr_11 [i_0] [i_0] [6] [15] [i_2] [i_8]))) : var_16));
                    arr_41 [15] [i_2] [i_2] [i_0] = ((-(!5587386613043951040)));
                }
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    var_47 = (min(var_47, var_2));
                    var_48 = (((var_4 ? var_12 : var_2)));
                }
            }
            for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 15;i_16 += 1)
                    {
                        {
                            arr_52 [i_16 + 2] [i_1] [i_14] [i_1] [i_1] [i_0] |= ((((max((arr_44 [i_16] [i_16] [i_16 - 1] [i_16 - 1] [i_16] [i_16 - 1]), -115))) ? (min((arr_38 [i_16 + 1] [i_16] [i_16] [i_16 + 2] [6]), (arr_45 [i_16 + 2]))) : ((246 ? -50 : 120))));
                            var_49 = (~var_13);
                        }
                    }
                }
                var_50 = ((!((max(var_6, (max(var_1, var_7)))))));
            }
        }
        var_51 = (max(var_51, var_2));
        var_52 ^= (max(-9872, 132));
    }
    var_53 |= ((((~(-7536 >= var_9))) - 64137));
    #pragma endscop
}
