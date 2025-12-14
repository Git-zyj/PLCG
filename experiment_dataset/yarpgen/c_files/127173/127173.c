/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    var_21 = (max(var_21, var_11));
    var_22 = (max(var_22, (((!(!var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1 - 1] [i_1] = ((var_5 > (arr_0 [i_0] [i_0])));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    arr_10 [i_1] = 4;
                    var_23 = (max(var_23, (((~(arr_2 [i_1 - 1]))))));
                    arr_11 [i_0] [i_1] [i_1] [8] &= 35;
                    var_24 = ((~(arr_1 [i_0])));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    arr_14 [i_1] = (((arr_4 [i_0] [i_1 + 1] [i_3]) ? var_13 : (((arr_13 [i_0] [i_1] [i_1]) ? 1 : (arr_12 [i_1] [i_1 - 2] [i_1 - 2])))));
                    arr_15 [i_0] [i_1] [i_0] = (((arr_5 [10] [i_1] [i_3]) / ((-(arr_12 [i_1] [i_1] [3])))));
                    arr_16 [i_1] [i_1] [i_3] = (((var_14 != var_13) != ((((arr_13 [i_0] [i_1 - 2] [i_1]) && var_16)))));
                    var_25 = ((var_2 ? ((var_2 >> (var_19 - 48527))) : (arr_1 [11])));
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_26 = (arr_0 [i_0] [i_1]);
                            var_27 = (max(var_27, (((-(((arr_23 [i_0] [i_1] [i_4] [i_1 + 2]) * var_12)))))));

                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                arr_27 [i_0] [15] [i_1] [i_1] [i_4] [i_1] [i_1] = (min(((var_14 || (arr_8 [i_1 + 1] [i_1 + 1]))), ((var_5 || (var_11 || var_8)))));
                                arr_28 [4] [i_0] [i_4] [i_0] [i_0] |= var_9;
                            }
                            for (int i_7 = 0; i_7 < 19;i_7 += 1)
                            {
                                arr_33 [i_5] [i_5] [i_5] [i_5] [i_1] = ((var_14 < (((min((arr_29 [i_0] [i_0] [i_4] [i_4] [i_1] [i_4] [i_7]), var_0)) % (min(var_6, (arr_3 [i_5] [i_1])))))));
                                var_28 = (min(var_28, ((((min((arr_21 [i_4 + 4] [i_1] [i_1]), (arr_5 [i_4 + 4] [i_0] [i_4])))) ? (((arr_21 [i_4 + 4] [i_1 + 2] [i_4]) ? var_1 : (arr_21 [i_4 + 4] [i_4 + 4] [i_4 + 4]))) : (arr_21 [i_4 + 4] [i_7] [i_4 + 4])))));
                                var_29 ^= (arr_9 [i_5] [i_4]);
                                var_30 = (arr_0 [i_0] [i_0]);
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 19;i_8 += 1)
                            {
                                var_31 = 21825;
                                var_32 += ((-((~(arr_2 [i_0])))));
                                var_33 = ((var_11 % var_13) >> (((arr_32 [i_0] [i_1 + 2] [i_4 + 4]) - 3013789306)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
