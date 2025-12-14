/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = ((((max((min((arr_3 [i_0] [i_0]), var_1)), (arr_3 [i_2] [i_0])))) ? (((arr_5 [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_2]) : (arr_5 [i_0] [i_0] [i_2]))) : ((-1 ? -81 : 3498712065))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, ((max(((max((min((arr_4 [i_0 - 4] [i_4] [i_2]), (arr_8 [i_0 - 4] [i_1] [0]))), (274877906943 >= var_0)))), (max((arr_5 [i_0 - 4] [i_1] [i_0 - 2]), 796255231)))))));
                                var_14 = (max((((arr_3 [i_0] [i_0]) + (var_8 - var_4))), (min(((min(var_5, (arr_8 [i_4] [i_0] [i_4])))), (max((arr_3 [i_0] [i_0]), (arr_5 [i_2] [i_0] [i_4])))))));
                            }
                        }
                    }
                    var_15 = (arr_2 [i_0]);
                    var_16 *= (((arr_7 [8] [i_1] [i_2] [i_1]) / (min(((min((arr_0 [i_0]), var_8))), (arr_3 [i_0 - 1] [i_1])))));
                    arr_10 [i_0] [i_1] [1] = (max((arr_8 [13] [i_0] [i_2]), (((~var_1) ? (arr_7 [i_0 - 1] [i_0] [i_2] [i_1]) : 104))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            {
                arr_17 [i_5] [i_6] = (min((arr_15 [i_5]), (max((arr_7 [i_5] [i_5] [i_6] [i_6 + 1]), (min(var_11, (arr_1 [i_5] [i_6 + 3])))))));
                arr_18 [i_5] = (((arr_14 [i_5]) % 77));
                var_17 = (max(var_17, ((((arr_12 [i_5 - 2] [8]) != (max(-81, 11072982729337422647)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    var_18 = (max(((max((arr_19 [i_7] [i_8 + 1]), (min((arr_21 [i_7]), (arr_22 [i_7])))))), (min((((arr_20 [i_7]) ? (arr_19 [i_7] [i_8]) : (arr_23 [i_7] [i_7] [i_9]))), ((max(-81, (arr_24 [i_7] [i_7] [i_9]))))))));
                    var_19 &= (max(((1491381160 ? -1 : 16083667622427400358)), (((-(min((arr_22 [i_9]), (arr_20 [i_9]))))))));
                    arr_26 [7] [i_7] [i_9] [4] = ((-(arr_20 [i_7])));
                    var_20 = (arr_22 [i_7]);
                    arr_27 [i_7] [i_7] [i_7] = var_9;
                }
            }
        }
    }
    #pragma endscop
}
