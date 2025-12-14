/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((((-(var_6 < var_6))) * (((-131656653 + 2147483647) << (((~-30051) - 30050))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = 1;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_1] [10] [i_2] [i_3] [i_0] [i_3] = ((((min(var_1, (var_5 < var_9)))) > (131656680 + -21)));
                        var_13 = (max((1731 ^ var_4), (!1)));
                        var_14 = var_9;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_15 = (((var_0 / var_6) / (max((min(var_6, var_4)), (min(1, var_6))))));

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_16 = (((((!(!var_8)))) * ((((var_2 | var_1) == (((min(var_1, 0)))))))));
                            arr_18 [i_1] = ((((((~(max(var_9, var_0)))) + 2147483647)) >> (((var_8 < var_3) | ((max(var_3, 1)))))));
                            var_17 = (min(var_17, var_8));
                            arr_19 [i_0] [i_4] [i_1] [i_0] [i_5] [i_2 - 1] [i_0] = var_3;
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            var_18 = (max(var_18, ((min(((((-32765 > 0) && -1))), (1 / var_3))))));
                            arr_22 [i_1] [i_0] [i_0] [i_0] [i_6] = (((((max(var_2, var_9)) / var_2)) - (((-((max(var_10, var_1))))))));
                            arr_23 [i_0] [i_1] [i_0] [i_1] = ((-(min((-9223372036854775802 - -9223372036854775786), var_0))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            var_19 = (((!9023929219232548715) << (var_7 < var_9)));
                            var_20 += (1 + 122);
                            var_21 = (max(var_21, var_1));
                            var_22 = var_10;
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            var_23 &= (((((min(var_8, var_4))) && var_10)));
                            var_24 = ((~((var_2 & (var_1 >> var_8)))));
                        }
                    }
                }
            }
        }
        arr_28 [i_0] &= ((((-(max(var_7, 63)))) <= (((3574825074207167313 < (((var_2 >> (var_0 + 2136628067)))))))));
        var_25 = (((max((~var_2), var_8)) | ((min(var_10, (min(134, var_0)))))));
    }
    var_26 ^= ((var_7 == ((~(max(var_9, var_6))))));
    #pragma endscop
}
