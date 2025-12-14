/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((-0 ? var_13 : (9015 | 9036))), 1571456720));
    var_21 = ((~(max(var_14, 9008))));
    var_22 = (min(var_22, var_17));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_23 = (arr_0 [i_0]);

        for (int i_1 = 4; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_24 = (((25700 & 8) | ((max((((-9223372036854775791 <= (arr_1 [8])))), 9015)))));
            var_25 = var_8;
            var_26 = 2;
            var_27 = (min(var_27, (((var_10 || (((~(arr_2 [i_1 + 1])))))))));
        }
        for (int i_2 = 4; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_28 = (max(-var_14, var_16));
            arr_10 [i_0] [i_2] [i_0] = ((((max(var_13, var_0))) ? var_6 : (((arr_0 [6]) ? (arr_3 [1]) : 2218567533))));
            arr_11 [i_0] [i_2] = var_10;

            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                arr_14 [i_2] = ((((-((var_0 ? 9009 : var_16)))) - ((~((max((arr_6 [i_2]), 0)))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_29 &= var_7;
                            var_30 = min((((arr_4 [i_2 - 1]) & 56486)), (~-25716));
                            var_31 = 56478;
                        }
                    }
                }
            }
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                var_32 = 16704;
                var_33 = (((((65534 >> (((min(2076399762, 2076399770)) - 2076399737))))) ? (((!(!22)))) : (arr_6 [i_2])));
                arr_22 [i_2] = var_8;
                arr_23 [i_2] [i_2 - 1] [i_2] = ((((!((((arr_13 [8] [i_2] [i_2] [i_2]) - var_4))))) && (((9036 % (((var_6 + 2147483647) >> (-32675 + 32677))))))));
                var_34 = ((((!(89 > var_19))) ? (min(((min(var_16, 25713))), (2218567526 / var_18))) : 2682285053));
            }
            var_35 = ((56479 ? -4096 : 9040));
        }
        for (int i_7 = 4; i_7 < 13;i_7 += 1) /* same iter space */
        {
            arr_27 [i_7] [i_7] = (((max(((min(var_6, (arr_0 [i_7])))), (((arr_0 [i_7 - 3]) ? (arr_1 [7]) : 56473))))) ? (((((min(2987064921, var_16)) != (((max((arr_3 [i_0]), var_6)))))))) : (min(56520, ((-1 - (arr_7 [i_7] [i_7 - 4] [i_7]))))));

            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_38 [i_7 - 2] [i_9] [i_0] [i_8] [6] &= (min(-1413844566, (arr_32 [i_8 + 1] [i_8 + 1] [i_8] [i_8] [i_8 + 1])));
                        var_36 = (arr_24 [i_7] [i_7 + 1] [i_8]);
                        var_37 = ((~(max(((min((arr_18 [i_7] [i_7] [i_7 - 1] [i_7 + 1] [i_7] [i_7 - 3] [i_7]), var_5))), (min(var_3, 65535))))));
                    }
                    var_38 *= (min((arr_20 [i_8 - 1] [i_8 + 1]), -2076399753));
                    arr_39 [i_7] [i_7 - 4] [i_7] [i_7] [i_7] [i_7 - 1] = (max(56495, 0));
                }
                var_39 = 1;
                arr_40 [i_7] [i_7 - 4] [i_8] = (~0);
                var_40 = ((-((((min(var_11, var_4))) ? var_8 : (arr_18 [i_8 + 1] [i_8 + 1] [i_8] [7] [i_8] [4] [i_8 + 1])))));
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    {
                        arr_49 [i_12] [0] [i_12] [i_12] [i_12] [i_12] = 56479;

                        for (int i_15 = 0; i_15 < 13;i_15 += 1)
                        {
                            var_41 = ((2076399774 ? (arr_45 [i_15]) : var_12));
                            var_42 = (min(var_42, (((9040 ? 1023 : -68)))));
                        }
                    }
                }
            }
        }
        arr_52 [i_11] = (arr_46 [i_11] [i_11]);
    }
    for (int i_16 = 0; i_16 < 13;i_16 += 1)
    {
        var_43 = ((((((!9038) ? ((var_19 ? 2076399774 : var_19)) : (-25723 != 25723)))) ? (((((min(var_3, var_0))) || (arr_55 [i_16])))) : -var_9));
        arr_57 [i_16] = ((((((((max(var_16, 32669)))) > var_14))) < (((!((min((arr_43 [i_16]), var_6))))))));
    }
    var_44 = 2218567533;
    #pragma endscop
}
