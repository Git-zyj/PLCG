/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_0] [i_2] [i_0] [i_0] |= (~(max(var_7, ((22 ? -7001871961594884365 : -1)))));
                                var_15 += (((((118 | (((arr_8 [i_4] [i_3] [i_1]) & -1))))) | ((var_7 ? (min(var_2, -1326015202391831191)) : (var_14 ^ 5)))));
                            }
                        }
                    }
                }
                var_16 = (min(var_16, ((-(min((arr_3 [i_1 + 1] [i_1 - 3] [i_0]), -5))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_19 [i_1] [i_1] [i_5] [i_5] = ((max(((-5 ? 2016608485363409153 : -8845663346566344669), 5372354737315392571))));
                            var_17 = (var_1 != 1023);
                            arr_20 [i_1] = -5;

                            for (int i_7 = 0; i_7 < 11;i_7 += 1)
                            {
                                arr_24 [i_0] [i_1] [i_6] [i_7] = (arr_3 [i_5] [i_1] [i_1]);
                                var_18 = (max(var_18, (((0 ? (((((max((arr_0 [i_0] [i_1 - 2]), (arr_0 [i_0] [i_7])))) > var_12))) : (((-127 - 1) ? 127 : 130)))))));
                            }
                        }
                    }
                }

                for (int i_8 = 2; i_8 < 9;i_8 += 1)
                {
                    var_19 = (min(var_19, (arr_3 [i_0] [7] [i_0])));
                    var_20 = (((((~(arr_16 [i_0])))) ? (arr_0 [4] [i_8]) : (arr_14 [10] [i_1 + 1] [i_1] [10])));
                    var_21 = ((~(~20)));
                }
            }
        }
    }
    var_22 = ((var_9 ? (((var_8 && -7167123706995228695) ? ((-119 ? 106 : var_13)) : 9223372036854775807)) : 0));
    var_23 = var_10;
    var_24 = (min(var_24, -99));
    #pragma endscop
}
