/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_9);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] = (-(arr_1 [i_0 + 3]));
                    var_17 = var_11;
                    arr_9 [i_0] = ((var_13 ? (((((((((-127 - 1) + 2147483647)) >> (-122 + 127)))) ? (arr_5 [i_0 - 2]) : (arr_0 [i_0] [i_0])))) : (arr_1 [i_0])));
                }
            }
        }
    }
    var_18 += ((((min(var_6, var_8)) & -var_7)) != var_10);

    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        var_19 = ((~(((min(117, 1))))));
        var_20 = (((((((114 ? 0 : var_10)) ^ (arr_11 [i_3])))) ? ((((arr_12 [i_3 + 1]) >> (((arr_12 [i_3 - 1]) - 75))))) : ((-125 ? (max(5109600166181166890, var_4)) : (!13337143907528384725)))));
        var_21 = ((-106 % (arr_12 [i_3 + 1])));
        var_22 = (max((max(var_12, 26494)), (arr_12 [i_3])));
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    {
                        var_23 = (min(var_23, (((((((var_1 & 16171865072097861170) ? ((((var_10 + 2147483647) >> (((arr_14 [i_4] [i_4]) + 9354))))) : (min(3454766520595764104, (arr_13 [i_6] [i_4])))))) != ((-(arr_16 [i_3] [i_4] [i_5]))))))));
                        var_24 = var_12;
                        var_25 = (1 ? 13337143907528384747 : var_11);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_26 = ((~(((arr_1 [i_7]) ? (arr_7 [i_7] [i_7] [i_7] [i_7]) : 2134076201))));

        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            var_27 = ((9205357638345293824 < ((((arr_15 [i_7]) ? 65516 : (arr_5 [i_7]))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    {
                        var_28 = var_10;

                        for (int i_11 = 2; i_11 < 13;i_11 += 1)
                        {
                            var_29 = (arr_27 [i_7] [i_8] [i_9] [i_9] [i_11]);
                            var_30 &= (!2848550124);
                            arr_31 [i_8] [i_8] = var_3;
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_31 -= (~-1);
                            var_32 = var_7;
                            var_33 = arr_4 [i_7] [i_7];
                        }
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            var_34 = (min(var_34, (arr_19 [i_13])));
            var_35 *= ((!(164655871 * 0)));
            var_36 = var_0;
        }
        for (int i_14 = 0; i_14 < 0;i_14 += 1)
        {
            var_37 = -370302848;
            var_38 = ((((((arr_37 [i_14] [i_7] [i_7]) ^ (arr_30 [i_14] [i_14] [i_7] [i_7] [i_7] [i_7] [i_7])))) ? (!1) : var_9));
            arr_40 [i_7] = ((!(arr_5 [i_14])));
            arr_41 [i_7] [i_7] = (1 != 7);
            var_39 = (arr_4 [i_7] [i_7]);
        }
        arr_42 [i_7] = (arr_14 [i_7] [i_7]);
        arr_43 [i_7] = 1;

        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            arr_48 [i_7] [i_7] = (arr_26 [i_7] [i_15] [i_15] [i_15]);
            var_40 = (((arr_17 [i_15] [i_15] [i_15] [i_7] [i_7]) / -126));
            var_41 = ((-10048 ? 21959 : 171));
            var_42 -= var_5;
        }
    }
    var_43 ^= var_14;
    #pragma endscop
}
