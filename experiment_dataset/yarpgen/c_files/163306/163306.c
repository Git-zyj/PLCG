/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] = (max(32767, var_1));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] = (((arr_2 [i_0 + 1]) == (arr_2 [i_0 + 1])));
                    arr_13 [i_0 + 1] [i_1] [i_1] [i_2] = var_0;
                    var_18 = (((arr_6 [i_0] [i_0] [i_0 + 1]) - (arr_6 [5] [5] [i_0 + 1])));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    var_19 = (arr_16 [i_1] [i_1] [i_0 - 1]);
                    arr_17 [i_0 + 1] [i_0] [i_3] = (max((min((arr_5 [i_0] [i_0] [i_0 + 1]), var_1)), ((((arr_4 [i_0 - 1]) || (arr_5 [i_0] [1] [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_20 = ((((max((arr_5 [i_0] [13] [i_0 + 1]), ((((arr_18 [i_0 - 1] [i_4] [i_3] [i_4] [i_5 - 1] [i_3]) == (arr_3 [i_3]))))))) & ((((((arr_16 [i_5 + 1] [i_0 + 1] [i_0 + 1]) >= (arr_18 [i_5] [i_5 - 1] [i_4] [i_3] [i_1] [i_0])))) | (~var_11)))));
                                var_21 ^= (((((arr_9 [i_0 - 1] [i_5 - 2]) + (arr_9 [i_0 + 1] [i_5 + 3]))) <= ((min(((-(arr_14 [i_4] [i_4]))), (arr_1 [15]))))));
                            }
                        }
                    }
                    var_22 = (((((((((arr_6 [i_3] [i_1] [i_0]) || (arr_14 [5] [i_3]))) || ((((arr_18 [i_0] [i_0 - 1] [i_0] [i_1] [i_3] [i_3]) ? (arr_22 [i_0] [i_3] [i_0] [i_0]) : (arr_21 [i_3] [i_0 + 1] [i_1] [i_1] [i_3] [i_3])))))))) % (((arr_21 [i_3] [i_3] [1] [i_1] [i_1] [i_3]) ^ (arr_22 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    var_23 = ((var_1 ? (((((((arr_18 [i_0] [i_6] [i_1] [i_0] [i_0] [i_0]) == (arr_6 [8] [8] [0]))))) ^ (max((arr_4 [i_0]), (arr_14 [i_0 + 1] [i_6]))))) : (((((arr_1 [i_0 + 1]) < (arr_1 [i_0 + 1])))))));
                    var_24 = ((((arr_1 [i_0 + 1]) % (arr_1 [i_0 - 1]))));
                    arr_25 [i_1] [i_1] = ((((~(arr_15 [i_0 + 1] [8] [i_1] [10]))) + (arr_15 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1])));
                    arr_26 [i_6] &= (arr_24 [i_6] [i_1] [i_6] [i_0]);
                    arr_27 [i_1] [i_0] = ((((max((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1])))) ? (arr_10 [i_1]) : (((((((~(arr_18 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0])))) || (arr_14 [i_1] [i_6])))))));
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    arr_32 [i_0] [i_0] [i_0] = (((((((var_1 % (arr_31 [i_7] [i_1] [i_0] [i_0 - 1])))) >= (arr_28 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]))) ? (((arr_21 [4] [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0 + 1]) | (arr_21 [2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]))) : (~86)));
                    arr_33 [i_7] [i_0 - 1] = (arr_16 [i_0 - 1] [i_1] [i_7]);
                }
                var_25 ^= (arr_10 [i_0]);
                arr_34 [i_0] [i_0] = (arr_4 [i_0]);
                var_26 ^= (arr_16 [i_0 - 1] [1] [i_0 + 1]);
            }
        }
    }
    var_27 = (max(var_7, var_16));
    var_28 = (min(-75, 16171469027366238033));
    #pragma endscop
}
