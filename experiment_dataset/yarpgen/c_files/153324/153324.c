/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_14 = (((max((max(var_12, (arr_0 [i_0]))), ((min((arr_0 [i_1]), var_4))))) % ((((min(-7360, -5832079042981123228))) ? 7359 : (arr_0 [i_0])))));
                    var_15 = (max(var_15, (((~(min((((arr_5 [i_1] [i_0]) | 26078)), (arr_4 [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 = ((-((-(arr_7 [10] [i_1])))));
                                arr_12 [i_1] [i_1] [i_4 - 2] [i_3] [9] = (min((max((arr_9 [i_3 + 1] [i_3 + 1] [i_3 + 1] [2]), ((((arr_11 [i_3] [8]) && (arr_8 [5] [i_3] [i_2] [i_2] [i_1] [i_0])))))), (((((arr_11 [9] [i_4 - 1]) > 2183435343631849027))))));
                                arr_13 [i_1] [1] [i_3] [4] = (max((0 & -27), -7339));
                            }
                        }
                    }
                    var_17 = (min((min((arr_7 [i_0] [i_1]), (arr_4 [7]))), (max(var_12, (arr_4 [i_2])))));
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_16 [i_1] = (2669512440289871312 & 71);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] &= ((-((-var_8 ? (((!(arr_8 [i_0] [i_1] [i_5] [i_6] [i_0] [i_7])))) : var_2))));
                                var_18 &= (max((((arr_3 [i_1]) ? (arr_3 [i_7]) : (arr_1 [i_0] [i_1]))), ((max((min((arr_8 [i_0] [i_1] [i_5] [i_6] [i_6] [i_7]), var_12)), (arr_6 [i_6] [i_6]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_19 ^= var_11;
                                arr_32 [i_1] [i_1] [i_1] = ((((((arr_21 [i_0] [i_1] [6] [i_8] [i_9]) ? (min((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_2 [0] [i_0] [i_0]))) : var_12))) ? ((max(((((arr_20 [i_9] [i_8] [i_8] [i_5] [i_1] [i_0]) || (arr_23 [i_0] [i_1] [i_1] [i_8])))), (((arr_2 [2] [i_1] [i_1]) ? (arr_17 [i_0] [i_9]) : (arr_29 [i_0] [i_1] [i_5] [i_8])))))) : ((((((arr_9 [i_1] [i_5] [1] [13]) & var_11))) ? -var_4 : (min((arr_3 [i_0]), var_1))))));
                            }
                        }
                    }
                    arr_33 [i_1] [i_1] = var_3;
                }
                var_20 *= arr_23 [4] [i_1] [i_0] [i_0];
            }
        }
    }
    var_21 = ((~(((!(var_10 - var_12))))));
    #pragma endscop
}
