/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((((min(15425776552127139590, 1)) != var_11))), (((10024511895923494910 ? var_1 : 61890)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = -3681550861143744360;
        var_14 = (min(var_14, (((-var_3 ? ((min(var_2, (arr_1 [i_0])))) : ((((var_9 == var_8) <= ((max((arr_1 [i_0]), (arr_1 [i_0]))))))))))));
        var_15 -= (((!1) < (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        var_16 += ((3968 ? ((((((arr_2 [i_0]) ? var_7 : (arr_1 [i_0]))) < ((~(arr_2 [i_0])))))) : (max((238 > -5176092447652594835), ((-(arr_0 [i_0] [i_0])))))));
        var_17 = ((max(((var_11 ? (arr_0 [i_0] [i_0]) : 0)), ((((arr_1 [3]) ? 1 : -83))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 ^= 2709;
        arr_5 [i_1] = (!var_8);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_19 = 1;
        var_20 = ((16907 ? 288503 : (arr_6 [i_2])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_21 = (~(arr_8 [i_6]));
                        arr_18 [i_6] [i_5] [6] [i_3] [i_3] [1] = (arr_8 [i_6]);
                        var_22 *= var_1;
                        arr_19 [i_6] [i_5] [i_4] [i_3] = ((((((arr_12 [i_3] [i_3]) ? var_10 : var_1))) ? ((-1 ? var_2 : var_9)) : 1991929849));
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_23 = (((((arr_10 [i_3]) + 2147483647)) << ((((arr_13 [i_3] [i_3] [i_7]) != 0)))));
            var_24 &= arr_23 [i_3];
            var_25 = ((195 << (((arr_12 [i_3] [i_3]) ? (arr_23 [1]) : -1))));
            var_26 = 1;
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_27 = (min(var_27, ((((arr_28 [i_10] [i_10] [i_10]) ? var_5 : (arr_28 [11] [i_7] [11]))))));
                            var_28 = (min(var_28, (((!(arr_24 [i_10] [i_9] [i_7]))))));
                            arr_31 [i_3] [16] [i_3] [8] [i_10] &= (var_10 | var_0);
                            arr_32 [i_10] [i_8] [i_7] = (126 * 3);
                        }
                    }
                }
            }
        }
        arr_33 [i_3] = ((-(var_3 == var_5)));
        var_29 = 12577;
        var_30 = (max(var_30, 4325726751601572512));
    }
    var_31 = (((((var_7 ? 153 : (1 == 1)))) ? ((251 ? 1 : var_8)) : ((min((min(1, var_1)), var_8)))));
    var_32 = 0;
    #pragma endscop
}
