/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_3));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [i_2] [i_1] [i_1] = (max(-4764470799557512844, (arr_5 [i_0] [i_0 - 1])));
                        arr_12 [i_2] = ((!((max(-4764470799557512852, (arr_7 [i_0 - 2]))))));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_12 = (max(((max(182, (arr_8 [3] [i_1])))), (max((((!(arr_16 [9] [9] [i_2] [i_2])))), 8894365311768705110))));
                        arr_17 [1] [1] [i_1] [i_2] [i_2] = (max((max(((max(-1183267045, 48))), (max(5, 0)))), (~786432)));
                        var_13 = (min(var_13, (max(((~(arr_6 [i_1] [i_0] [i_4]))), (~60)))));

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            var_14 ^= (arr_3 [i_0 + 1]);
                            var_15 = (max(var_15, (!0)));
                            var_16 *= (arr_19 [12] [i_4 - 1] [i_0] [i_5 + 1]);
                            arr_21 [i_0 + 1] [i_1] [i_2] [i_1] [i_0] [i_1] = 4764470799557512844;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_17 ^= -852008832;
                            var_18 = ((~(arr_1 [8])));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        var_19 = (max(var_19, 65530));

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_32 [i_1] [i_1] [i_2] [i_8] = 127;
                            arr_33 [i_0] [i_1] [i_0 - 1] [i_2] [i_8] = ((!(arr_1 [i_0 - 2])));
                        }
                    }
                    var_20 = (max(((~(arr_16 [i_2] [i_2] [i_1] [i_0]))), (arr_30 [i_2] [i_1] [i_2 - 1] [18] [i_1])));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((~(arr_22 [i_0 + 1])))));
                                arr_40 [i_2] [i_1] [i_2] [13] [i_10] = (!(arr_15 [i_10] [i_1] [i_0 + 1] [i_9] [i_10]));
                                var_22 = (max((arr_38 [6] [i_2 + 1] [i_2 - 1] [i_1] [i_0 - 2] [i_0] [i_0 - 1]), (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                    var_23 = (max(var_23, (((!((max((max(3715588245, (arr_18 [i_0] [i_0] [i_0 - 1] [i_1] [i_0]))), ((max((arr_30 [i_1] [i_2] [i_2] [i_1] [i_1]), 8176)))))))))));

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        arr_43 [i_2] [i_2] = (arr_26 [5] [9] [i_2 - 1] [i_11] [i_0 - 2] [i_0]);
                        var_24 = 0;
                    }
                }
            }
        }
    }
    #pragma endscop
}
