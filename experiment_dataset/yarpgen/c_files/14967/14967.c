/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_19 ^= (arr_8 [0] [i_1] [i_1] [0]);
                            arr_12 [i_0] [6] [i_0] [i_0] [i_0] [i_0] = (((arr_7 [i_0] [i_0] [i_0]) + ((-(((arr_4 [i_0] [i_0] [6]) ? (arr_9 [i_0 - 1] [i_3] [i_2] [i_0]) : (arr_7 [i_1] [2] [2])))))));
                            arr_13 [i_1] [i_0] = (min((max((arr_11 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]), (arr_9 [0] [9] [0] [1]))), (max(32, 28))));
                        }
                    }
                }
                arr_14 [i_0] [3] [i_0] = 32;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            {
                arr_20 [i_4] [i_5] = ((!((!(arr_16 [i_5] [i_4])))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 19;i_7 += 1)
                    {
                        {
                            arr_26 [i_4] [i_4] [i_6] [1] = (max((max(((14 << (((arr_21 [i_4] [i_5] [10] [i_7]) - 6393658586918635406)))), ((max((arr_22 [i_5] [i_5] [i_5 - 1]), (arr_22 [i_5] [i_5] [i_6])))))), -11746));
                            var_20 = (max(var_20, ((min((((((arr_21 [i_4] [i_5] [i_6] [10]) >= (arr_16 [i_5] [13]))))), -126)))));
                        }
                    }
                }
                var_21 = (min(((min(4, 24495))), 2199023255520));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 10;i_12 += 1)
                        {
                            {
                                arr_41 [i_8] [i_8] [i_8] [i_8] [i_8] [i_12] [i_8] = -2;
                                var_22 = (arr_30 [i_8]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 9;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((((!(arr_21 [i_8] [i_9] [i_10] [i_10])))))));
                                var_24 = (arr_24 [i_8] [i_9] [i_9]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((max((min(var_1, -126)), (max(106, var_13)))) + var_18);
    var_26 = ((!((max(-26879, -5078453627412180226)))));
    #pragma endscop
}
