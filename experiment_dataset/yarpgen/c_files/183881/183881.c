/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_12 |= ((((-var_5 ? (arr_6 [10] [2] [i_3] [10]) : var_11))) ? (max(1, var_4)) : (((((((arr_11 [i_4 - 2] [i_3] [2] [i_0]) ? (arr_7 [3] [i_4 - 2] [i_4]) : (arr_4 [5] [5])))) ? -var_8 : ((min(1, (arr_1 [i_0]))))))));
                                var_13 = ((((min((var_9 || var_1), var_10))) ? var_11 : (arr_12 [1] [i_1] [10])));
                                var_14 = (min((((((32640 ? 1 : (arr_3 [4])))) ? (0 * 0) : var_8)), (((((1 ? 1330913754 : (arr_11 [i_0] [i_1] [i_2 + 2] [i_3])))) ? (65535 - 1330913750) : var_0))));
                            }
                        }
                    }
                    var_15 = (arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_16 = ((arr_10 [4] [i_5] [i_2] [4] [i_0] [i_0]) ? (((1073741824 ? (-32767 - 1) : (arr_13 [i_2 + 1] [i_2] [5] [i_2 - 1] [i_2 + 2] [i_2])))) : 1073741824);
                                arr_18 [i_0] [1] [1] [1] [3] = (arr_13 [i_2 + 1] [i_2] [10] [i_2 + 2] [i_2 - 1] [i_2 + 2]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_17 ^= (((((min(1749557037, (arr_22 [i_0] [6] [i_2] [i_7] [i_2 + 2]))))) != (min(4223491351, (~var_11)))));
                                var_18 = (((((var_6 ^ var_9) || (arr_17 [i_2 + 2] [i_2] [i_2 + 1] [i_2 + 1] [i_2]))) ? (!370643604) : (arr_7 [i_0] [5] [i_0])));
                            }
                        }
                    }
                    var_19 = var_8;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                {
                    var_20 = (max(var_20, var_1));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            {
                                var_21 |= var_10;
                                var_22 = (1 ^ 1048064);
                                var_23 = ((((arr_33 [8] [i_12 + 1] [1] [i_12 + 1] [i_13]) | (var_6 % var_1))));
                                var_24 |= (((arr_30 [i_9] [6]) && (min((((arr_32 [i_13] [i_11] [i_11] [i_9]) && -58)), (!var_2)))));
                                var_25 = 1330913754;
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = var_4;
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 25;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 24;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 24;i_16 += 1)
            {
                {
                    var_27 = var_1;
                    arr_43 [i_14] [i_15] = ((((min(9426410433169234075, var_3))) ? (min((max(550066788, var_11)), var_5)) : var_7));
                    var_28 -= (max(-4205, 14837932514740383961));
                }
            }
        }
    }
    #pragma endscop
}
