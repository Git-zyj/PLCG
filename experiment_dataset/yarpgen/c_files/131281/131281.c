/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (((((((var_16 << (((var_2 + 29610) - 6)))) & (var_4 & var_11)))) || (((var_3 - var_9) == (var_14 % var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (((((536870656 <= 6) & (18 == var_6))) * ((((((((arr_1 [i_1] [i_1]) >= var_13)))) == (var_15 | var_8))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((((((((var_1 || (arr_2 [i_1]))))) == (((arr_6 [i_4] [i_1] [i_0]) << (4271901482 - 4271901422))))) || (((3 & 3) || (var_12 || 1))))))));
                                var_21 ^= ((((((3 >= 1) == (((2048 || (arr_3 [i_0]))))))) / ((((((arr_9 [i_0] [i_1] [i_1]) / var_8)) != (2048 ^ var_4))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_22 = (((((((63487 << (var_11 - 111)))) & (((arr_0 [1]) & (arr_6 [i_0] [i_1] [i_5]))))) + ((((((((arr_9 [i_0] [i_0] [i_6 - 3]) == 0))) <= (((19206 <= (arr_12 [i_0] [i_5] [i_1] [i_0]))))))))));
                            var_23 = (((((var_1 * var_1) | (((var_17 == (arr_16 [i_6 - 1] [0] [i_0])))))) ^ ((((((var_3 % (arr_1 [i_0] [i_1])))) || (-523846534 + var_5))))));
                            arr_17 [i_6] = (((((63487 == 35499) | ((((arr_12 [i_0] [i_1] [i_0] [11]) > (arr_0 [3]))))))) >= ((((((var_1 != (arr_6 [i_0] [i_0] [9]))))) / ((46329 - (arr_16 [i_0] [2] [i_0]))))));
                            var_24 = (((((((arr_14 [i_0] [i_0] [8] [i_6]) >> (-1175193437474278192 + 1175193437474278218))) ^ ((((arr_15 [5] [8] [i_5] [i_5] [i_0] [i_0]) == var_5))))) >= ((((((arr_10 [i_1] [i_1] [i_5] [i_0] [i_6] [i_6]) << var_3)) >= (((((arr_0 [i_0]) || 11)))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
