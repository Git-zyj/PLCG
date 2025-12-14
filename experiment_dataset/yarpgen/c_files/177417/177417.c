/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_11 = ((((((arr_4 [i_0 - 1] [i_0] [i_0] [i_0 + 1]) && (arr_4 [i_0 - 1] [i_0] [i_0] [i_0])))) & ((((arr_4 [i_0 - 1] [i_0] [i_0] [i_0]) || (arr_4 [i_0 + 2] [i_0] [i_0] [i_0 + 2]))))));
                                var_12 = (max(var_12, ((max((((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3]) ? (arr_7 [i_0] [i_0] [i_0 + 2] [i_3]) : (arr_7 [i_0] [i_0] [i_0 + 2] [i_0 + 2]))), ((((((arr_10 [4] [4] [4] [i_3] [4]) * (arr_5 [i_2 + 2] [i_3] [i_2 + 2] [i_0])))) ? (((arr_4 [i_0] [14] [i_2] [i_0]) / (arr_1 [i_4] [8]))) : (((arr_6 [i_0] [8]) * (arr_8 [12] [6] [i_2] [i_3]))))))))));
                                var_13 = (max(var_13, (((!(arr_0 [i_0 - 1]))))));
                                var_14 ^= ((((((arr_11 [i_3] [18] [18] [i_0]) && (arr_11 [i_0 + 1] [10] [i_2 - 1] [10])))) == (((arr_11 [i_4] [16] [16] [i_0]) >> (((arr_11 [i_1] [4] [4] [i_4]) - 85))))));
                            }
                        }
                    }
                }
                var_15 = (max(65, (-19350 == 45)));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] [i_5] [i_0] [i_0] = (arr_12 [i_0 + 1] [i_0 + 1] [i_6]);
                                var_16 = (~(max((arr_9 [i_7] [i_7 + 1] [i_7 + 1] [i_0] [i_7 - 1]), (((arr_15 [i_0] [7] [i_0] [6]) ? (arr_9 [i_0 - 1] [i_0 - 1] [i_5] [i_0] [i_0 - 1]) : (arr_0 [17]))))));
                                var_17 = ((~(max((arr_11 [5] [i_0] [5] [i_7 + 1]), ((~(arr_11 [i_0 + 1] [i_0] [i_0] [i_7 - 1])))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_18 = arr_21 [i_0] [i_0];
                            var_19 = ((((((((arr_0 [i_0 + 1]) && (arr_4 [i_1] [i_0] [19] [10]))) ? (((!(arr_1 [i_0] [i_0])))) : ((((arr_11 [i_0] [i_0] [i_0] [1]) || (arr_4 [i_0] [i_0] [i_0] [i_0]))))))) ? ((min(11, -30409))) : ((((((arr_15 [i_0] [i_1] [i_8] [i_9 + 1]) || (arr_12 [i_1] [i_1] [i_9 - 3]))) && ((max((arr_20 [i_0]), (arr_11 [i_9 - 1] [i_0] [i_0] [i_0 + 2])))))))));
                            var_20 = (max(var_20, ((((arr_0 [i_9]) <= (((!(16 & 2120117604)))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 17;i_11 += 1)
                    {
                        {
                            arr_28 [i_0] [i_1] [i_10] [i_11] = (((((((!(arr_26 [i_11] [i_10] [i_10] [i_1] [i_0])))) ^ (((arr_4 [i_0] [i_0] [i_0] [i_0]) ? (arr_23 [i_0] [i_0] [i_1]) : (arr_25 [i_0] [i_0])))))) ? ((min((arr_1 [i_0 + 1] [i_0]), ((((arr_14 [i_0 - 1] [i_0]) || (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (((-(arr_23 [i_0] [i_1] [i_0])))));
                            var_21 = ((((max((arr_14 [i_0 - 1] [i_0]), (arr_14 [i_0 - 1] [i_0])))) > ((-11257 ? 27919 : -32088))));
                            var_22 ^= (min((((arr_20 [i_11 - 3]) >= (arr_20 [i_11 - 3]))), ((-39 != (arr_3 [12])))));
                            arr_29 [i_0] [i_1] [i_0] [i_11 - 2] = (arr_24 [i_11 - 1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
