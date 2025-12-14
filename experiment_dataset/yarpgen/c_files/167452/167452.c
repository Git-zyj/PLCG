/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 ^= (~(var_8 != var_16));
        arr_2 [i_0] = (~var_17);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1] = ((((2526561789 << (99 - 75))) >= (var_14 == 6963347319298146381)));
        var_19 = ((-(((var_2 ? var_3 : var_15)))));
        var_20 = ((var_6 ^ (((!var_5) / (8618 | 127)))));
        arr_7 [i_1] [5] = var_8;
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_19 [0] [i_4] [i_3 - 1] [i_2] = ((var_16 ? var_16 : ((var_9 ? var_2 : var_14))));

                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            arr_24 [9] [i_4] = (~var_10);
                            var_21 *= ((26815 ? 0 : -1534995351));
                        }
                        for (int i_7 = 3; i_7 < 21;i_7 += 1)
                        {
                            var_22 = ((-var_8 ^ (var_5 * var_14)));
                            arr_28 [i_2] [i_7] [6] [i_5 - 1] [i_7] = (!var_1);
                            var_23 = (var_15 ? var_9 : var_11);
                            arr_29 [i_2 + 2] [i_2] [i_7] [i_2] [10] [i_2 - 2] [i_2 - 1] = (((((var_1 ? var_5 : var_6))) ? (~var_17) : (var_17 + var_6)));
                        }
                        for (int i_8 = 2; i_8 < 23;i_8 += 1)
                        {
                            arr_32 [i_8 - 2] [i_3] [i_2] [i_4] [i_2] [i_3] [i_2] &= 53291;
                            var_24 = (~(var_12 != var_8));
                            var_25 = (((var_15 + var_5) != var_15));
                        }
                        for (int i_9 = 4; i_9 < 22;i_9 += 1)
                        {
                            var_26 = (((107 && 2403640627493143079) >> (8844717408993111500 - 8844717408993111471)));
                            arr_35 [i_2 - 2] [i_2 - 2] [15] [i_4 - 2] [i_2 - 2] [5] = var_3;
                            var_27 |= (!var_15);
                        }

                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            arr_40 [14] [15] [i_4] [14] [14] = (!var_1);
                            arr_41 [4] [i_3 - 1] [i_3 - 1] [i_5] [i_3 - 1] = (((var_17 + 9223372036854775807) << (-var_16 - 6660938546036851212)));
                        }
                        for (int i_11 = 4; i_11 < 20;i_11 += 1)
                        {
                            arr_44 [12] [i_5] [16] [i_2] [i_2] [i_2] [i_2] |= ((((-3296638901072814727 ? 70368727400448 : -124)) >= var_1));
                            arr_45 [i_5] [i_3 + 2] [i_3 + 2] [i_5] [i_11] = var_5;
                        }
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            var_28 = ((~(~1481548108443643676)));
                            var_29 |= (--0);
                            var_30 = (((var_0 || var_15) <= ((var_3 ? var_4 : var_9))));
                            arr_48 [20] [i_3] [i_3] [i_4] [19] [i_12] = ((var_7 ? var_2 : (var_10 >= var_12)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    {
                        arr_53 [15] [i_2] [i_14] = (!var_4);
                        arr_54 [7] [22] [1] [11] [i_3] [i_3] = (var_17 || var_10);
                    }
                }
            }
            var_31 = (((((var_4 ? var_15 : var_11))) ? ((-1528303851 ? 3924148046268279617 : 1)) : (((12233 << (53055 - 53050))))));
        }
        arr_55 [i_2] = -var_8;
        var_32 -= (max(53309, (((!(~-108))))));
    }
    var_33 -= ((((((!(-9223372036854775807 - 1))))) ^ var_13));

    for (int i_15 = 0; i_15 < 20;i_15 += 1)
    {
        arr_58 [i_15] = (((((var_13 & (7694 ^ -15)))) / ((-var_0 ? (~var_5) : (var_4 - var_14)))));
        var_34 = var_11;
    }
    #pragma endscop
}
