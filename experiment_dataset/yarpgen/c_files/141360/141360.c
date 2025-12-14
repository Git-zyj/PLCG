/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1869186833;
    var_20 = (((((!var_16) < var_7)) ? var_15 : -var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                var_21 = arr_4 [i_1] [i_0];

                /* vectorizable */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_0] [i_0] = (arr_3 [i_2 - 1] [i_1 + 1]);
                                arr_16 [i_0] [i_0] [i_1] [i_1] [i_2 - 1] [8] [i_4] = (arr_0 [i_0]);
                                var_22 = ((255 ? (((arr_11 [i_0] [i_4] [i_4] [i_0]) ? (arr_1 [i_2]) : var_2)) : 6));
                            }
                        }
                    }
                    var_23 = ((var_18 << (-var_4 - 53)));
                    var_24 = 54;
                }
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 7;i_7 += 1)
                        {
                            {
                                arr_23 [i_5] [i_0] [i_5] = ((~(~var_13)));
                                arr_24 [i_0] [i_5] [i_5] [i_5] [i_6] [i_7] = var_1;
                            }
                        }
                    }
                    var_25 = (max((((arr_20 [i_5 + 1] [0] [i_1 + 1]) ? (arr_20 [i_5 + 1] [i_1] [i_1 + 1]) : (arr_13 [i_5 - 2] [i_5 - 2] [i_5] [i_5 + 1] [i_5] [i_1 + 1]))), ((172 ? 16704650165640192666 : 1))));
                    arr_25 [i_5] = var_9;
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_26 = var_3;
                    var_27 = (min((((((var_5 << (127 - 111)))) ? (((1 ? 65535 : 17881))) : (((arr_27 [i_8] [i_1 + 1] [i_1 + 1] [i_8]) ? (arr_21 [i_8]) : 127)))), ((max((((172 % (arr_12 [i_0] [1] [i_0] [i_0])))), ((113 ? 1 : 4294967293)))))));
                    var_28 = (((~-1) ? ((-(((arr_14 [i_8] [i_8] [i_8] [i_8] [i_8]) ? (arr_8 [i_1 + 1] [i_0]) : var_1)))) : (max(2, (((arr_14 [i_8] [i_1 + 1] [i_8] [i_8] [i_0]) ? 1 : var_6))))));
                }
                var_29 = (min(var_29, (arr_7 [i_1 + 1] [i_1 + 1])));
            }
        }
    }

    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
    {
        arr_30 [i_9] = var_4;
        var_30 *= (var_16 - -13140);
        var_31 *= ((-4141579789531963403 ? 0 : 65527));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
    {
        var_32 = ((var_3 + (var_18 | -111)));
        arr_35 [i_10] [i_10] = ((var_13 ^ (arr_34 [i_10])));
        var_33 = var_0;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {

                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_34 |= ((arr_42 [i_13] [15]) ? (arr_47 [i_12] [6] [i_13]) : ((var_18 | (arr_34 [i_13]))));
                        arr_49 [i_11] [i_12] [i_13] [i_13] [i_12] = (arr_34 [i_11]);
                    }
                    arr_50 [i_12] [i_12] = (((arr_41 [i_12] [i_13]) ^ ((var_8 << (((arr_29 [i_11]) - 82))))));
                    var_35 = ((var_4 + ((((arr_33 [i_11] [i_13]) == (arr_40 [i_11] [i_12] [i_12]))))));
                }
            }
        }
        var_36 = (((arr_36 [i_11]) % (arr_42 [i_11] [i_11])));
    }
    #pragma endscop
}
