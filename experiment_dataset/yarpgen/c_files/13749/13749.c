/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 = ((var_2 ? ((~((var_16 ? var_15 : var_12)))) : var_5));
    var_20 += 1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_21 = ((!(((-112564658061491394 ? var_8 : var_0)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_0] [i_3 + 1] = (((arr_3 [i_3] [i_2 + 1] [i_1]) ? (((9 ? 507904 : var_11))) : (arr_6 [1] [i_2] [i_0])));
                        var_22 = (arr_3 [i_0] [i_0] [i_0]);
                        arr_11 [i_0] [1] [i_0] [i_3] [i_3] = ((-8895 ? (arr_8 [i_3] [i_2 - 2] [i_1] [i_0]) : (arr_4 [i_0] [i_2 + 1] [i_3 - 2])));
                        var_23 = (min(var_23, -25));
                        var_24 = (min(var_24, ((((arr_3 [i_2 - 1] [i_2 - 1] [i_3 + 1]) ? (arr_3 [i_2 + 1] [i_2 - 2] [i_3 - 2]) : var_5)))));
                    }
                }
            }
            arr_12 [i_0] [i_0] = (((arr_6 [i_0] [4] [i_0]) ? var_1 : ((((arr_6 [i_0] [i_1] [i_1]) == (arr_4 [i_0] [i_1] [8]))))));
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        {
                            var_25 ^= (arr_8 [i_4 - 1] [i_6 + 2] [i_6 + 1] [i_6 + 1]);
                            var_26 = (min(var_26, var_4));
                            var_27 *= (~(((arr_7 [i_0] [i_1] [i_4 + 1] [i_5]) >> (((arr_20 [8] [i_4] [i_5] [i_6]) + 64)))));
                            var_28 = (max(var_28, 27));
                            arr_23 [i_0] [i_1] [i_0] [i_5] [i_6] = (((-507905 ? -29 : (arr_7 [i_6] [i_1] [11] [i_5]))));
                        }
                    }
                }
            }
            var_29 = (arr_15 [i_0] [i_1] [i_0] [i_0]);
        }
        var_30 *= ((!(arr_21 [i_0] [4] [4] [i_0])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    {
                        var_31 = (~(arr_35 [i_7] [7] [i_9 + 1] [i_10] [i_10]));
                        var_32 = 15;
                        var_33 = (~var_4);
                    }
                }
            }
        }
        arr_36 [i_7] = (!(((var_3 ? var_9 : (arr_28 [i_7] [i_7])))));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 11;i_12 += 1)
            {
                {
                    arr_44 [i_11] = var_4;
                    arr_45 [i_7] [i_11 - 1] [i_12] = ((~((25 ? (arr_31 [2] [i_11 + 1]) : var_16))));
                }
            }
        }
    }
    #pragma endscop
}
