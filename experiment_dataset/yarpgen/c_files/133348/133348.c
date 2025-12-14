/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    arr_6 [i_0] = (min((min((var_15 >> var_3), var_7)), ((min(var_4, (var_14 / var_13))))));
                    var_19 = (max((((-97 == var_5) >> ((((var_18 ? var_18 : var_10)) + 1009270214)))), 61));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_20 = ((((min(((60 >> (var_13 - 170))), (var_1 / var_18)))) ? 16140901064495857664 : ((((((var_11 << (152 - 135)))) ? ((var_17 ? -2147483647 : var_14)) : (~var_16))))));
                    var_21 = ((var_4 ? 104 : ((min(128, 1)))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_22 = (((-1 * 0) ? var_9 : var_18));
                    var_23 = (var_0 ^ var_2);
                    arr_12 [i_0] = var_3;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_19 [3] [i_0] [3] [9] [3] = (((var_13 & var_1) ? (!var_16) : var_11));
                                var_24 = (~var_10);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_25 &= (-127 - 1);
                                var_26 = (min(var_26, (((((var_18 ? var_0 : var_17)) * 104)))));
                                var_27 ^= (104 / var_8);
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_28 *= ((((((var_4 / var_10) ? (var_14 / var_1) : (var_1 / var_14)))) ? (((((min(61849, var_8))) ? (-512 * var_9) : 15))) : ((((var_12 ? 10326742038069095146 : 1)) / var_1))));
                                var_29 = (~((var_15 ? var_0 : 127)));
                            }
                        }
                    }
                    arr_32 [i_0] [i_1] [i_0] = max((!128), (max((-127 - 1), var_8)));
                    var_30 *= ((((var_10 ? (var_16 ^ var_10) : ((min(var_9, var_2))))) >= ((min(0, 255)))));
                }
                var_31 = (min(((min(77, 156))), (~var_12)));
            }
        }
    }
    var_32 *= (max(1, (max((~var_1), 62))));
    #pragma endscop
}
