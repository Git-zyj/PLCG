/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [i_2 + 2] [i_2 + 1] [i_3] [i_3] = ((((min((arr_0 [i_0]), var_14))) ? (arr_0 [i_0]) : (((!(arr_0 [i_0]))))));
                            var_15 = ((((((((arr_3 [i_2] [i_1]) ? 2373348502 : 94308054))) ? (((1 ? 0 : 65535))) : (min(var_3, (arr_4 [i_1] [13] [i_3]))))) * (((((var_3 ? 3 : -1)) - (((!(arr_4 [i_0] [i_0] [i_0])))))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_16 *= (max(1, var_14));
                                var_17 = (var_5 ? ((((((arr_10 [i_0]) || (arr_12 [i_6] [i_5 + 3] [i_0] [i_0] [i_0] [i_0])))) + (arr_12 [i_5] [6] [i_5 + 2] [i_0] [i_5 - 1] [i_5]))) : ((1 | ((((arr_17 [18] [1]) == (arr_9 [i_4])))))));
                                var_18 = ((var_7 || ((((((arr_6 [i_0] [i_0] [i_0] [i_0] [i_0]) != (arr_4 [i_0] [i_1] [i_1])))) == ((min((arr_3 [5] [i_1]), var_4)))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 20;i_8 += 1)
                    {
                        {
                            arr_23 [i_8 + 2] [i_0] [i_8] [i_8] = (max(var_9, (arr_3 [i_0] [0])));
                            arr_24 [i_1] [i_8 - 2] &= (((((104 ? (-1261882372 && 1) : 2842))) ? ((((arr_15 [i_8 - 3] [i_1] [i_7] [2] [i_0] [i_1] [i_0]) > 1))) : 48252));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 20;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 1; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 19;i_13 += 1)
                        {
                            {
                                arr_40 [i_9] = (max(var_3, ((1 ? var_3 : (255 && 193)))));
                                var_19 = ((((max(var_10, ((-(arr_6 [i_9] [i_13 + 1] [5] [i_12 - 2] [i_13])))))) ? (1 * var_3) : ((1 ? -var_4 : ((-2713529166478848422 ? (arr_9 [6]) : -2713529166478848422))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        {
                            var_20 ^= ((((1 ? ((max(-21470, 34160))) : (~1)))) ? (((!var_10) ? (var_1 || 15295) : ((-21 ? -41 : 13)))) : 0);
                            arr_45 [i_9] [i_14] [i_9] [i_9] = ((var_0 / (((arr_44 [i_15] [i_10 + 1] [i_10] [i_10] [i_9] [0]) ? (arr_44 [i_10] [i_10 - 2] [i_10] [13] [1] [i_9]) : (arr_44 [i_14] [i_10 - 2] [i_10] [i_10] [i_10] [i_10 - 3])))));
                            var_21 &= var_13;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        {
                            arr_53 [i_9] [i_16] [i_10] [i_9] = ((21470 ? 0 : 2713529166478848422));
                            var_22 = (min(var_22, (((1 ? 32767 : 1125899369971712)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 3; i_19 < 19;i_19 += 1)
                    {
                        {
                            arr_60 [i_9] [i_9] [19] [i_9] = (arr_58 [i_9] [i_19 - 1] [i_19 + 1]);
                            arr_61 [i_9] = ((~(arr_52 [i_9] [17] [i_9] [i_19])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
