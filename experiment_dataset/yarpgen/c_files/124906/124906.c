/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, ((max(var_6, (min(-26, (arr_6 [1]))))))));
                                var_15 = (max(var_15, (((((var_8 / var_6) << (-var_10 + 147)))))));
                                arr_15 [i_0] = (((((-1607322996 ? var_1 : var_5))) * (min(var_8, (arr_11 [i_2] [2] [i_2 + 3] [i_2 + 1])))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_16 = (max((((arr_19 [i_1 + 2] [i_1 + 2] [i_7 + 1] [i_7]) - var_10)), (var_6 - 13)));
                                var_17 *= (((1 * var_0) / ((((27059 > (arr_10 [i_1] [i_1 + 3] [i_1 - 1] [i_1 + 1] [i_1 - 1])))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        {
                            arr_30 [i_0] [1] [i_1 + 2] [17] [1] [i_9 - 1] = ((-((min(-13, 1)))));
                            arr_31 [i_0] [i_1] [i_8] [i_0] [i_8] = (max((((arr_7 [i_0] [13] [i_8]) << (((((arr_19 [i_0] [i_1] [i_9 + 2] [i_1]) + 18698)) - 19)))), var_9));
                            arr_32 [i_0] [i_8] &= (((((max((419812903 || -106), var_13)))) / (arr_28 [i_8] [i_9 + 2] [i_1 + 1] [i_1 + 1])));
                        }
                    }
                }
            }
        }
    }
    var_18 *= var_6;
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 20;i_11 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        {
                            var_19 = max(1, 232);
                            var_20 = var_12;
                        }
                    }
                }
                var_21 = (min(var_21, var_5));
                arr_42 [i_10] = ((max((arr_38 [i_11 + 2] [i_11 + 3] [i_11 - 1] [i_11]), (arr_38 [i_11 + 1] [i_11] [i_11 - 1] [i_11]))));
            }
        }
    }
    #pragma endscop
}
