/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 &= (arr_1 [i_0]);
                arr_4 [i_0] [i_1] = (((((arr_1 [i_0]) * var_9)) * ((((arr_1 [i_1]) / var_10)))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_16 = ((arr_1 [i_1]) + var_13);
                    arr_9 [i_0] [i_1] [i_1] = ((((((-7378293603598531703 + 9223372036854775807) << (((-127 - 1) + 128))))) ? (36028797018963967 % 10268474341374446820) : (arr_1 [i_2])));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_0] [i_2] [i_4] [i_0] = (arr_7 [15] [i_2] [i_1]);
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3] = (((arr_2 [i_4 + 1] [i_4] [i_4 + 3]) ? var_5 : ((~(arr_15 [i_3] [i_0] [i_3] [i_0] [i_2] [i_0] [i_0])))));
                            var_17 = (var_10 ? ((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) < (arr_5 [i_0] [1] [1] [i_4 + 3])))) : (((var_14 != (arr_6 [3] [i_1] [i_1])))));
                            arr_18 [i_0] [i_1] [i_0] [i_3] [i_4] = (((arr_14 [i_0] [10] [i_0]) > 1));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_18 -= ((arr_11 [i_5] [i_3] [i_2] [i_1] [i_0]) * (arr_12 [i_0] [i_1] [i_2] [i_3] [i_1]));
                            arr_22 [i_0] [i_1] [i_0] [i_3] [i_5] = (arr_8 [i_5] [i_3] [i_2] [1]);
                            var_19 = (((arr_10 [i_3] [i_2] [i_1] [i_0]) && (arr_10 [i_1] [i_2] [i_1] [i_5])));
                        }
                        var_20 ^= ((var_1 / (arr_5 [i_0] [i_1] [i_2] [i_3])));
                        var_21 = arr_13 [i_0] [i_0] [i_1] [i_2] [2] [i_3];
                    }
                }
                var_22 = (max(var_22, (((arr_10 [i_0] [0] [i_0] [i_1]) - ((max((arr_2 [i_0] [12] [i_0]), (arr_8 [i_1] [i_1] [i_1] [i_1]))))))));
            }
        }
    }
    var_23 = var_6;
    var_24 = var_2;
    #pragma endscop
}
