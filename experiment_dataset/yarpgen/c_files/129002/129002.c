/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, 127));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 ^= 1808187358173998691;
                                arr_12 [i_1] [i_3] [i_2] [i_2] [0] [8] [i_1] = ((((8409461524939849094 ? (255 % var_8) : (((arr_8 [6] [i_1] [6] [i_1] [i_4 - 1]) >> (arr_6 [i_4] [i_3] [i_1] [i_0]))))) >> (1244685298 - 1244685297)));
                                arr_13 [i_4] [i_4 + 1] [i_1] [i_4] [i_4] [17] = arr_11 [i_0] [i_1] [i_2] [i_0] [i_1] [8] [i_4];
                            }
                        }
                    }
                    arr_14 [i_1] [i_1] [i_1] [i_1] = ((-94 ? 1 : 0));
                }
            }
        }
        var_13 = max(4, (arr_1 [i_0 - 2]));
        var_14 = (31131 >> 1);
    }
    for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_15 = (34401 ? (min(var_9, (arr_15 [i_5] [i_5 - 1]))) : 1);
        arr_18 [16] [16] |= var_4;
    }
    for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = ((((50 ? ((var_3 >> (3050282009 - 3050281983))) : -32766)) >> (((((((arr_10 [i_6] [2] [i_6 - 2] [2]) + 2147483647)) >> ((((-(arr_11 [i_6] [i_6] [i_6 - 1] [i_6 - 1] [2] [i_6] [i_6]))) + 43336)))) - 16777192))));
        arr_23 [i_6 - 1] = (max(var_2, (!-var_2)));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            {
                arr_29 [6] &= ((~(((!-19) % 1))));
                arr_30 [i_7] [i_8] [i_8] = 19;
                arr_31 [i_7] [10] |= ((((var_0 ? (arr_26 [i_8] [i_7]) : (arr_26 [i_7] [i_7]))) >> (((arr_26 [i_7] [i_8]) - 1907704402))));
                arr_32 [i_8] [i_7] [i_7] = (((!var_7) | ((~(arr_8 [i_7] [i_8] [i_8] [i_7] [i_7])))));
            }
        }
    }
    #pragma endscop
}
