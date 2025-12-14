/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (((1 >> (((arr_3 [i_1 - 2] [i_1 + 1]) - 8985)))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_17 [i_1] [i_1 + 3] = (((((730201356 ? 0 : (arr_2 [i_1 + 4] [i_1 + 4])))) ? (((-64 == (arr_2 [i_1 + 1] [i_4])))) : (arr_2 [i_1 - 2] [i_3])));
                                var_14 ^= 32;
                                var_15 = (((((32 << (-1 > 1)))) == ((32748 ? (arr_1 [i_2]) : (((min(-14773, 1))))))));
                                var_16 = (((((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) & (var_5 + var_12))) >= ((max(1, -44)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_17 = ((-((191 ? var_11 : 4791338077144039278))));
                                var_18 = (min(var_18, (((var_2 >> (117 >= 1))))));
                            }
                        }
                    }
                }
                var_19 = ((1626554199 && ((min(35543, (min((arr_10 [i_0] [i_0] [i_1]), var_1)))))));
            }
        }
    }

    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_20 = (((((min(1, 13451))) / 364466725)));
        var_21 = ((arr_6 [i_7] [1]) % (-44 - 0));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_22 = ((max((((arr_15 [i_8]) ? -20 : (arr_13 [i_8] [15] [15] [15] [i_8] [i_8]))), 245)));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        var_23 = (arr_10 [i_8] [4] [8]);
                        var_24 = ((((arr_6 [i_9] [4]) | (arr_6 [i_8] [10]))) + ((max(177, var_6))));
                        var_25 = (((((min((arr_8 [10] [i_10] [10]), (arr_8 [i_8] [i_10] [i_11]))))) ^ (arr_14 [i_8] [i_8] [i_8] [i_8] [1] [i_8] [i_8])));
                        var_26 = (((var_1 ? -32765 : 35543)));
                        var_27 = ((-125 ? ((min(32, -671842539))) : 4294967272));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                {
                    var_28 = ((27190 ? 1536 : (~7578)));
                    arr_42 [i_8] [i_8] [i_8] [i_13] = (((arr_33 [5] [i_12] [i_12] [i_12]) - (min((var_0 >= var_6), var_13))));
                    var_29 |= (((((arr_40 [6] [0]) ? (arr_40 [i_8] [6]) : (arr_40 [i_8] [1]))) >= (((arr_40 [6] [10]) - var_2))));
                }
            }
        }
    }
    for (int i_14 = 1; i_14 < 11;i_14 += 1)
    {
        var_30 = (min((min((arr_20 [17] [17] [i_14 - 1] [i_14] [i_14] [i_14 + 2]), var_1)), ((min(127, -2)))));
        var_31 = var_2;
    }
    #pragma endscop
}
