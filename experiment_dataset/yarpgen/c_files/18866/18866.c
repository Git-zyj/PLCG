/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!((var_6 == (var_1 || var_2))));
    var_12 = (max(((-(~var_3))), (max(-var_10, (var_5 / var_0)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [15] [i_0] = (~(max((max(var_4, var_2)), ((1 ? (arr_0 [i_0]) : var_8)))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_13 = var_10;
            arr_5 [i_1] = (((!(arr_1 [i_0] [i_0]))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (max((((arr_8 [i_1]) != (((arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] [i_4]) ? var_6 : 1)))), ((((((arr_0 [i_3]) ? -14292 : var_1))) != (~18183568953073747460)))));
                            var_14 = (((min((arr_13 [i_0] [i_1]), (arr_13 [i_1] [i_1]))) | (((!(arr_11 [i_0] [i_2] [i_1]))))));
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_15 *= (arr_6 [0] [6]);
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_5] = (~var_8);
                        }
                        var_16 = var_10;
                        var_17 = ((((((max(-32745, -1959415718)) ^ 1))) ? (!var_7) : (arr_1 [i_1] [i_1])));
                        arr_19 [i_0] [i_1] [i_1] [5] = ((var_7 ? ((~(~1))) : ((((~1) > (arr_13 [i_0] [i_1]))))));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 22;i_8 += 1)
            {
                {
                    var_18 = (min(var_18, -32745));
                    var_19 = (arr_24 [i_6] [i_7] [i_8]);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    {
                        var_20 ^= (arr_31 [i_10] [i_9]);
                        var_21 = (((arr_20 [i_6] [i_6]) & ((min(var_8, 67)))));
                        arr_32 [i_6] [i_10] [i_10] [i_11] [i_9] [i_6] = -var_0;
                    }
                }
            }
        }
        var_22 ^= var_0;
        arr_33 [i_6] [i_6] &= ((0 >= var_2) ? (arr_22 [15] [15]) : var_5);
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        arr_37 [i_12] [i_12] = (!((min(var_1, (arr_29 [i_12] [i_12])))));
        var_23 = ((((max((arr_26 [i_12] [i_12] [i_12]), (arr_26 [i_12] [i_12] [i_12])))) < (((1 | var_7) ? (arr_29 [i_12] [i_12]) : ((~(arr_23 [i_12])))))));
        var_24 = min((max((-127 - 1), ((var_4 ? 196608 : -14281)))), (((!((max(-30287, 120)))))));
        var_25 = -0;
    }
    for (int i_13 = 3; i_13 < 21;i_13 += 1)
    {
        var_26 = (min(var_26, var_6));

        /* vectorizable */
        for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
        {
            arr_42 [i_14] = 1850021457;
            var_27 = (min(var_27, var_6));
            arr_43 [i_13 - 2] [i_14] = var_8;
        }
        for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
        {
            arr_46 [i_13] [6] = -var_9;
            arr_47 [i_13 - 1] [i_15] [i_15] = (((((var_0 ? 4436864164852191881 : ((((arr_30 [i_13] [i_15]) ? var_9 : var_5)))))) ? ((263175120635804147 ? 10698793170541261279 : 0)) : 1));
        }
    }
    #pragma endscop
}
