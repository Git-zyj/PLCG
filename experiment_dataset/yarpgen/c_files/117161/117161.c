/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_13 ? var_4 : (~-75)))) || var_4));
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (!var_5)));
                var_22 = (arr_2 [i_0]);
            }
        }
    }

    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        var_23 = (min((min(var_9, (~var_2))), 25916));
                        var_24 ^= (max(((max(8, 56193))), ((var_1 ? (arr_9 [i_2 - 1]) : (arr_6 [i_2 + 1] [i_2 - 1])))));
                        var_25 = (min(-var_0, 7));
                        arr_16 [i_2] [i_3] [i_3] [i_5] [i_2] = (849646106 | 65535);
                    }
                }
            }
        }

        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            var_26 = (max(var_26, var_10));
            var_27 = (min(var_27, (((((!(!-77))) || ((!(arr_9 [i_2]))))))));
            var_28 -= (((((var_6 && (arr_18 [14])))) - (((((7294240896880013209 ? var_14 : (arr_17 [i_6 + 2] [i_2] [i_2])))) ? (arr_7 [i_2]) : (~106)))));
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            arr_23 [i_2 + 1] [i_2 + 1] [i_2] = 30608;
            arr_24 [i_2] [i_7] [i_2] = var_9;
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        var_29 ^= (((((var_9 == -114) ? (arr_10 [i_2]) : (arr_19 [i_8 - 1] [i_8 + 3]))) % (arr_19 [0] [i_2])));

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_30 = (max(var_30, var_2));
                            var_31 = 1;
                            var_32 = (9343 >= -14376);
                            arr_32 [8] [i_7] [10] [i_7] [5] [i_2] [i_2] = (((((-114 ? (-32767 - 1) : 9627))) && (((((((-74 + 2147483647) << (((-16 + 40) - 24))))) | ((var_3 ? (arr_17 [i_8 + 3] [6] [i_2]) : var_1)))))));
                        }
                    }
                }
            }
            arr_33 [i_7] [i_7] [i_7] = (~18682);
            var_33 = (max(var_33, (arr_31 [i_2] [9] [i_2])));
        }
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            var_34 -= arr_11 [i_2] [i_2] [i_2] [i_2];
            arr_37 [i_11] [i_11] [i_11] = ((var_14 << (-15493864264941437755 - 2952879808768113840)));
            arr_38 [i_2] = (min(3912219676, (min(32763, 2146959360))));
        }
        arr_39 [i_2] = ((~(min((arr_28 [i_2 - 1] [i_2 + 1]), (arr_28 [i_2 - 1] [i_2 - 1])))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 15;i_13 += 1)
            {
                {
                    var_35 = (max(var_35, ((((212 < 103) | 1)))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            {
                                var_36 = (max(var_36, (((((min(113, 255))) >> ((((var_15 ? -1634478312 : ((var_9 ? (arr_8 [i_2] [i_2] [i_15]) : 10)))) + 1634478343)))))));
                                var_37 ^= -114;
                            }
                        }
                    }
                    var_38 = var_14;
                }
            }
        }
    }
    for (int i_16 = 3; i_16 < 17;i_16 += 1)
    {
        var_39 = ((~(arr_49 [i_16])));
        var_40 ^= (arr_51 [i_16]);
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                {
                    arr_59 [i_16] [i_18] [i_16] = (min(var_0, (arr_52 [i_16 + 1] [i_16])));
                    var_41 -= (min((min((arr_50 [i_16 + 3]), (arr_50 [i_16 + 2]))), (((!(!var_14))))));

                    /* vectorizable */
                    for (int i_19 = 1; i_19 < 1;i_19 += 1)
                    {
                        arr_64 [i_16] [i_18] [i_16] [i_18] [i_16] = (arr_61 [i_16 + 1] [i_16] [i_16 - 2] [i_16 - 1] [i_16 - 3] [i_19 - 1]);
                        arr_65 [i_16] [i_16] [17] [i_18] = (arr_49 [i_19 - 1]);
                    }
                }
            }
        }
        arr_66 [2] [2] &= 382747620;
    }
    for (int i_20 = 0; i_20 < 24;i_20 += 1)
    {
        var_42 = (min(var_42, ((((arr_69 [i_20]) + (855531598 / 122))))));
        var_43 = (max(var_43, 24292));
    }
    var_44 ^= (((((var_8 ^ 4) ? var_13 : var_18)) - 934051863));
    #pragma endscop
}
