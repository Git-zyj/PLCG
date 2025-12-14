/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] &= 0;
                                var_11 = (max(((((arr_11 [i_1] [i_2] [i_2 - 4] [i_3] [i_2 - 3]) || 7933493515542363262))), ((0 ? -6146768642263583237 : 234))));
                                var_12 = (((max((((var_10 ? 38 : var_1))), 2471059747113908390)) + (arr_11 [i_0] [i_2 - 1] [i_4] [i_3] [4])));
                                var_13 += (((((var_0 + 9223372036854775807) << (((arr_5 [10] [i_2] [i_2 + 1] [1]) - 110)))) & 2411038127));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1] [0] [i_6] [i_7] = var_9;
                                var_14 -= (max(-2471059747113908378, (((((max(var_2, (arr_1 [5])))) || ((((arr_10 [15] [i_1] [i_5] [i_6 + 1]) % (arr_14 [5] [5] [i_6] [5])))))))));
                                var_15 *= (((((max((arr_20 [1] [i_7 - 1] [1] [0] [0]), (arr_20 [i_5] [i_7 - 1] [i_7] [i_7] [i_7]))))) > 2417207921));
                                var_16 *= ((-2007456234 ? (max(15975684326595643220, (((!(arr_16 [i_1] [i_5] [i_1] [i_7])))))) : ((2147483647 ? 15975684326595643237 : 2417207925))));
                            }
                        }
                    }
                }
                var_17 += (((var_3 / var_1) - var_10));
            }
        }
    }
    var_18 += var_4;
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 11;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 12;i_12 += 1)
                        {
                            {
                                var_19 = ((-(((((((arr_23 [i_12]) == 234))) < (arr_32 [i_10 - 2] [i_10] [i_10] [i_10 - 2] [i_10 + 1] [i_10]))))));
                                arr_36 [i_8] [i_9] [i_9] &= var_9;
                            }
                        }
                    }
                    var_20 &= (max((301965977 & 15975684326595643226), ((min(((-(arr_30 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_9]))), (arr_34 [i_9] [i_9] [i_9]))))));
                }
            }
        }
    }
    #pragma endscop
}
