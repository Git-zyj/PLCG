/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (!var_19);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_21 = ((((max(2199022731264, 9223231299366420480))) || (max((!1), ((!(arr_1 [14] [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_22 = (((!1) << ((((max((arr_10 [i_3 + 1] [i_0 + 1]), (arr_10 [i_3 + 2] [i_0 + 1])))) + 48))));
                                var_23 = (max(var_23, (((!(arr_1 [i_0 + 1] [i_0]))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_24 = ((~(arr_12 [i_0 + 1] [i_1] [i_2] [i_5] [i_0] [i_0] [i_2])));
                        arr_18 [i_5] [i_2] [i_2] [i_0 + 1] = (arr_6 [2] [i_0 + 1] [i_2]);
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_21 [i_2] [i_2] = (arr_5 [i_0] [i_0]);
                        var_25 = (max((max((arr_15 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_2]), (arr_15 [i_0 + 1] [14] [i_0 + 1] [i_0 + 1] [i_2]))), (arr_15 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_2])));
                        var_26 = ((((((arr_20 [i_0] [i_0 + 1] [i_0] [i_1]) & 32767))) == (max((arr_8 [i_0 + 1]), (arr_1 [i_0 + 1] [i_0 + 1])))));
                        arr_22 [i_0] [i_2] [i_6] = (arr_4 [i_0 + 1] [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        arr_26 [i_0] [i_1] [i_2] [i_2] = (arr_2 [i_0 + 1]);
                        var_27 = (--11);
                        var_28 = (((arr_16 [i_2] [i_1] [i_2] [i_1]) ? (arr_8 [i_0]) : (arr_5 [i_0 + 1] [i_7 - 1])));
                    }
                    arr_27 [i_2] [i_2] = (((arr_16 [i_2] [i_1] [i_2] [i_2]) && (arr_16 [i_2] [i_1] [i_1] [13])));
                    var_29 = (max(var_29, (((-(((arr_11 [i_1]) ? (arr_11 [i_1]) : 11)))))));
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_30 = ((~(arr_13 [0] [i_0] [i_0 + 1] [1] [i_8])));
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_31 = (arr_11 [i_1]);
                                var_32 = (10 * var_5);
                            }
                        }
                    }
                }
                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            {
                                var_33 ^= (arr_32 [i_0] [i_0] [i_0] [i_0]);
                                arr_44 [i_0] [i_0] [i_0] [i_0] = (arr_7 [i_13] [i_12] [i_11] [i_1]);
                                var_34 = (min(var_34, (arr_11 [i_1])));
                            }
                        }
                    }
                    var_35 = (arr_35 [i_0] [i_0] [16] [i_1] [i_1] [i_11 + 2] [16]);
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 16;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            {
                                arr_51 [7] [i_11 + 1] [i_11] [i_11] = (arr_11 [i_1]);
                                arr_52 [i_0 + 1] [i_0 + 1] [i_0] [0] [i_0] [i_0] = (((arr_46 [i_15] [1] [i_11 - 1] [i_0]) ? (((~(arr_13 [i_14 - 1] [i_1] [i_11] [i_14 - 2] [i_15])))) : (max((~var_4), (arr_12 [i_0 + 1] [i_0] [i_0] [i_11 + 1] [i_14] [i_14 - 1] [i_1])))));
                            }
                        }
                    }
                }
                var_36 = (((arr_42 [1] [i_1]) <= ((((arr_15 [i_1] [i_1] [i_0 + 1] [i_0] [i_1]) >= (arr_15 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [i_1]))))));
                var_37 = ((~(arr_15 [i_0] [i_0] [i_1] [i_1] [i_1])));
            }
        }
    }
    var_38 = 0;
    #pragma endscop
}
