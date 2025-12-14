/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_3 [20]) ? (((!(arr_0 [i_0])))) : ((((arr_0 [i_0]) >= (arr_0 [i_0]))))));
        arr_5 [i_0] = (((arr_1 [i_0]) ^ (((~8088467950407633755) | -8088467950407633744))));
        arr_6 [i_0] |= (-(arr_2 [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = (((-(arr_0 [i_1]))));
        var_20 = (((arr_0 [1]) || (arr_0 [i_1 + 1])));
        var_21 = (((1 == 3537485896654408921) < (((arr_1 [i_1]) / (arr_0 [i_1])))));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_14 [i_1] = (((-103 + 2147483647) >> (((arr_7 [i_1 + 4] [i_1 + 1]) + 118))));
            arr_15 [i_2] [i_1] [6] = (((arr_8 [i_1]) ? -84 : (arr_8 [i_1])));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_22 = (max(var_22, (((0 ? 1 : 1)))));
            var_23 = (((3222881773401764118 * 90) >= (arr_0 [i_1 + 4])));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        arr_25 [i_1] [i_1] [i_1] [1] = (arr_16 [i_5 - 1] [i_5 - 1] [i_1 + 3]);
                        var_24 = (arr_0 [i_1 + 4]);

                        for (int i_7 = 2; i_7 < 10;i_7 += 1)
                        {
                            var_25 = (!-1);
                            var_26 = (min(var_26, (arr_1 [i_1])));
                        }
                    }
                }
            }
            arr_28 [i_4] [i_4] |= (((!(arr_21 [i_1] [i_4] [i_4]))) || (arr_10 [i_1]));
            arr_29 [i_4] [i_1] [i_1] = (((arr_8 [i_1]) == (arr_8 [i_1])));
        }
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 16;i_8 += 1)
    {
        var_27 = (((arr_3 [i_8]) || ((1 && (arr_31 [17] [i_8])))));
        arr_32 [i_8] = (arr_1 [i_8]);

        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            var_28 = (arr_3 [i_8]);
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    {
                        arr_42 [i_8] [i_9] [i_9] [0] = (arr_39 [i_9] [i_9] [i_10] [i_11]);
                        var_29 = ((-(arr_1 [i_8 - 3])));
                    }
                }
            }
        }
    }
    var_30 = ((var_15 ? ((((-100 != 992) < (max(var_14, var_9))))) : ((((-992 ? 1 : 1)) * (1 && var_11)))));
    var_31 = ((((!9497579932862253413) != (-968 * 65))));

    /* vectorizable */
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        arr_45 [6] [i_12] = 21;
        var_32 = (arr_44 [i_12] [i_12]);
    }
    for (int i_13 = 0; i_13 < 11;i_13 += 1)
    {
        var_33 = 125;
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 10;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                {
                    var_34 = (arr_13 [i_13]);
                    arr_53 [i_13] [7] [i_13] = ((((((-(arr_0 [i_13]))))) - (arr_37 [i_13] [i_13] [i_13] [i_13])));
                }
            }
        }
    }
    #pragma endscop
}
