/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((!((max((arr_1 [i_0] [i_0]), var_9)))));
        var_15 ^= (arr_0 [i_0]);
        arr_4 [i_0] = (~187);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        arr_9 [i_1] = (arr_8 [i_1]);
        var_16 ^= ((-(7 / var_9)));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_17 = ((!(((11335598656136065126 ? var_0 : var_9)))));
                            var_18 = (!0);
                            var_19 = ((var_13 ? (arr_10 [i_1 + 1] [i_3 + 2] [i_3 + 2]) : (arr_10 [i_1 - 3] [i_3 - 1] [i_3 + 2])));
                        }
                    }
                }
            }
            arr_21 [i_1] [i_1] = (!0);
            var_20 = 0;
            arr_22 [i_1] [i_1] = ((((((arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]) >> 8))) ? -var_0 : (~32763)));
        }
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        arr_30 [i_6] = (((arr_28 [i_1 + 1] [i_1 + 1] [i_6 - 1] [i_7 + 1]) ? (arr_25 [i_1] [i_6] [i_1 - 2] [i_7 + 1]) : var_12));

                        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            arr_33 [i_8] [i_6] [i_6] = (((((4294967287 ? 3 : 32767))) ? ((var_5 ? var_0 : 8)) : (-20 * 56)));
                            arr_34 [i_6] = ((var_10 ? (((arr_24 [i_1] [i_1]) ? (arr_26 [i_6] [i_6]) : -10)) : var_3));
                            arr_35 [i_1] [i_1] [i_6] [i_6] [i_6] = ((((arr_5 [i_1]) > (arr_23 [i_1]))));
                            var_21 = (((arr_27 [i_6] [i_6] [i_6] [i_6]) > -249));
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                        {
                            arr_39 [i_1] [i_6] [i_1] [i_6] [i_1] = (56917 ? (((arr_27 [i_6] [i_6] [i_6] [i_6]) ? var_14 : (arr_11 [i_1] [i_1] [i_1]))) : (arr_14 [i_1] [i_1] [i_1]));
                            arr_40 [i_1] [i_1] [i_1] [i_6] [i_1] = (arr_12 [i_1] [i_1]);
                            var_22 *= var_6;
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                        {
                            var_23 = 10684;
                            arr_44 [i_1] [i_1] [i_1] [i_1] [i_6] = ((var_10 ? (arr_31 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1 - 3]) : (arr_31 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])));
                        }
                        arr_45 [i_1] [i_1] [i_1] [i_1] [i_6] = (((arr_5 [i_7 + 3]) || ((((arr_23 [i_8]) ? (arr_28 [i_6] [i_6] [i_6] [i_6]) : (arr_28 [i_1] [i_1] [i_1] [i_1]))))));
                    }
                }
            }
        }
    }
    var_24 *= (((((var_7 || (((var_5 ? var_4 : 54835)))))) != ((max((var_0 && var_5), (!var_5))))));
    #pragma endscop
}
