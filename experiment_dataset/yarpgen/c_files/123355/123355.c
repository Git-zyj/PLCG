/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 = ((((max(((-1653567769138517174 ? 96 : 6063935562608308559)), var_8))) ? (!var_10) : var_6));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_21 = 22925;
                        var_22 = -1653567769138517189;
                        var_23 = ((((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) != 18446744073709551615))) < (arr_4 [i_1] [i_1] [i_1] [i_3])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    {
                        var_24 += ((((((83 ? 133693440 : var_0)))) ? (((min((-32767 - 1), 7740)))) : ((-97 ? var_8 : ((-1 ? -1 : 86))))));

                        for (int i_7 = 3; i_7 < 13;i_7 += 1)
                        {
                            arr_20 [i_0] = 38;
                            var_25 = (max(var_25, (((89 ? -3084849221812995292 : (0 >= var_18))))));
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_26 = (min(var_26, 25268));
                            arr_23 [i_0] [i_0] = (57 - 17090708036026993227);
                            arr_24 [i_0] [i_0] [i_0] [i_6] [i_8] [i_6] [0] = ((((max(22561, var_16))) | (!3840)));
                            var_27 ^= var_3;
                            var_28 = (max(var_28, ((max(((((((-9144 > (-127 - 1))))) ^ 1403)), 61)))));
                        }

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_29 = var_11;
                            var_30 = (min(var_30, (((4194240 ? -11 : -9891)))));
                        }
                        for (int i_10 = 2; i_10 < 14;i_10 += 1)
                        {
                            var_31 = 64132;
                            arr_29 [i_0] [i_0] [i_5] [i_0] [i_10] = ((!(((((561850441793536 ? var_4 : 2147483647)) + var_6)))));
                            var_32 *= ((!((min((~var_8), (var_0 == 18446744073709551615))))));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [14] = (min(((((var_1 ^ -100) ? 133 : 19743))), (arr_18 [i_10] [i_4] [i_4] [i_4] [i_0])));
                            arr_31 [i_0] [i_4] [i_5] |= (min(((~(var_10 ^ var_3))), -28146));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            var_33 ^= (119 / var_4);
                            arr_35 [i_5] [i_0] = ((1390 << (-64 + 78)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
