/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = var_5;
                var_15 += (((var_11 != var_6) ? (((((-(arr_4 [i_0] [i_0])))) ? (((var_13 ? 124 : var_0))) : (((arr_1 [i_1]) + (arr_4 [i_0] [i_1]))))) : var_9));
                arr_8 [i_1] = ((((!(arr_2 [i_1]))) && ((((var_12 || (arr_6 [i_0] [i_1] [i_1]))) || (arr_0 [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                arr_14 [i_2 + 2] [i_2] = ((arr_11 [i_2 + 1]) > ((-(arr_9 [i_2 + 2] [i_2 + 1]))));

                for (int i_4 = 2; i_4 < 24;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_24 [i_4 + 1] [i_2] = (arr_16 [i_6] [i_5] [i_4] [i_2 - 1]);
                                var_16 = ((!((min(((max(-32746, 182))), (arr_23 [i_2] [i_3] [i_4] [i_5]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_29 [i_2] [i_7] [i_4 - 1] [i_3] [i_2] = var_10;
                                arr_30 [i_2] [i_2] [i_2] [i_2] = (arr_11 [i_8 - 1]);
                                arr_31 [i_2] [i_2] [i_2] [i_2] [i_2] = (((((((var_14 / (arr_10 [i_2 - 1] [i_2]))) > ((((arr_27 [i_2]) & var_10)))))) > -1));
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    arr_35 [i_2] = ((56 + (((max((arr_13 [i_2]), (arr_11 [i_3])))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_17 = ((-103 ? 274123414 : (arr_17 [i_11 + 1] [i_3] [i_2] [i_10])));
                                var_18 = (arr_26 [i_2 - 1] [i_10] [i_11]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
