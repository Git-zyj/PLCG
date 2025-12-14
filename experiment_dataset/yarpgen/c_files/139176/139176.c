/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max((max(72057594037927935, var_11), (~var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_8 [i_2] [i_2] [i_0] [i_3] [i_2] [3] &= (max(576460752303422464, ((max(120, 0)))));
                            var_13 *= ((-(max((((-(arr_6 [i_0] [i_3])))), ((~(arr_3 [i_0] [i_2] [i_3])))))));

                            for (int i_4 = 1; i_4 < 17;i_4 += 1)
                            {
                                var_14 = arr_10 [i_1] [i_2] [i_3];
                                var_15 = (~(arr_2 [i_0]));
                            }
                            for (int i_5 = 0; i_5 < 18;i_5 += 1)
                            {
                                var_16 = ((!((max(-8, 82)))));
                                arr_14 [i_2] [i_1] [i_0] = (~72057594037927935);
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_2] = (max((max((min(18, 7)), (min((arr_5 [i_0] [i_0] [i_2]), (arr_5 [i_0] [i_3] [6]))))), (arr_6 [i_1] [i_3])));
                            }
                            for (int i_6 = 0; i_6 < 18;i_6 += 1)
                            {
                                arr_20 [i_6] [i_3] [i_2] [i_1] [i_0] = min(576460752303422464, -120);
                                var_17 = ((-(max(((min((arr_12 [i_0] [i_0] [i_2] [i_3] [i_6]), (arr_0 [i_0] [i_3])))), ((~(arr_12 [i_0] [i_0] [i_0] [9] [i_0])))))));
                            }

                            for (int i_7 = 3; i_7 < 14;i_7 += 1)
                            {
                                var_18 = (max(((-((-(arr_1 [i_0]))))), (max(1, ((min(0, 105)))))));
                                var_19 = (min((arr_0 [5] [i_7]), ((-(arr_6 [8] [8])))));
                                arr_24 [i_3] [i_1] [i_2] [i_3] [i_3] [i_2] = arr_11 [i_0] [i_1] [i_2] [i_3 - 2] [i_7] [i_7] [i_3];
                                arr_25 [i_0] [i_0] [i_2] [i_3] [i_7] = 28;
                            }
                            for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                            {
                                var_20 &= max((((!(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))), (max((max((arr_0 [i_0] [i_1]), (arr_21 [i_0] [i_1] [9] [i_3 - 1] [11]))), (max((arr_0 [i_0] [i_1]), (arr_9 [i_8]))))));
                                arr_28 [i_0] [16] [10] [i_0] [i_8] [i_1] [16] = -72057594037927935;
                            }
                            for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                            {
                                var_21 ^= (max(((+((min((arr_17 [i_0] [i_1] [i_2] [i_2] [i_1] [i_3 + 1] [i_1]), (arr_18 [i_0] [i_1] [i_2] [i_3 - 1] [i_3 - 1])))))), (max((arr_1 [17]), (arr_7 [i_0] [4] [i_0] [i_3] [i_9])))));
                                arr_31 [i_0] = (arr_4 [i_2] [16] [i_2]);
                            }

                            for (int i_10 = 4; i_10 < 14;i_10 += 1)
                            {
                                arr_34 [i_0] [i_0] [i_0] [i_0] = (max((min(((max((arr_23 [6] [i_2] [i_3] [i_10]), (arr_23 [15] [i_2] [i_1] [i_0])))), ((-(arr_23 [15] [i_1] [i_1] [i_3]))))), (max((~124), (arr_10 [i_10] [i_10] [2])))));
                                arr_35 [i_0] [i_1] [i_3] [14] = 0;
                            }
                            /* vectorizable */
                            for (int i_11 = 0; i_11 < 18;i_11 += 1)
                            {
                                arr_39 [8] [i_0] [i_0] [i_2] [i_3] [i_11] = arr_4 [16] [i_0] [14];
                                arr_40 [i_0] [i_1] [i_1] [i_1] [i_11] = (~-18);
                                var_22 = (max(var_22, (((-((~(arr_26 [i_0] [i_0] [i_2]))))))));
                            }
                            for (int i_12 = 0; i_12 < 18;i_12 += 1)
                            {
                                arr_43 [14] [i_1] [i_2] [15] [i_12] = max(18, (-9223372036854775807 - 1));
                                var_23 = (max(var_23, (arr_7 [11] [i_1] [i_2] [i_3 - 1] [17])));
                                var_24 = ((-((-((-(arr_22 [i_0] [11] [i_0] [i_1] [i_0] [6] [i_12])))))));
                            }
                        }
                    }
                }
                var_25 = max(15, (arr_29 [i_0]));
            }
        }
    }
    var_26 -= var_1;
    #pragma endscop
}
