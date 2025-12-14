/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((1 ? ((((!var_10) || var_7))) : (~-1319591657)));
    var_13 |= ((!((max(((max(var_4, var_4))), var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                arr_14 [i_2] &= ((201304687 ? (arr_10 [i_0] [i_0 - 1]) : (min(var_5, (arr_10 [i_3] [i_3])))));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_0] = ((((((arr_1 [i_1] [i_2 - 2]) ? (arr_10 [i_3] [i_2]) : ((((-9223372036854775807 - 1) ? 201304687 : 4093662627)))))) && (arr_3 [i_2])));
                                var_14 ^= 9223372036854775807;
                            }
                            var_15 = (arr_4 [i_1] [i_1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((((((var_8 / (arr_21 [14] [i_5 - 1] [i_5 - 1] [i_0 + 2] [i_0 + 2] [14])))) ? ((((arr_21 [12] [i_5] [i_5 - 1] [i_5 + 1] [1] [12]) != (arr_21 [10] [10] [i_5 - 1] [i_5] [i_5] [10])))) : (min(4094, (arr_21 [8] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 1] [8]))))))));
                            var_17 = (min(var_17, (((((-(arr_19 [14]))) - (min((arr_17 [i_1] [10] [0]), 1)))))));
                            arr_22 [i_1] = (14680064 >= 49);
                            var_18 = var_6;
                        }
                    }
                }

                /* vectorizable */
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    var_19 = (max(var_19, ((((!9223372036854775807) ? (arr_10 [i_0] [i_0 - 1]) : 201304687)))));
                    var_20 = (min(var_20, (((4093662608 ? var_5 : (((var_10 > (-9223372036854775807 - 1)))))))));
                    arr_25 [i_7] [i_1] [i_1] [i_0 + 3] = var_10;
                }
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    arr_29 [i_8] [4] [4] [i_0] |= (min(1, ((-32767 ? (((arr_23 [3]) % var_8)) : ((((arr_27 [i_8 + 1]) || (arr_7 [i_0] [2] [10]))))))));
                    arr_30 [i_0] [i_0] [i_0 + 1] [i_1] = (((var_1 ? (arr_0 [i_0]) : ((var_0 ? (arr_10 [i_0] [i_0]) : (arr_1 [i_8 - 1] [i_0]))))) * ((((((min(var_3, (arr_8 [i_0] [i_1] [i_1] [i_0])))) > var_0)))));
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((((((8024346733772011031 ? var_10 : (((arr_12 [i_0] [i_1] [i_9] [8] [i_11]) ? var_6 : (arr_0 [i_1])))))) ? ((var_9 ? (var_1 * var_0) : 1)) : (arr_33 [10] [i_11] [i_9] [i_9]))))));
                                var_22 -= (arr_2 [1] [1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 |= var_5;
    #pragma endscop
}
