/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] &= (arr_1 [i_0]);
        arr_4 [i_0] |= (11594 || -21139);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_2] [i_1] [0] &= var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [7] [7] [7] [18] = ((min((12 < 53941), (arr_12 [i_2 + 1]))));
                                arr_17 [i_0] [17] [13] [12] [i_4] [i_4] = -53954;
                                arr_18 [1] [9] = 1;
                                arr_19 [i_2] [i_2] [i_2] [9] [i_0] = ((-(((arr_2 [i_2 + 2]) << (var_4 + 1318595383)))));
                            }
                        }
                    }
                    arr_20 [i_1] [i_0] |= var_18;
                    arr_21 [1] [1] = (((11574 <= var_17) * (!11582)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                {
                    arr_26 [14] [12] [5] [i_0] = 19854;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_33 [i_7] [i_7] [3] = -53927;
                                arr_34 [i_0] [i_7] [i_6] [i_7] [i_0] = (!-19855);
                                arr_35 [i_0] [i_0] [i_6] [i_7] [i_7] [6] = ((((((arr_29 [14] [i_6 + 1] [14] [15]) ? var_18 : (arr_32 [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_7 + 1] [i_7 + 1])))) && 11608));
                                arr_36 [i_6] [i_5] [i_5] [4] [i_5] = (arr_6 [i_0]);
                            }
                        }
                    }
                    arr_37 [i_0] [2] = ((!(((((arr_0 [i_0]) > 19854))))));
                    arr_38 [i_0] = (((-(arr_7 [i_0] [i_6 - 1] [i_0]))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    {
                        arr_47 [5] [i_9] [i_9] [i_10] = (!-7);
                        arr_48 [i_9] [i_9] [i_9] [i_0] [i_9] = ((~(arr_12 [i_11 - 1])));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 22;i_14 += 1)
            {
                {
                    arr_58 [i_12] [12] [i_12] [i_12] = ((((arr_53 [i_14 + 1]) > (arr_53 [i_14 + 1]))));
                    arr_59 [i_14] [2] [i_12] |= (!6);
                }
            }
        }
    }
    #pragma endscop
}
