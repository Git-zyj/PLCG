/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 ^= ((!((((min((-2147483647 - 1), 0))) >= (1025091018 - var_14)))));
                                var_16 = ((73 ? var_2 : (((var_1 ? (arr_4 [i_1 + 1] [i_0 - 1] [i_0 - 1]) : var_7)))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_17 = -104;

                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            var_18 = var_6;
                            arr_21 [i_1] = ((((min(511, (arr_0 [i_0] [i_0 - 1])))) >= ((-756870901 ? var_7 : (arr_15 [i_6] [i_1 - 1] [i_2] [i_0 - 2])))));
                            var_19 = var_9;
                            var_20 *= ((((min((min(-15, 28672)), (arr_4 [i_1 + 1] [i_1 - 2] [i_1 - 1])))) > (((((var_13 ? 15 : var_8)) == (arr_17 [i_0 - 3] [i_0 - 2] [i_1 + 1] [i_1 - 1] [i_1 + 1]))))));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_2] [i_2] [i_2] [i_2] [i_1] = (((((var_10 > (arr_9 [i_1 - 1] [i_0 + 2])))) - ((287151085 ? -756870894 : -124))));
                            arr_25 [i_7] &= (min((~var_1), ((-3957005802557425727 ? (arr_17 [i_1 + 2] [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_1]) : var_3))));
                            var_21 -= ((min(-13193, (arr_2 [i_1 + 2]))));
                            arr_26 [i_1] [i_7] = ((var_0 ? (arr_15 [i_0] [i_0] [i_2] [i_5]) : (6378 / -15)));
                        }
                    }
                    arr_27 [i_2] [i_1] [i_0] = ((((-((-(arr_10 [i_1] [i_0] [i_2] [i_0] [i_1 - 2]))))) - ((((-78 - 756870900) == (var_9 >= -2147483645))))));
                }
            }
        }
    }
    var_22 = var_0;
    #pragma endscop
}
