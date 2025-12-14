/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_14 *= (((((-(var_7 > var_4)))) ? var_12 : var_5));

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_15 = (min(var_15, var_1));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_16 = ((min(var_2, var_13)));
                        var_17 = ((((-(var_12 == var_5)))) ? ((var_1 ? (var_6 || var_11) : var_9)) : var_9);
                        arr_14 [i_1] [i_3] [i_1] [i_1] [i_0] = (!-var_9);
                        arr_15 [i_1] [i_1] [i_2] [i_3] [i_1] = (var_7 >> ((((var_12 ? var_9 : var_0)) - 10830336946780677099)));
                        arr_16 [i_1] [i_1] [0] [i_1] = max((min(var_3, var_0)), (max(var_10, (((var_3 ? var_9 : var_8))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    {
                        var_18 = (min(var_18, ((((((var_12 ? var_3 : var_5))) ? var_11 : ((var_13 ? var_8 : var_3)))))));
                        arr_25 [i_0 + 1] [i_4] [9] [i_6] = (~var_1);
                        var_19 = var_5;
                        arr_26 [i_0] [i_0] [i_5] [i_5] [i_4] = (var_1 > var_0);
                    }
                }
            }
            var_20 = (var_11 >= var_13);
            arr_27 [i_0 + 1] [i_4] = var_12;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
        {
            var_21 = (min(var_21, -var_7));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        arr_35 [i_0 - 1] [i_0 - 1] [i_8] [i_9] = ((var_11 ? ((var_2 ? var_6 : var_7)) : (~var_2)));
                        var_22 &= (var_0 * var_13);
                        arr_36 [i_0] [i_7] = (((var_7 & var_6) ? var_8 : ((var_5 >> (var_10 - 2880403506929719243)))));
                    }
                }
            }
        }
        arr_37 [i_0] [i_0 - 1] = (((var_5 ? var_7 : var_8)));
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        arr_41 [i_10] = var_2;
        var_23 = (min(var_23, -67));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 10;i_13 += 1)
                {
                    {
                        arr_51 [i_10] [2] [i_10] [i_10] = (max((((((var_7 ? var_1 : var_9))) ? var_7 : (var_13 >= var_4))), ((((~var_4) < var_7)))));
                        var_24 ^= ((((min((var_1 || var_4), var_11))) ? (var_6 && var_0) : (((min(var_10, var_9))))));
                        var_25 = ((~((((var_13 ? var_6 : var_0))))));
                        var_26 *= ((~var_5) | (var_0 >= var_1));
                        var_27 -= (((var_11 & var_9) ? (max(((var_12 ? var_0 : var_1)), (((-3231828747143553850 ? 247 : 3512281119))))) : ((var_5 ? var_7 : ((var_7 ? var_0 : var_1))))));
                    }
                }
            }
        }
        arr_52 [i_10] = (var_7 - (~18446744073709551602));
    }
    for (int i_14 = 0; i_14 < 19;i_14 += 1)
    {
        arr_55 [i_14] [0] = (((-8796404271996809417 ? 262128 : 23)));
        var_28 = var_3;
        arr_56 [i_14] = (((var_0 && var_4) && ((((!var_4) ? var_2 : (max(-1, -4812940412133016109)))))));
    }
    var_29 = ((((min(var_2, -var_11))) ? (((var_0 ? var_13 : var_0))) : -295));
    var_30 = ((~((var_0 ? var_9 : var_1))));
    var_31 = ((((((var_8 ? var_4 : var_7)) & (!var_10))) >> ((((var_10 ? ((var_0 ? var_2 : var_11)) : var_5)) - 7024693457329608961))));
    #pragma endscop
}
