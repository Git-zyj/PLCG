/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -52;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (arr_3 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_3] = ((-(arr_3 [i_0])));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_12 [i_0] [i_4] = (arr_11 [i_3] [i_3] [i_4] [i_3] [i_3] [i_3]);
                                var_13 = 1;
                                arr_13 [2] [i_1] [i_4] [i_4] = (((189 ? (arr_6 [i_0] [i_1] [i_0] [i_3] [i_3] [i_1]) : (arr_0 [i_1] [i_1]))));
                            }
                            var_14 = (max(131064, ((22 ? ((((arr_6 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) - (arr_9 [i_3] [i_1])))) : ((6548426168020949680 % (arr_2 [i_1] [i_1] [i_3])))))));
                            arr_14 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = (max((arr_4 [i_2]), (max(((-(arr_9 [i_3] [0]))), 0))));
                        }
                    }
                }
                arr_15 [i_0] = (arr_6 [i_0] [i_0] [i_1] [i_1] [i_0] [i_1]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    var_15 = 6548426168020949674;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                arr_31 [i_5] [i_8] = max(-596991808, (arr_21 [i_8] [i_5]));
                                arr_32 [i_5] [i_6] [i_6] [i_6] [i_5] = (arr_21 [i_7] [i_5]);
                            }
                        }
                    }
                    arr_33 [i_5] [i_6] [i_6] [i_6] = (min((((arr_27 [i_5] [i_7] [i_7] [i_6] [i_6] [i_5] [i_5]) ? (arr_27 [i_5] [i_7] [i_7] [i_6] [i_6] [i_5] [i_5]) : 1)), (~1)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            {
                var_16 = (arr_16 [i_10]);
                arr_39 [i_10] [i_11] = var_7;
                arr_40 [i_11] = ((arr_4 [i_10]) ? (arr_2 [i_10] [i_10] [i_10]) : 14);
            }
        }
    }
    #pragma endscop
}
