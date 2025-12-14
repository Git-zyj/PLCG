/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_13 &= (((arr_2 [i_1]) ? (arr_3 [i_0] [i_1]) : (8447570252996224100 && 254)));
                    var_14 = ((((arr_1 [i_2]) ? (arr_3 [i_0] [i_2]) : (arr_3 [i_0] [i_2]))));
                    var_15 = arr_8 [i_0] [i_0] [i_2] [i_2];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 |= (arr_1 [i_2]);
                                var_17 = min((((arr_3 [11] [i_2]) + (arr_1 [i_1]))), ((((arr_5 [i_4]) ? (arr_8 [i_0] [i_1] [7] [1]) : (((arr_3 [1] [i_3]) ? (arr_6 [11] [i_2] [i_4]) : (arr_2 [13])))))));
                                var_18 -= (min((arr_10 [8] [i_2] [i_4] [i_4]), (((arr_11 [i_0] [i_0] [i_1] [i_4] [i_3] [i_4]) ? (((arr_6 [i_0] [4] [0]) ? (arr_7 [9] [i_3] [i_4]) : (arr_11 [i_0] [6] [i_2] [i_4] [14] [i_4]))) : (((arr_11 [i_0] [i_0] [i_1] [i_4] [i_3] [i_4]) ? (arr_9 [0] [i_1] [i_2] [i_3]) : (arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3])))))));
                                arr_15 [i_3] [i_3] = (((arr_3 [i_0] [i_1]) ? (arr_3 [i_3] [i_4]) : (arr_6 [i_0] [i_2] [i_4])));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    var_19 -= (arr_10 [i_0] [i_1] [i_1] [i_5]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_20 ^= (arr_14 [i_0] [i_0] [2] [i_6] [i_7]);
                                var_21 = (arr_20 [i_0] [i_1] [i_5] [i_6] [i_7]);
                            }
                        }
                    }
                    var_22 &= (arr_18 [i_0] [9] [5] [i_5] [i_5]);
                    var_23 = (((arr_12 [7] [3] [i_1] [i_5] [i_5] [i_5]) ? (arr_9 [i_0] [i_1] [i_1] [i_5]) : ((-((((arr_2 [13]) || (arr_11 [i_0] [i_0] [i_1] [i_5] [i_1] [i_5]))))))));
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    var_24 = (arr_14 [i_0] [i_1] [i_1] [i_8] [i_8]);
                    var_25 = (arr_8 [i_0] [i_1] [i_1] [i_1]);
                    arr_26 [i_0] [11] [i_1] [9] = (((((((arr_7 [2] [i_1] [i_8]) ? (arr_7 [i_0] [9] [i_8]) : (arr_17 [i_0] [i_1] [10] [i_8])))) || ((((arr_20 [i_0] [i_1] [i_1] [i_8] [i_8]) ? (arr_0 [i_8]) : (arr_1 [i_0])))))) ? (arr_4 [10]) : (arr_8 [i_0] [i_1] [i_0] [i_8]));
                    arr_27 [i_0] [i_8] = (max((((((((arr_17 [i_0] [i_1] [i_8] [i_0]) ? (arr_14 [i_0] [i_0] [i_1] [5] [4]) : (arr_2 [4])))) ? (arr_25 [i_0]) : (((arr_5 [4]) ? (arr_7 [i_0] [10] [i_8]) : (arr_6 [i_0] [i_0] [i_8])))))), (max(-298658905791210339, -5726770385728824264))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_26 = (arr_19 [i_0] [1] [i_0]);
                                arr_35 [i_0] [i_0] [i_9] = (arr_18 [4] [i_1] [i_8] [i_9] [i_10]);
                                var_27 = (max(var_27, (((!(arr_17 [i_0] [i_8] [i_9] [i_10]))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_28 = ((-(max(4294967295, 4476830854291060164))));
                                var_29 += ((-101833015 ? (((((arr_14 [i_0] [9] [i_11] [i_12] [i_13]) ^ (arr_25 [i_11]))))) : ((-(arr_33 [i_0] [1] [i_11] [i_12] [i_13])))));
                                var_30 = (max(var_30, ((((arr_32 [i_0] [i_1] [3] [i_11] [0] [i_13]) & (arr_32 [5] [5] [i_11] [i_12] [5] [i_13]))))));
                                arr_42 [i_0] [i_1] [4] [i_12] [i_13] = (arr_32 [i_0] [i_0] [0] [11] [i_13] [i_13]);
                            }
                        }
                    }
                }
                var_31 = (max(var_31, (arr_25 [i_1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 20;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                {
                    var_32 = (max(var_32, ((((arr_50 [i_14] [i_15] [3] [4]) ? ((((!(arr_50 [i_14] [i_15] [13] [4]))))) : (((((arr_45 [i_14]) <= (arr_46 [i_14] [14] [7]))) ? (((arr_51 [i_14] [i_15] [18] [i_16]) / (arr_46 [i_14] [1] [i_16]))) : 31)))))));
                    arr_52 [i_14] [i_15] [i_16] = (max((arr_50 [19] [i_14] [i_15] [12]), ((max((arr_47 [i_14] [i_15]), (arr_47 [i_14] [i_16]))))));
                    arr_53 [i_14] [i_15] [i_14] [12] = max((arr_45 [13]), ((~(arr_51 [1] [i_14] [18] [18]))));
                    var_33 ^= (arr_47 [i_15] [i_16]);
                }
            }
        }
    }
    var_34 = ((max(var_8, (~var_9))));
    var_35 = var_3;
    #pragma endscop
}
