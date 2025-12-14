/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_1 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_12 [0] [i_1] [i_1] [i_2] [i_3] = (((((-(min(-2957460584933972521, 231))))) ? (((0 != (var_10 && 14)))) : (arr_4 [i_2 - 1] [i_2 + 1] [i_2 - 1])));
                            var_16 = (min(var_16, var_15));
                            arr_13 [i_1] [i_1] [19] = var_9;
                            var_17 -= ((((max((arr_6 [i_3] [i_0] [i_0]), (arr_11 [i_0] [i_1])))) ? 32768 : (max((min((arr_3 [i_2]), var_8)), (((var_2 ? 1 : -3)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_18 -= (min((((((var_4 ? var_11 : var_13))) ? (((167 ? 16721 : 787071778))) : ((-44 ? (arr_17 [i_0] [19] [i_0] [14] [i_5]) : 8191)))), 65535));

                            for (int i_6 = 0; i_6 < 22;i_6 += 1)
                            {
                                var_19 ^= 24894;
                                var_20 = ((((max((arr_6 [i_0] [i_0] [i_4]), (arr_6 [i_4] [i_4] [i_4])))) == var_1));
                                var_21 = ((~((-(arr_6 [i_0] [i_0] [i_6])))));
                                var_22 = 3433;
                            }
                            for (int i_7 = 1; i_7 < 21;i_7 += 1)
                            {
                                var_23 = ((((var_5 ? var_6 : var_3))));
                                var_24 = ((((!((((arr_2 [i_7 + 1] [i_1]) * (arr_3 [i_4])))))) || (min((!-8), ((var_7 != (arr_15 [15] [i_5] [i_7 + 1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            {

                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    arr_37 [i_8] [i_10] [i_9] [i_10] = ((!((!(~var_0)))));
                    arr_38 [i_8] [i_10] [i_10] = (min((arr_35 [i_8] [i_10] [i_10]), ((var_14 - (arr_33 [i_8] [i_9] [i_10])))));
                    var_25 = -114;
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_26 = ((((17031572960355053784 ^ (arr_34 [i_11] [i_9] [i_8]))) > ((min(1, 4086564155)))));
                    var_27 = arr_32 [i_8] [i_8] [i_8];
                }
                /* LoopNest 3 */
                for (int i_12 = 4; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 21;i_13 += 1)
                    {
                        for (int i_14 = 4; i_14 < 20;i_14 += 1)
                        {
                            {
                                var_28 = (min(42569, (max((((var_0 ? var_8 : 30848))), (arr_41 [i_12] [i_9] [1])))));
                                var_29 = ((var_11 ? (min((arr_39 [i_8] [i_9] [i_12]), ((var_8 ? var_5 : var_3)))) : ((min(4294967295, (arr_31 [i_8]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 &= var_14;
    #pragma endscop
}
