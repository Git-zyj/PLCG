/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;

    for (int i_0 = 4; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_14 = (~0);
        var_15 = ((var_9 ? (((~((min(116, -6182)))))) : (max(((var_7 ? var_6 : 1270468614)), var_1))));
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((((min((!8188), (!var_3))) ? (((((65511 ? 236 : var_12))) ? (max(var_9, var_4)) : (((max(-22866, 253)))))) : ((max(1815591717, 0))))))));
        var_17 = ((-((((min(1920, 37490))) ? 65439 : var_9))));
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_15 [8] [i_3] [i_3] [i_5] [10] &= ((((27 ? (var_1 ^ 6825578635886110948) : (((var_6 ? 236 : var_8)))))) ? (((~(~var_7)))) : (max(-var_11, (max(var_5, 3678436889776149185)))));
                                arr_16 [i_2 + 2] [i_2] [i_4] [i_5] [i_6] = ((var_7 ? 65449 : (min(-22615, ((8863 ? 35848 : 919245600))))));
                                var_18 = (min((min(var_5, 58)), var_3));
                            }
                        }
                    }
                    var_19 = (--1497284112);
                    var_20 &= (max(184, ((((max(19, var_0))) ? 1 : 6223469453308706352))));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        arr_19 [i_2] [i_2 + 2] [i_3] [i_2] [3] [11] = var_6;
                        arr_20 [i_2] [i_2 - 1] [12] [i_2] [i_2] = (((((4288728365090674277 ? -1033063262 : 24788))) ? ((var_6 ? -1920 : 252)) : ((var_6 ? var_6 : 32409))));
                    }
                    arr_21 [i_2] [i_3] [15] = max(65442, 0);
                }
            }
        }
    }
    var_21 = (((1919 ? ((min(var_1, 33))) : (((-95 + 2147483647) >> (33 - 25))))));
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 13;i_9 += 1)
        {
            {
                var_22 += ((113 >> (((13844 / -125) + 141))));
                var_23 = ((((min((((94 ? 38 : var_6))), ((var_2 ? var_0 : 2319442211582349689))))) ? ((var_11 ? ((16384 ? -95 : 65441)) : ((max(100, var_2))))) : ((min(16, (!var_6))))));

                for (int i_10 = 2; i_10 < 10;i_10 += 1) /* same iter space */
                {
                    var_24 ^= (min((-0 - 4596452655645979342), 0));
                    arr_30 [i_8] = ((((-64 - var_1) ? 11612 : ((134217696 ? var_7 : 17964284196199919255)))));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            {
                                var_25 = (min(var_25, ((min(134217696, (((max(var_4, 55076)))))))));
                                var_26 &= (min(var_3, var_4));
                                var_27 = (max(((~((max(0, var_7))))), ((-((max(var_0, var_2)))))));
                            }
                        }
                    }
                    var_28 = max(((max(1, ((var_6 ? var_2 : var_3))))), ((((max(var_11, var_12))) ? (1 ^ 17673823227271357921) : ((var_4 ? 0 : 16060878544535497395)))));
                    var_29 = ((22245 ? (min(((var_9 ? var_4 : var_5)), var_4)) : -var_8));
                }
                for (int i_13 = 2; i_13 < 10;i_13 += 1) /* same iter space */
                {
                    arr_39 [i_8] [i_8] [i_8] [i_8] = ((-(((var_3 == ((var_8 ? 1440522378 : 2385865529174054209)))))));
                    arr_40 [i_8] [i_9] [3] = ((((((-708037537 ? var_8 : var_7))) + ((103 ? 37 : 3824001475)))));
                    var_30 = var_5;
                    var_31 *= ((~(var_10 != var_6)));
                }
            }
        }
    }
    #pragma endscop
}
