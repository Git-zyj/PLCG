/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_1 - 1] [i_2] &= var_12;
                                var_17 = (max((arr_2 [i_0] [i_1] [i_2]), (arr_5 [i_0] [i_2] [i_4])));
                            }
                        }
                    }
                }
                var_18 = (min(var_18, ((((arr_10 [i_0] [i_1] [i_0] [i_0] [i_1 - 1] [i_0] [i_0]) ? (min(8929760403231390959, 14795206374454665122)) : (min(((min((arr_4 [i_0] [9]), (arr_3 [i_0] [i_1])))), (((arr_9 [i_0] [i_0] [i_1] [i_1] [4]) | (arr_8 [i_0] [i_0] [i_0] [i_1]))))))))));
                var_19 ^= var_3;
            }
        }
    }
    var_20 = var_15;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                {
                    var_21 = (max(var_21, ((min(var_1, (max((max(65525, -3095315)), (max(511, var_9)))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 9;i_9 += 1)
                        {
                            {
                                arr_26 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = min(((-var_12 || (((-(arr_10 [i_5] [i_8] [i_5] [i_8] [i_9] [7] [i_8])))))), ((!(arr_7 [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9]))));
                                arr_27 [i_5] [i_5] [i_7 - 1] [i_6] = ((!((max(((min(-211822087, 7))), (min((arr_18 [i_5] [i_5] [3]), (arr_5 [i_5] [i_5] [i_5]))))))));
                            }
                        }
                    }
                    var_22 = (min(var_22, (((((((~(arr_3 [i_6] [i_6])) == -var_6))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                arr_35 [i_6] [i_10] [i_6] [i_7] [i_6] [i_6] = (arr_22 [i_10] [i_6] [i_10] [i_10] [i_5]);
                                arr_36 [i_5] [i_5] [i_6] = min(((max((arr_4 [8] [i_6]), var_1))), ((~(arr_31 [i_5]))));
                                arr_37 [i_6] [i_10] [i_7 + 1] [i_6] [i_6] = ((~(((var_9 <= (arr_7 [i_5] [i_6] [i_6] [i_6] [i_11]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (((max(var_4, var_12)) + (min(var_3, (min(var_12, var_11))))));
    #pragma endscop
}
