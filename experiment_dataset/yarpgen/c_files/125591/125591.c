/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = (min(31240, ((22807 ? (!-26189) : (-31240 || 32134)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_13 = (arr_6 [i_0] [13] [i_0]);

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_14 = ((((((arr_0 [i_4] [i_3]) ? (arr_0 [i_2] [2]) : (arr_7 [i_0] [i_0] [i_2] [8])))) ? -var_4 : (arr_10 [i_0] [i_1] [13] [13] [i_4] [i_2])));
                            var_15 = -var_10;
                            var_16 = arr_13 [i_0] [10] [i_2] [8] [i_4];
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_17 [i_3] = arr_4 [i_0];
                            var_17 = arr_5 [14] [i_1];
                            var_18 ^= ((-(arr_14 [i_0] [i_0] [i_1] [0] [i_3] [i_1] [i_5])));
                        }
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_19 = (min((arr_2 [i_1] [i_0]), -15430));
                            var_20 = (max(var_20, (((!(arr_8 [i_0] [i_0] [i_0]))))));
                        }

                        for (int i_8 = 3; i_8 < 14;i_8 += 1)
                        {
                            var_21 = min(var_0, (arr_14 [i_0] [i_6] [i_6] [i_2] [3] [i_6] [i_0]));
                            var_22 += (max((arr_25 [1] [i_0] [i_2] [i_0] [i_2]), (((arr_20 [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1] [i_6]) ? (arr_25 [i_0] [i_8] [i_2] [i_2] [i_0]) : (arr_16 [i_8 - 3] [i_6] [i_2] [i_1])))));
                            var_23 = min(var_4, var_2);
                            var_24 = (((arr_23 [8] [i_6] [i_2 - 1] [i_6] [i_8 - 2]) || ((max(var_1, (arr_15 [i_0] [i_0] [i_0] [i_0] [11] [i_0] [3]))))));
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_25 = ((((-(((arr_28 [i_6] [i_6] [i_6] [4] [i_0] [i_6]) / (arr_26 [i_0] [i_0] [i_0] [6] [i_0]))))) * ((((min(var_10, var_9))) * ((max(var_4, var_7)))))));
                            var_26 ^= (arr_21 [i_0] [i_0] [6] [i_1] [i_0] [i_0] [i_0]);
                            var_27 = ((!((!(arr_27 [i_0] [8] [i_2] [5] [i_6])))));
                        }
                    }
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_28 = (min(var_28, (arr_0 [14] [14])));
                        var_29 = ((((26189 & ((32767 ? 31256 : -26189)))) << (((min(((var_11 ? (arr_26 [i_0] [i_0] [i_1] [i_2 - 1] [15]) : (arr_28 [i_0] [i_2] [12] [1] [0] [i_10]))), var_8)) + 24100))));
                    }
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        var_30 = var_8;

                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            var_31 = (arr_29 [i_12] [i_12]);
                            var_32 = (min(var_32, (((((+((max((arr_23 [0] [i_11] [i_11] [i_11] [i_11]), (arr_33 [i_1] [i_0])))))) / ((-(((arr_30 [i_0] [i_0] [i_0] [i_0] [12]) ? (arr_26 [i_12] [15] [i_12] [i_12] [5]) : (arr_33 [i_1] [i_1]))))))))));
                        }
                        var_33 ^= -var_7;
                    }
                }
            }
        }
    }
    var_34 = min(32757, -25723);
    #pragma endscop
}
