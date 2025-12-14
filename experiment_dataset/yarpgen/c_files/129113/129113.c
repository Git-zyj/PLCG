/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_11 += (max(((((arr_0 [i_0 + 1] [i_0 + 1]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0 + 1])))), 16178507925881458041));
        var_12 = var_5;
        var_13 &= (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_14 = ((((max(((var_2 ? (arr_3 [i_1] [i_1]) : (arr_4 [i_1]))), -2133116764550501744))) ? (((((arr_4 [i_1]) && (arr_5 [i_1]))) ? ((247 ? 8030928744427423199 : var_6)) : (((var_4 ? (arr_5 [i_1]) : var_2))))) : (arr_5 [i_1])));
        arr_6 [i_1] &= ((-2133116764550501761 ? -2133116764550501744 : 12813));
        var_15 = (min(var_15, (arr_5 [i_1])));
    }

    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_16 |= var_9;
        var_17 += (max((arr_8 [i_2 + 3] [i_2 + 1]), ((var_8 / (arr_8 [i_2 - 1] [i_2 + 2])))));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 8;i_3 += 1)
    {
        var_18 = 16178507925881458027;
        var_19 = (min(var_19, (arr_10 [i_3 + 1])));
        var_20 = (max(var_20, ((((arr_2 [i_3]) >= 16178507925881458041)))));
        arr_12 [i_3] = -1;

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_21 *= (((((arr_0 [i_4] [i_3]) != (arr_10 [i_3]))) ? (arr_7 [i_3]) : (~21226)));
                var_22 ^= ((((((arr_18 [i_3] [i_3] [i_3]) ? var_8 : (arr_4 [i_3])))) ? (arr_17 [i_3] [i_4] [7]) : (((arr_4 [i_4]) ? 16178507925881458015 : (arr_14 [i_3] [i_3 - 2])))));
                var_23 ^= var_2;
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_24 |= var_0;
                            var_25 = var_6;
                            arr_25 [i_7] = (((arr_16 [i_3 - 1] [i_3 - 1]) ? (((arr_24 [i_3] [i_3] [i_5] [i_7] [i_7]) ? var_7 : (arr_20 [i_3 + 1] [i_3 + 1] [i_5] [i_6]))) : (arr_9 [i_3])));
                        }
                    }
                }
                arr_26 [0] [i_4] [i_5] [i_5] = (var_9 ? (arr_13 [i_4] [i_3]) : 1);
            }
            var_26 += (((arr_14 [i_3] [i_4]) ? (arr_11 [i_3 + 3]) : (arr_22 [i_3] [i_3 - 1] [i_3 - 1])));
            var_27 *= ((~(44305 ^ 54871)));
            var_28 = ((1192519306 ? (arr_22 [i_3] [i_4] [i_4]) : ((-2133116764550501758 ? 32768 : 10646))));
        }
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            var_29 = (max(var_29, (-2133116764550501742 & 21)));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 10;i_10 += 1)
                {
                    {

                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            var_30 = (min(var_30, (((arr_1 [i_9]) ? (arr_17 [i_3] [i_8] [i_10 + 1]) : var_1))));
                            var_31 = (min(var_31, ((var_5 ? (201 != var_8) : 36406))));
                            var_32 = var_8;
                        }
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            var_33 = -65535;
                            var_34 += (arr_18 [i_10 - 1] [i_9] [i_8]);
                            var_35 -= -var_2;
                        }
                        for (int i_13 = 1; i_13 < 10;i_13 += 1)
                        {
                            arr_45 [i_9] [i_13] &= var_8;
                            var_36 = ((var_2 - (arr_19 [i_3 + 3] [i_3 + 3])));
                            var_37 += ((var_4 + (arr_14 [i_13 - 1] [i_10 + 1])));
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_38 = (arr_28 [i_8 - 1] [i_8 - 1] [i_14]);
                            arr_48 [i_10] [3] = (((arr_28 [i_3 - 3] [i_8 + 1] [i_8 + 1]) & (arr_29 [i_3 + 2] [i_10] [i_14])));
                        }
                        var_39 = arr_41 [i_3] [i_3 - 1] [i_3] [i_3] [i_3];
                        var_40 = (arr_15 [i_3 - 4] [i_3 - 4]);
                        var_41 = (max(var_41, var_10));
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            arr_53 [i_15] [i_15] = (((arr_7 [i_3 - 4]) ? (arr_42 [i_15] [i_3] [i_3] [i_3]) : var_6));
            var_42 = arr_51 [i_3] [i_3];
        }
    }
    for (int i_16 = 0; i_16 < 22;i_16 += 1)
    {
        var_43 = (arr_54 [i_16]);
        var_44 += (((arr_54 [i_16]) ? (!var_5) : ((max((arr_54 [i_16]), (arr_55 [i_16]))))));
        var_45 = ((((((120 ? var_9 : 12802))) ? (arr_54 [i_16]) : var_0)));
        arr_56 [i_16] [i_16] = 127;
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 25;i_17 += 1)
    {
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 25;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 25;i_19 += 1)
            {
                {
                    var_46 = (((arr_60 [i_18] [i_19]) ? (arr_62 [7] [4] [i_19]) : var_2));
                    var_47 = (max(var_47, 33613));
                }
            }
        }
        var_48 &= ((((arr_57 [1] [i_17]) + var_1)));
    }
    var_49 |= (min(((min((var_9 * var_5), var_5))), (((((var_3 >> (var_1 - 13341090227339116197)))) ? var_2 : -var_0))));
    var_50 = (max(var_50, var_9));
    #pragma endscop
}
