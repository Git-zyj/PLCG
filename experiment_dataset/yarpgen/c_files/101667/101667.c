/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!(!var_15)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [4] [i_0] = ((+(((0 && 193) ? (min(67108863, 246)) : -67108864))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_0] [i_0] [i_1] [i_0] [i_0] = (min((((204 ? 63 : 181))), ((0 ? 0 : ((~(arr_0 [i_0] [i_1])))))));
                            var_20 = ((193 ? (1 % var_2) : (((arr_1 [i_0 - 2]) ? 1 : 2004979244))));

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_21 = (min(var_21, (((var_13 ? ((((!(arr_1 [i_0]))))) : 14185546742143118097)))));
                                arr_13 [i_0] [i_1] [i_2] [3] [i_0] = (((((-(~53520)))) ? var_14 : 67108863));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        var_22 = (((var_14 ? (arr_14 [i_5 + 2] [i_5]) : (arr_15 [i_5 + 3]))));

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_23 = (((-559756390 ? 2004979244 : 559756389)));
            arr_20 [i_5] [i_6] [i_6] = 2004979252;
            arr_21 [i_6] = ((67108866 + ((-(-67108850 + 2421534268)))));
        }
        for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
        {
            var_24 = arr_18 [i_7];
            arr_25 [i_5] = (~136);
            arr_26 [i_7 - 1] [i_5] [i_5] = -5397495176408912218;
            arr_27 [i_7] = (max(var_3, ((max(var_17, (558815782319394174 != 239))))));
        }
        for (int i_8 = 2; i_8 < 13;i_8 += 1) /* same iter space */
        {
            arr_30 [i_5 - 2] = -285085220;
            var_25 = var_16;
            var_26 &= (-1965528249 + 255);
            var_27 = ((~(((57761 || 559756389) ? 147 : 1827214629))));
            var_28 -= (~var_0);
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 13;i_9 += 1) /* same iter space */
        {
            var_29 ^= (arr_23 [i_5 + 4]);

            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                var_30 &= (arr_15 [i_5 + 2]);

                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    arr_39 [11] [i_10] = ((arr_22 [i_5 + 2]) && -559756390);
                    var_31 = (min(var_31, (arr_22 [i_11])));
                }
            }
            var_32 = (min(var_32, (arr_31 [i_5 + 1] [i_9 + 1])));
        }
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    {
                        var_33 = (min((arr_41 [i_5 + 1] [4]), var_8));
                        var_34 = (min((((arr_35 [i_5 - 2] [i_5 - 1]) ? (arr_35 [i_5] [i_5 - 1]) : (arr_35 [i_5] [i_5 - 1]))), (-67108839 - -49)));
                    }
                }
            }
        }
    }
    for (int i_15 = 1; i_15 < 16;i_15 += 1)
    {
        var_35 = (!var_4);
        var_36 = ((63 ? 15902566545873137206 : 2668611664));
        var_37 = (min(var_37, (((~(((arr_48 [i_15 + 2]) ? (min(25957, -1859630915)) : (arr_47 [i_15 + 2]))))))));
        var_38 += (arr_47 [i_15]);
    }
    for (int i_16 = 0; i_16 < 14;i_16 += 1)
    {
        var_39 &= 80;

        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            var_40 -= var_10;
            var_41 += var_16;
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 14;i_18 += 1)
        {
            var_42 = (arr_34 [i_16] [13] [i_18] [i_18]);
            var_43 = (max(var_43, (((((((arr_42 [i_16] [5]) | (arr_49 [i_18])))) ? (arr_24 [i_18] [i_16]) : ((2817152830 ? -109 : (arr_42 [i_16] [i_18]))))))));
            arr_59 [i_16] = var_11;
            arr_60 [i_18] [i_18] |= (arr_29 [i_18]);
        }
        arr_61 [i_16] = 93;
    }
    #pragma endscop
}
