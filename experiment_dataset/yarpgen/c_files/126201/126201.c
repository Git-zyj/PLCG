/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_20 = ((-(min(2796291947, 53644))));
                            var_21 = (min(var_21, (min(var_14, (!8799793755429158877)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [1] [i_4 - 3] [i_4 - 3] [1] |= (var_6 * -11892);
                                var_22 = (max(-53644, -18175743882594418033));
                                var_23 *= ((!((((arr_15 [i_0] [i_1 + 1] [i_4] [i_5]) ? -2216026208294376963 : (((arr_3 [i_0] [i_1] [i_4]) ? 15526660404629286323 : var_11)))))));
                            }
                        }
                    }
                }
                var_24 = (min(var_24, (((!((((((var_4 ? (arr_17 [i_0] [i_0] [i_0] [i_0]) : -35))) & (arr_4 [i_1 + 2] [i_1 - 1])))))))));
                var_25 = (min(var_25, ((((((5742171967039001998 ? 1 : 4503984474193170382))) || ((!(var_5 && 1))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 16;i_8 += 1)
        {
            {
                var_26 = (((((53654 & 990049268453989207) >> (!11882))) | (((-(((-187845908 + 2147483647) << (var_4 - 1))))))));
                arr_26 [i_7] [i_7] = var_7;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 19;i_11 += 1)
            {
                {
                    arr_35 [i_9] [i_9] [i_11] [i_10] = ((-((-(~53644)))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 17;i_13 += 1)
                        {
                            {
                                var_27 &= (arr_7 [i_11 + 1]);
                                var_28 = ((~(min(var_14, (arr_28 [i_9] [i_10 - 1])))));
                            }
                        }
                    }
                    var_29 = ((-((((~(arr_19 [i_9] [i_10] [i_11] [i_11] [i_10] [i_10]))) & (104 <= var_18)))));
                }
            }
        }
    }
    var_30 ^= var_11;
    #pragma endscop
}
