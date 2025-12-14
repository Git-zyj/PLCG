/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_18 = (min((arr_5 [i_1] [i_1] [i_0]), ((min((arr_10 [i_1 - 1] [i_2 + 1] [i_1] [i_3 - 2] [i_3]), (arr_10 [i_0] [i_1 + 2] [i_1] [i_3 - 3] [i_2 + 4]))))));
                            arr_12 [i_1] [i_1] [i_2 - 1] = ((((((max(var_4, var_6))) ? (((1 ? (arr_2 [i_1] [i_1]) : (arr_10 [3] [i_0] [i_1] [i_1] [i_3 - 1])))) : var_7)) | (arr_6 [3] [i_0] [3])));
                            var_19 += (~9);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_18 [i_5] [i_1] [i_1] [i_0] = (arr_6 [i_1 + 2] [i_1 + 1] [i_4 + 2]);
                            arr_19 [i_1] [i_1] [i_1] [4] = (((-(arr_2 [i_4 + 1] [i_1 + 1]))));
                            var_20 ^= ((~(arr_15 [i_1 - 1])));
                        }
                    }
                }
                var_21 = (-((var_17 * (((max(-2559, (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                arr_20 [i_1] [i_1 + 1] = (arr_3 [i_1] [i_1]);
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_22 = (arr_7 [i_1 - 2]);
                                arr_28 [i_0] [i_0] [i_0] [i_1] = ((~((((arr_25 [i_0] [i_1] [i_1 + 2] [i_6 - 1] [i_7] [i_8]) <= ((((arr_2 [i_0] [i_0]) <= var_16))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_5;
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                {
                    var_24 += (((arr_33 [i_9] [i_9] [i_11]) % 18446744073709551610));
                    var_25 = ((-var_5 * (min(var_17, var_8))));
                    var_26 = (((9 + (arr_30 [i_9] [i_10]))) == (arr_30 [i_9] [i_10]));
                    var_27 = var_1;
                }
            }
        }
    }
    #pragma endscop
}
