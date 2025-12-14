/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_4 | var_8);
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, (((~(((arr_6 [i_1]) | (arr_9 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 3]))))))));
                                var_14 = (arr_5 [i_0] [i_0] [i_4]);
                            }
                        }
                    }
                }
                var_15 = ((((min((arr_11 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_1]), (arr_3 [18] [i_0 - 2] [i_0 - 1])))) != ((-(arr_3 [i_0 - 3] [i_0 + 1] [i_0 - 3])))));
                var_16 = (min((min((arr_1 [i_0 - 3]), (arr_1 [i_0 + 1]))), (arr_1 [i_0 + 1])));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 17;i_6 += 1)
                    {
                        {

                            for (int i_7 = 0; i_7 < 20;i_7 += 1)
                            {
                                var_17 &= (max((arr_10 [i_0 + 1] [i_0] [i_0]), ((((arr_11 [i_0 - 3] [i_1] [i_5] [i_6 - 1]) <= ((~(arr_0 [i_1]))))))));
                                var_18 = (min(var_18, (255 / 253)));
                            }
                            for (int i_8 = 0; i_8 < 20;i_8 += 1)
                            {
                                var_19 = (((arr_7 [16] [i_5 + 1] [i_5 - 2] [8]) != (min((arr_8 [i_6 + 1] [i_5 + 1] [i_5 - 2] [i_0 - 3] [i_0 - 3]), (arr_7 [i_5] [i_5 + 1] [i_5 - 2] [i_5])))));
                                var_20 = (min(var_20, 19));
                                var_21 = (min(var_21, (arr_6 [i_1])));
                                var_22 = ((((arr_5 [i_0 - 2] [i_0] [i_6 - 3]) - ((-(arr_17 [i_0]))))));
                                var_23 = ((((min((arr_9 [i_6 - 3] [i_1] [i_5 - 1] [i_0]), (arr_9 [i_6 - 1] [i_6 - 1] [i_5 - 2] [i_6])))) & ((~(arr_9 [i_6 - 1] [i_1] [i_5 - 1] [i_6])))));
                            }
                            for (int i_9 = 4; i_9 < 19;i_9 += 1)
                            {
                                var_24 = (min(var_24, (((((~(max((arr_6 [i_1]), (arr_24 [i_0] [15] [i_5]))))) != ((((-(arr_24 [12] [12] [i_0]))))))))));
                                var_25 = ((max((arr_21 [18] [i_9 - 3] [i_9 - 4] [i_0] [i_9]), (arr_21 [15] [i_9 - 2] [i_9 + 1] [i_0] [1]))));
                                var_26 = (max((arr_3 [0] [0] [i_5 - 1]), (arr_5 [19] [i_0] [i_1])));
                                var_27 = ((-(min(((-(arr_24 [11] [7] [i_6]))), (arr_9 [i_9 - 3] [5] [i_9 - 4] [i_6 - 3])))));
                            }
                            /* vectorizable */
                            for (int i_10 = 4; i_10 < 18;i_10 += 1)
                            {
                                var_28 = (arr_1 [18]);
                                var_29 &= ((-(arr_18 [i_10] [i_10] [i_5] [i_1] [i_10] [4])));
                            }
                            var_30 = ((-(arr_3 [i_1] [i_5] [0])));
                        }
                    }
                }
                var_31 = (max(((min((arr_1 [6]), (arr_11 [i_0] [i_1] [i_0 - 3] [i_0])))), (arr_11 [i_0] [i_1] [i_0 - 1] [i_1])));
            }
        }
    }
    var_32 &= var_4;
    #pragma endscop
}
