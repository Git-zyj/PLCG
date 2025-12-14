/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] = ((((min(5, ((((arr_11 [i_0] [8] [12] [1] [4] [i_3] [2]) < 255)))))) > ((((((arr_13 [i_0] [i_1] [i_2] [i_1] [i_1]) ? 1 : var_8)) > ((min(64, 0))))))));
                                arr_15 [12] [i_1 - 3] [i_2] [i_3] [4] [i_0] [i_2] |= arr_8 [i_0] [18] [22] [i_3] [18];
                                var_12 = ((((max((arr_10 [i_1 + 1]), (arr_10 [i_1 + 1])))) * (arr_10 [i_1 - 2])));
                            }
                        }
                    }
                }
                var_13 = ((((((var_6 >> (255 - 248))))) ? var_4 : ((60 ? 64 : (arr_12 [i_1] [i_1 - 1] [i_1 - 3] [i_1 + 1] [i_1])))));
                var_14 = (min(var_14, (((var_6 ? var_0 : var_3)))));
                arr_16 [6] [i_1] [i_1] = ((-127 ? ((((max(171, 255))) ? ((min(125, 5))) : (((arr_5 [i_0] [i_1] [i_1 - 1]) ? (arr_13 [i_0] [21] [i_0] [i_0] [i_1]) : (arr_9 [i_0] [i_1] [i_1] [i_0]))))) : ((var_5 ? ((128 - (arr_1 [i_1]))) : (((arr_10 [i_1 + 1]) ? var_4 : var_0))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_35 [i_6] [12] [i_7] [i_6] [i_6] = 4;
                                arr_36 [i_5] [8] [i_5] [2] [i_6] = (((89 >> (arr_26 [i_5]))));
                                var_15 = ((((30 ? 240 : 24)) / (((((var_2 ? var_2 : var_4))) ? ((min(208, (arr_21 [i_6] [i_7])))) : (((arr_1 [i_9]) / var_0))))));
                            }
                        }
                    }
                }
                arr_37 [i_6] = (((((min(3, var_4)))) != ((((min(var_4, (arr_27 [i_5] [3])))) & ((var_1 ? 88 : (arr_3 [i_6] [i_6] [i_6])))))));
                var_16 ^= ((-(min((((arr_7 [i_5] [i_5] [i_6] [i_6] [i_5] [2]) - 36)), var_6))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        for (int i_11 = 3; i_11 < 7;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                {
                    var_17 = 56;
                    arr_44 [8] [6] [i_12] [i_12] = (((((119 | (arr_13 [6] [i_11 + 1] [0] [0] [i_12])))) ? ((max((arr_13 [i_10] [i_11 - 1] [i_11 - 1] [8] [i_12]), 255))) : (((arr_13 [i_10] [i_11 + 3] [22] [18] [i_10]) ? 0 : (arr_13 [2] [i_11 + 3] [22] [20] [i_12])))));
                    arr_45 [2] [i_11 + 1] [2] [i_11] = arr_34 [i_10];
                    arr_46 [i_10] [9] = ((98 ? 81 : ((min(109, 127)))));
                }
            }
        }
    }
    #pragma endscop
}
