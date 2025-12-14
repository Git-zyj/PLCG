/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [17] = (min(249, (((249 ? 187 : 28)))));
                arr_6 [i_0] [i_0] = var_11;
                arr_7 [i_0] = ((((((min(187, 9140))) || (arr_3 [i_0] [i_1]))) ? 9152 : ((-(arr_3 [i_0] [i_0 + 1])))));
                arr_8 [6] = (((((arr_3 [i_0 - 1] [i_0 + 1]) ? 14119 : -974855424))) ? (((428013806 ? ((-9140 ? 9140 : 283001333)) : var_5))) : ((min(389379936, (arr_1 [i_1] [i_1])))));
            }
        }
    }

    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_18 [14] [i_3] [i_4] &= ((((min((max((arr_1 [i_3] [13]), -9148)), 389379936))) ? (--0) : 9140));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_23 [i_6] [i_5 + 2] [i_4] [i_3] [i_2 + 1] = 195;
                                arr_24 [i_5 + 3] [i_3] [i_3] = var_3;
                            }
                        }
                    }
                    arr_25 [i_3 - 3] [i_4] = (((((~(arr_2 [i_2 - 2] [i_3 - 3] [i_3 - 2])))) ? 1 : ((min((arr_2 [i_2] [i_2] [3]), (((!(arr_20 [i_4] [i_3] [i_3] [i_2])))))))));
                    arr_26 [i_2] [i_3 + 1] [1] [i_3 + 1] = (((((arr_11 [i_3 - 2] [i_4]) ? (arr_9 [i_2 - 3]) : 1)) + ((max((arr_9 [i_3 - 1]), (arr_11 [i_2 + 2] [i_2 + 2]))))));
                }
            }
        }
        arr_27 [i_2 + 1] = (max((max(714194563, (arr_19 [i_2] [i_2 + 1] [i_2 - 1] [3] [i_2]))), -3));
        arr_28 [i_2] = 2821798826;
        arr_29 [11] = (((((1 < (arr_1 [i_2 - 2] [i_2 - 2])))) + (arr_3 [i_2 + 2] [i_2 + 2])));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        arr_33 [i_7] = (((-(arr_31 [i_7]))) * (((arr_31 [i_7]) / ((-(arr_31 [i_7]))))));
        arr_34 [10] [18] = (min((~-9141), ((~(arr_31 [i_7])))));
    }
    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {
        arr_38 [i_8] = (((min(((911738565 ? -32258 : -287168801)), 124)) | (min(((~(arr_1 [i_8] [i_8]))), (arr_16 [i_8] [i_8])))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 17;i_11 += 1)
                {
                    {
                        arr_48 [i_8] [14] [14] [i_8] = -14;
                        arr_49 [i_11] [i_11] [i_11] [i_11] [18] |= ((((((var_2 ? var_3 : (arr_39 [i_11] [i_9] [i_9]))))) ? (((!(((20 ? 1 : 3235903560)))))) : 252));
                    }
                }
            }
        }
    }
    #pragma endscop
}
