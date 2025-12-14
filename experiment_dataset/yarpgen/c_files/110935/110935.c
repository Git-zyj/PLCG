/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_6 [12] [12] |= 4294967295;
            var_15 = var_9;
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] = 32767;
            var_16 = (((arr_2 [1] [i_2] [i_2]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0])));
            var_17 = (min(var_17, (arr_8 [i_0 - 3] [i_2])));
            var_18 &= var_7;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_15 [i_0 - 3] [i_2] [i_2] &= ((var_6 ? ((~(arr_11 [i_2] [i_3] [i_3]))) : 1));
                        var_19 = ((-(arr_12 [i_0 + 1] [i_2] [i_4 - 1])));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
        {
            arr_19 [i_0 + 2] &= arr_5 [i_5];
            var_20 = var_9;
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 12;i_8 += 1)
                {
                    {
                        var_21 = (((arr_4 [i_0 - 3] [i_0 - 3]) ? ((~(arr_27 [i_0 - 1]))) : (arr_11 [i_7] [i_7] [i_6])));
                        var_22 = (min(var_22, -690630446080031669));
                    }
                }
            }
        }
        var_23 = 2048;
        var_24 ^= ((((((arr_7 [11]) ? 12558 : 2048))) ? var_12 : (arr_13 [i_0 - 3] [0] [i_0 - 1] [i_0 - 3])));

        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            arr_32 [i_0 + 2] [i_0 + 2] [0] = ((~(~2055)));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 11;i_11 += 1)
                {
                    {
                        var_25 = var_11;
                        var_26 ^= 690630446080031671;
                    }
                }
            }
            arr_38 [i_9] = var_1;
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 12;i_13 += 1)
                {
                    {
                        var_27 = (min(var_27, var_7));
                        var_28 = (arr_14 [i_0 - 3] [i_9] [i_13 + 2]);
                        var_29 -= var_9;
                        var_30 = ((-152047125 ? var_1 : ((15 ? 255 : var_9))));
                    }
                }
            }
        }
    }
    for (int i_14 = 2; i_14 < 14;i_14 += 1)
    {
        var_31 += var_3;
        var_32 = 3556127695;
    }

    /* vectorizable */
    for (int i_15 = 2; i_15 < 11;i_15 += 1)
    {
        arr_49 [0] [i_15 + 1] = (((arr_4 [i_15 - 2] [i_15 - 2]) ? (arr_4 [i_15 - 2] [i_15 - 2]) : 738839600));
        var_33 &= ((~(((arr_28 [i_15]) ? (arr_43 [i_15] [i_15] [i_15] [i_15 - 2] [i_15 - 1]) : 11988727011950169495))));
        arr_50 [5] &= ((-var_9 ? 5944 : var_4));
    }
    for (int i_16 = 0; i_16 < 0;i_16 += 1)
    {
        var_34 = (arr_52 [18]);
        arr_54 [i_16] = 255;
        arr_55 [7] [i_16] &= 3556127695;
        var_35 = (max(var_35, (+-1911432114)));
        var_36 = (min(var_5, 11038088391753667182));
    }
    var_37 = var_12;
    #pragma endscop
}
