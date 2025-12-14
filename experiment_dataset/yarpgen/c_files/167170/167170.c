/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_14 = -1969954683;
                        arr_12 [i_0] [i_2] [i_1] [i_0] = ((((var_11 ? var_3 : var_9)) * var_8));
                    }
                    var_15 = ((!(((var_7 ? (arr_5 [i_0] [i_0] [i_0]) : 255)))));
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_16 = (max(var_16, (arr_15 [i_2] [i_1] [i_2] [i_2] [i_5])));
                                var_17 = (min(var_17, ((((!-9223372036854775795) % -8394)))));
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_18 ^= (((arr_11 [i_2] [i_0] [i_0 + 1] [i_0]) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 + 2])));
                        var_19 = (max(var_19, (((~(((arr_18 [i_0] [i_1] [i_1]) ? var_1 : 0)))))));
                        var_20 = (max(var_20, (arr_14 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0])));
                    }
                }
                var_21 -= (((arr_0 [i_0] [i_1]) < ((-(arr_2 [8])))));
            }
        }
    }
    var_22 ^= (min((max(var_4, var_7)), var_5));

    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_23 = -var_1;
        var_24 = (min((((arr_20 [i_7]) ? ((min(0, 0))) : var_7)), ((((min((arr_20 [i_7]), 2325012600))) ? (arr_22 [i_7]) : ((min((arr_22 [i_7]), (arr_22 [i_7]))))))));
        var_25 = ((((((min(2325012600, 1969954683))) ? 18164 : (-8 | 65533)))) ? (max(164, 2402946684)) : (!30629314964321436));
        var_26 = (+(((~var_8) ? (~var_8) : (~var_12))));
        var_27 -= (min(-18719, (min(138, ((var_10 ? var_12 : (arr_21 [i_7] [i_7])))))));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        arr_26 [i_8] = (~var_5);
        var_28 = (min((~54159), (((!(arr_21 [i_8] [i_8]))))));
        var_29 ^= ((!((min(28, 65528)))));
        arr_27 [i_8] [i_8] |= ((!(!-8394)));
    }

    /* vectorizable */
    for (int i_9 = 3; i_9 < 14;i_9 += 1)
    {
        var_30 = (min(var_30, (((-8 & (arr_23 [i_9 + 1]))))));
        arr_30 [i_9] = 63;
        var_31 &= (-293920901 | 806101726);
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_32 = (min(var_32, ((((((((var_2 ? (arr_33 [i_10]) : var_7)) >> ((((~(-127 - 1))) - 117))))) || var_7)))));
        var_33 = ((((((((41181 ? (-32767 - 1) : 25))) ? var_8 : ((max(var_8, 87)))))) > 16497907783445118858));
        var_34 = ((((((((1416829568 / (arr_32 [i_10])))) ? (max((arr_31 [i_10]), (-32767 - 1))) : (arr_32 [i_10])))) ? ((((var_12 / (arr_34 [i_10]))))) : ((806101735 ? 3714224351837133510 : 0))));
        var_35 = -32758;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        arr_37 [i_11] = arr_36 [i_11];
        arr_38 [i_11] [i_11] |= (var_4 + 2);
    }
    var_36 = ((!(((-((var_3 ? var_12 : var_10)))))));
    #pragma endscop
}
