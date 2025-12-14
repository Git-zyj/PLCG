/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((var_6 & ((((min(0, var_6))) ? (min(var_10, var_1)) : (~var_6)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))));
        var_12 -= (arr_0 [i_0]);
        var_13 = ((-4118293973903021575 ? (((((((arr_1 [i_0] [i_0]) ? var_8 : 0))) ? (((arr_0 [i_0]) / 1)) : ((-(arr_0 [i_0])))))) : (((!var_1) ? (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : 4294967281)) : var_9))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_14 = 208;
        var_15 = (min(var_15, (((-(16669860295572326412 + 16262))))));
        arr_5 [i_1] = ((((((var_9 && (arr_3 [i_1]))))) % ((72 ? 1 : 1693402658362842209))));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_10 [i_1] [i_2] = (((((-(arr_6 [i_2] [i_1] [i_1])))) ? var_1 : 4118293973903021554));
            arr_11 [i_2] = (((arr_9 [i_2]) <= (arr_4 [i_2] [i_1])));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_16 *= (arr_8 [i_1] [i_1] [i_3]);
            var_17 -= (arr_3 [i_1]);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            arr_22 [i_1] [i_4] [i_4] [i_5] [i_6] = ((-((1 ? (arr_14 [i_6] [i_4] [i_1]) : 237))));
                            arr_23 [i_1] [i_1] [i_1] [i_4] [i_1] = (i_4 % 2 == zero) ? ((82 >> (((arr_20 [i_4] [i_3] [i_4] [i_5] [i_6] [i_1]) + 2158878370756928931)))) : ((82 >> (((((arr_20 [i_4] [i_3] [i_4] [i_5] [i_6] [i_1]) + 2158878370756928931)) + 6103210809020492655))));
                            arr_24 [i_1] [i_4] [i_4] [i_5] [i_6] = -var_0;
                            arr_25 [i_4] [i_6] [i_4] [i_6] [i_6] [i_4] [i_6] = (((~1) - 40551));
                            var_18 = ((2147483647 << (!var_6)));
                        }
                    }
                }
            }
            var_19 = (arr_21 [i_1] [i_3] [i_1] [i_1] [i_1] [i_3]);
        }
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_20 = (max(var_20, ((((22 <= 1) ? (arr_0 [i_7]) : var_7)))));
        arr_29 [i_7] [i_7] = (arr_17 [i_7] [i_7] [i_7]);
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_21 = (-4118293973903021537 < 26);
        arr_32 [i_8] = (arr_27 [i_8] [i_8]);
        var_22 = var_2;
    }
    #pragma endscop
}
