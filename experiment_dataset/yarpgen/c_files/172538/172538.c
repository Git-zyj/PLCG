/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_14 = (min(var_14, ((((~134217696) ? var_8 : ((11460890454886276998 / (arr_6 [i_0] [i_0]))))))));

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_15 = (134217696 == var_8);
                arr_10 [i_0] [i_0] = ((65534 ? ((var_6 ? var_7 : var_12)) : (((143833713099145216 ? 134217696 : var_10)))));
                var_16 |= var_4;
                var_17 = -134217695;
            }
            var_18 += (var_6 != 65535);
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_19 = (((((-((var_3 ? -134217697 : 2118013545087467199))))) ? -1086973408 : 1));

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                arr_15 [i_0] [i_3] [i_4] [i_4] = (var_5 / var_4);
                var_20 ^= (min(((var_4 ? 1 : var_10)), ((((~var_11) >= (min((arr_1 [i_0] [2]), 63429)))))));
            }
            arr_16 [i_3] = (((((var_6 ? 0 : 8176))) ? 13772 : (arr_6 [i_0] [i_3])));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_21 = (var_2 | var_11);

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    arr_23 [i_6] [i_6] [i_6] [i_6] = (arr_14 [i_6] [i_5]);
                    arr_24 [i_0] [i_5] [i_6] [i_6] [i_6] [i_7] = (~var_9);
                }
                for (int i_8 = 3; i_8 < 13;i_8 += 1)
                {
                    arr_28 [i_0] [i_5] [i_6] [i_6] = var_10;
                    var_22 = (arr_8 [i_6] [i_5] [i_6] [i_8]);
                    arr_29 [i_0] [i_0] [i_0] [i_6] = (~var_10);
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    arr_32 [i_6] [i_6] [i_6] = (((1 ^ 0) ^ (((65535 ? -1418608338 : var_2)))));
                    var_23 = (var_6 <= var_11);
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    arr_36 [i_0] [4] [i_10] [i_5] [i_10] [i_0] |= ((((~(arr_13 [i_10] [i_0] [i_0] [i_0]))) * (var_4 > var_3)));
                    arr_37 [i_0] [i_0] [i_0] [i_0] [i_6] = (((var_6 && var_5) || (!var_4)));
                    arr_38 [i_10] [i_5] [i_6] = (arr_4 [i_6] [i_6]);
                    arr_39 [i_0] [i_10] [i_6] [i_10] &= ((var_7 / 372504248) ? (var_10 / var_8) : ((209 ? 1 : (arr_11 [i_0] [i_0] [3]))));
                    var_24 = var_4;
                }
                var_25 = ((var_4 ? 1 : (arr_19 [i_0] [i_5] [i_6] [i_6])));
            }
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                var_26 ^= ((~(arr_6 [i_11] [i_0])));
                var_27 ^= 255;
                var_28 = var_11;
                arr_42 [i_11] [i_11] [i_0] [i_0] = (((((var_7 ? var_0 : var_3))) ? var_13 : (((arr_4 [i_0] [i_11]) ? var_11 : (arr_0 [i_11])))));
                arr_43 [i_0] [i_0] [i_0] = ((2107 ? var_10 : 0));
            }

            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                arr_46 [i_0] [i_0] [i_5] [i_12] = (((((var_7 ? var_10 : var_5))) ? (((var_11 ? (arr_6 [i_0] [i_5]) : var_5))) : var_4));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        {
                            var_29 += ((~(((arr_41 [i_0] [i_5] [i_12] [i_5]) ? var_9 : 125))));
                            var_30 ^= (arr_13 [i_0] [i_5] [i_12] [i_0]);
                            var_31 |= ((var_11 ? 6564538521151517194 : ((((-2147483647 - 1) == var_11)))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    {
                        var_32 = (min(var_32, var_8));
                        var_33 = (((var_1 != 114688) ? (((arr_14 [4] [i_15]) | (arr_6 [i_0] [i_15]))) : ((var_12 ? var_5 : 4))));
                    }
                }
            }
        }
        var_34 = ((28672 * ((var_11 ? ((max(1, 245))) : var_12))));
        var_35 = ((~((~(13013725669659781105 * -106545890)))));
    }
    for (int i_17 = 0; i_17 < 14;i_17 += 1) /* same iter space */
    {
        var_36 ^= ((18446744073709551615 + ((((((var_8 ? var_13 : var_4))) ? 0 : var_0)))));
        var_37 &= max(((((64 - 0) * ((var_12 | (arr_6 [i_17] [i_17])))))), var_8);
        var_38 = (min(var_38, var_6));
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 13;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 13;i_19 += 1)
        {
            {
                var_39 = (max(var_39, ((min((((~var_9) ? ((var_7 ? var_6 : var_1)) : ((864374971 ? var_10 : 0)))), ((-((~(arr_44 [i_18]))))))))));
                var_40 = ((((min(var_2, var_11)))) ? (var_1 == 10626) : ((((var_1 ? var_12 : 0)) * var_13)));
                var_41 = (min(var_1, (max(var_5, var_2))));
                var_42 = (max(var_42, ((0 ? (max((max(var_9, (arr_27 [i_18] [i_19] [i_18]))), (864374971 % var_4))) : (min(((max(var_12, (arr_53 [i_19] [i_19] [i_18] [i_18])))), (((arr_27 [i_18] [i_19] [i_19]) + var_4))))))));
                var_43 = (max(var_43, ((((((arr_0 [i_18]) ? (arr_0 [i_18]) : 0)) - (var_10 == 248))))));
            }
        }
    }
    var_44 = var_13;
    var_45 = ((var_3 ? (min(var_1, var_3)) : (((((min(255, var_10))) ? var_6 : var_0)))));
    #pragma endscop
}
