/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 = (arr_2 [4] [i_2 + 2]);
                                var_15 = var_5;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            {
                                var_16 = (max((max((arr_5 [i_1] [i_7 + 1]), (arr_5 [i_1] [i_7 + 1]))), 1));
                                var_17 |= ((((max(56163, 1))) ? (arr_2 [i_1] [i_1]) : ((+(max((arr_20 [i_0] [i_0] [i_0] [7] [i_7]), (arr_10 [13] [i_1] [i_5] [13] [13])))))));
                                var_18 = (((arr_4 [i_7 + 1]) ? (((arr_4 [i_7 + 1]) << (arr_4 [i_7 + 1]))) : ((var_4 << (arr_4 [i_7 + 1])))));
                                arr_23 [i_1] [i_1] [i_6] [17] [i_7 + 1] = (max((((arr_14 [i_0] [i_1 + 3] [i_5] [i_1] [i_7 + 1]) ? 182 : ((min(1, 224))))), (((arr_13 [i_7 + 1] [i_6] [i_5] [i_1 - 1] [i_0]) - 11563))));
                            }
                        }
                    }
                }
                var_19 += (max((max((arr_4 [i_0]), (arr_17 [i_0] [i_1] [i_0] [i_0]))), (min((arr_4 [i_0]), (arr_17 [i_0] [i_1] [8] [i_0])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 4; i_10 < 15;i_10 += 1)
            {
                {
                    var_20 ^= ((((((arr_13 [i_10] [i_10 - 3] [i_10 - 2] [i_10 - 2] [i_10 - 3]) ? (arr_17 [10] [i_10 - 1] [i_10 + 2] [i_10 - 2]) : (arr_6 [i_10] [i_10 - 4] [i_10 - 3] [i_10 + 2])))) ? (max(var_11, (arr_6 [i_10] [i_10 + 1] [i_10 - 3] [i_10 - 3]))) : (((min((arr_13 [i_10] [i_10 - 2] [i_10 - 2] [i_10 + 2] [i_10 - 3]), 46))))));
                    var_21 = arr_25 [i_10 - 3];
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 17;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 15;i_12 += 1)
        {
            {
                var_22 = ((210 << (73 - 55)));
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 16;i_15 += 1)
                        {
                            {
                                var_23 = (((((arr_11 [i_14] [i_13] [i_12 + 2] [i_11 + 1]) ? (arr_3 [i_14]) : (arr_11 [i_14] [i_12 - 1] [i_13] [i_14]))) / var_12));
                                arr_47 [i_12] [i_12] [i_12] [i_12] [i_15] = (max((((-1 + 2147483647) << (((arr_11 [i_11 - 1] [i_11] [i_11 - 2] [i_11 + 1]) - 11392500921806984120)))), ((((max(11297057297573755754, var_12))) ? (arr_16 [i_11] [i_11] [i_11 + 1] [i_14]) : (((!(arr_1 [6] [i_15]))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 18;i_17 += 1)
                    {
                        {
                            var_24 -= (min(((((arr_44 [i_12 + 3] [i_12] [i_16] [i_17] [i_12]) ? -1294283104 : 1))), (max((arr_44 [i_12 + 1] [i_12] [14] [i_17] [i_12]), (arr_44 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1] [6])))));
                            var_25 = (max(var_9, ((((((arr_45 [i_11] [i_12] [i_12] [i_16] [16]) + 2147483647)) << (((arr_12 [i_16]) - 158)))))));
                            var_26 -= (((arr_45 [i_11] [i_11] [i_11] [i_11] [i_11]) ? (min((((arr_11 [i_11] [i_12] [i_11] [i_12]) | 1)), 183)) : 3296198532));
                            var_27 = (((arr_0 [i_11 + 1] [i_11 - 2]) << (((((arr_43 [i_11 - 2] [i_11 - 2] [i_12 - 1] [i_17]) << (((arr_19 [i_11] [2] [i_16] [16] [16]) - 138)))) - 124406))));
                            var_28 = var_7;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
