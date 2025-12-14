/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((max((((41 ? -27 : var_0))), ((1129006151 ? -119 : var_3))))), ((var_11 ? var_6 : var_1))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            var_14 = ((((((arr_7 [i_2] [i_0]) ? (((arr_4 [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 124)) : -0))) - var_7));
                            var_15 = ((((min(((2392801684989958457 ? (arr_7 [i_0] [i_1 - 1]) : 11110000577562378367)), (arr_10 [i_4] [i_4 - 2] [i_4 - 1] [5])))) ? (min(17683862938981756936, var_7)) : -762881134727794673));
                        }
                        arr_12 [i_0] = (((min((arr_5 [i_0] [i_1 - 1] [i_1 - 1]), (arr_5 [10] [i_1 - 1] [i_1 - 1]))) ? (max((arr_7 [i_1] [i_1 - 1]), var_8)) : (!0)));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 7;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        {
                            var_16 ^= ((131072 ? 7336743496147173248 : 117));
                            var_17 = ((((-(arr_22 [i_6] [4] [i_8]))) * (arr_8 [i_0] [3] [i_0] [i_7] [i_7 + 1] [i_8])));
                            var_18 ^= (~(arr_20 [i_5] [i_5] [1] [i_5] [i_7 + 1]));
                            var_19 = 252;
                        }
                    }
                }
            }
            var_20 = (((arr_18 [i_5] [i_0] [i_0] [i_0]) && (arr_15 [i_0] [i_0])));
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            arr_25 [4] |= ((~(arr_22 [i_9] [i_9] [i_9])));
            var_21 = (min(var_21, (!var_11)));
        }
    }
    var_22 = (min(var_22, (((((((!(var_5 ^ var_5))))) >= var_7)))));
    var_23 = (max(var_5, var_10));
    var_24 &= (min(var_7, var_3));
    #pragma endscop
}
