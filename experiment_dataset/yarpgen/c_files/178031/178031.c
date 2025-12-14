/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (arr_0 [i_4]);
                                var_21 &= 0;
                            }
                        }
                    }
                    var_22 -= 47955;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_6] = (arr_5 [i_5] [i_5] [i_0]);
                                var_23 = (min((arr_13 [i_0]), (arr_1 [i_6])));
                                arr_19 [i_0] [i_1] [i_2] [i_0] [i_2] = (arr_8 [i_6] [i_5] [i_1] [i_1] [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_0;
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 3; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_34 [i_11] [i_11] [i_11] [i_11] [i_10] [i_9] = (arr_31 [i_7] [i_8] [i_8] [i_10]);
                                var_25 = 0;
                                var_26 = (min(var_26, (arr_22 [i_9])));
                                var_27 = arr_2 [i_9 - 3];
                                arr_35 [i_11] [i_8] [i_10] = (min(21, (arr_33 [i_11] [i_8] [i_8] [i_8] [i_7])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        {
                            arr_41 [i_7] [i_8] [i_12] [i_8] &= (min((((arr_40 [i_13] [i_7] [i_7] [i_7] [i_7] [i_7]) ? (arr_9 [i_8] [i_8] [i_8] [i_7]) : ((-(arr_3 [i_7] [i_7]))))), ((~(arr_40 [i_12] [i_12] [i_12] [i_13] [i_13] [i_12])))));

                            /* vectorizable */
                            for (int i_14 = 3; i_14 < 15;i_14 += 1)
                            {
                                arr_45 [i_7] [i_7] &= ((1 ? (arr_10 [i_14] [i_12] [i_8] [i_7]) : (arr_4 [i_14] [i_8] [i_8])));
                                var_28 = (max(var_28, 18446744073709551615));
                                var_29 = (((arr_1 [i_12]) ? (arr_33 [i_8] [i_8] [i_8] [i_8] [i_8]) : (arr_32 [i_7] [i_8] [i_7] [i_12] [i_12] [i_13] [i_7])));
                            }
                            arr_46 [i_13] [i_12] [i_8] = min(((min((arr_22 [i_7 + 3]), (arr_22 [i_7 + 2])))), (arr_39 [i_7] [i_12] [i_7]));
                            arr_47 [i_7] [i_7] [i_7] [i_13] [i_13] = ((-((((((arr_20 [i_8] [i_7]) ? (arr_39 [i_7] [i_8] [i_8]) : (arr_9 [i_7] [i_7] [i_7] [i_13])))) ? (arr_40 [i_7 + 2] [i_7] [i_7] [i_7] [i_7 + 2] [i_7 + 1]) : (((arr_24 [i_7] [i_7]) ? 247 : 2231477955331248468))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
