/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_1] = var_2;
                    arr_9 [i_2] [i_2] [i_0] = 91;
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    var_13 = (min(var_13, (((((-(~104))) <= var_10)))));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_14 = (((!630529202195178583) | (~-92)));
                                arr_17 [i_0] [i_1] [i_3] [i_4] [1] [i_4] [i_5] = ((!((((arr_6 [i_0]) ? (arr_6 [i_0]) : var_6)))));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_15 = (((min(var_11, 65531))) ^ ((-((-(arr_10 [i_1] [3]))))));
                    arr_22 [i_0] = (i_0 % 2 == zero) ? ((min(((((((var_3 + 2147483647) << (((((arr_12 [i_0] [i_0] [17] [1] [1] [i_6]) + 2022989603)) - 13)))) != (max(var_1, (arr_12 [i_0] [i_1] [i_6] [i_0 + 2] [i_0 - 1] [i_0])))))), (min(1067398438, -96))))) : ((min(((((((var_3 + 2147483647) << (((((((arr_12 [i_0] [i_0] [17] [1] [1] [i_6]) - 2022989603)) - 13)) - 122828548)))) != (max(var_1, (arr_12 [i_0] [i_1] [i_6] [i_0 + 2] [i_0 - 1] [i_0])))))), (min(1067398438, -96)))));
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_16 = min(-28453, 2516768360);
                                arr_31 [i_0] = (-88 / -11999);
                                var_17 = 32;
                                var_18 ^= 3;
                            }
                        }
                    }
                }
                var_19 = ((~((((((arr_2 [i_0]) >> (3501330354 - 3501330346)))) ? var_4 : var_7))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            {
                arr_36 [i_10] [i_11] [i_11] &= ((((((var_6 >> (var_1 - 173907646))) & (max(var_4, (arr_7 [i_10] [i_11] [i_11]))))) >> (((((170 ? 11999 : 64969))) - 11985))));
                var_20 &= (min((((~(~var_10)))), 18446744073709551615));
            }
        }
    }
    var_21 = min(var_6, ((~((var_0 ? 17934 : var_4)))));
    #pragma endscop
}
