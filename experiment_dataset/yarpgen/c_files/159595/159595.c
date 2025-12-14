/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((min((max(var_2, ((max(39, var_3))))), var_6)))));
    var_11 = (max(var_11, (((((max(var_0, ((var_9 ? var_4 : -90))))) ? (((var_1 >> var_6) + (max(-53, 3250984291)))) : ((((!(((-12 ? var_1 : 255))))))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (max(var_12, (max(-33, 1935139432))));

        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            var_13 *= var_1;
            var_14 = (min(var_14, ((max(var_7, (((!10) ? (var_6 % var_6) : (~-1286482035))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    {
                        var_15 *= (((min(((min(36219, 40))), -4)) >= (((max((arr_7 [0] [i_2] [i_1] [i_0]), 25938))))));
                        var_16 ^= ((((max(((max((arr_7 [9] [i_1] [i_2] [i_3]), -4234))), (min(524287, -49))))) == ((112 ? var_5 : (arr_0 [i_1 - 2] [i_1 - 2])))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_17 |= (var_5 | 1453043010);
            var_18 = (max(var_18, (arr_0 [i_0] [i_0])));
            var_19 |= ((0 ? (~29) : var_1));

            for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
            {
                arr_14 [i_5] |= ((var_0 ^ ((0 ? 18446744073709551615 : 4294967273))));
                arr_15 [i_0] [i_5] [i_5] &= ((((var_8 ? (arr_3 [1] [i_4] [i_5]) : (arr_12 [i_4] [3] [3]))) - 1935139432));
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
            {
                arr_18 [i_6] [i_4] [i_6] |= 1;
                var_20 = (max(var_20, 92));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_21 = (max(var_21, (((((((arr_20 [i_6] [i_6]) >> (((arr_0 [5] [i_4]) + 4752106515016121762))))) ? ((var_6 ? 2605428505 : (arr_16 [6] [4]))) : (arr_16 [1] [1]))))));
                            var_22 = (min(var_22, ((((arr_7 [i_0] [2] [i_6] [i_7]) || -1935139451)))));
                        }
                    }
                }
            }
        }
    }
    var_23 *= ((~(max((var_6 < var_6), -var_4))));
    #pragma endscop
}
