/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = var_16;
        arr_3 [i_0] = ((((max((arr_2 [i_0]), (arr_2 [i_0])))) ? (max((arr_2 [i_0]), 480024536)) : (min((arr_2 [i_0]), 443689405))));
        var_20 = ((var_9 && (var_5 > var_16)));
        var_21 -= ((((!((min((arr_2 [i_0]), (arr_0 [i_0])))))) || (arr_0 [i_0])));
        var_22 -= (((((arr_0 [i_0]) || 18446744073709551615)) ? (!1071972046) : (var_13 && var_14)));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_23 = var_15;
            var_24 = (max(var_24, (arr_4 [i_1])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_25 = (max(var_25, var_7));
            var_26 = ((var_4 && ((((arr_10 [i_1]) ? (arr_9 [i_3] [i_3]) : var_17)))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_27 = var_10;
            var_28 = ((((!(arr_4 [i_1 + 2]))) ? ((27773 ? -1 : 3222995249)) : (((~(arr_8 [i_1 + 4] [i_1 + 1]))))));
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 23;i_6 += 1)
            {
                {
                    var_29 = ((((2995909746 ? ((53 ? 5384548317781016250 : 17351416407284066239)) : 1299057549))) && 19974);
                    var_30 = (arr_11 [i_1] [i_5]);
                    arr_20 [i_1] [i_5 - 1] [i_5] [i_6 + 1] = (((((arr_12 [i_5 + 2] [i_5 + 2] [i_5]) ? var_14 : (min(var_17, (arr_9 [i_5] [i_6]))))) <= (((((min(0, 90))) ^ (((!(arr_13 [i_6])))))))));
                    var_31 = (min(var_31, (((!((((arr_9 [24] [i_5 + 1]) ? 255 : var_11))))))));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 15;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_32 = var_11;
                                var_33 = var_4;
                                arr_33 [i_8] [i_8] = (((234 ? var_14 : (arr_28 [i_11] [i_11] [i_9 + 1] [i_7]))));
                            }
                        }
                    }
                    arr_34 [i_7] [i_8] [i_9] |= var_5;
                }
            }
        }
        var_34 = (((((524287 ? (arr_5 [i_7]) : (arr_5 [i_7])))) <= (min((arr_5 [i_7]), var_14))));
        var_35 = var_10;
        var_36 ^= -45;
    }
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        var_37 |= (((arr_36 [i_12] [i_12]) + var_8));
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 22;i_15 += 1)
                {
                    {
                        arr_49 [i_12] [i_12] [i_12] [i_13] [i_12] [i_12] = (((((var_16 ? 18446744073709551615 : var_3))) ? ((((min(4294967295, 4294443024))) ? -249 : var_9)) : (!268435455)));
                        arr_50 [i_12] [i_13] [i_12] [i_15 + 2] = ((648278953 / (arr_48 [i_12] [i_13] [i_15 + 2] [i_15])));
                        arr_51 [i_14] [i_14] [i_12] [i_14] [i_14] = ((((((!-30273) ? var_12 : var_13))) ? (((!((((arr_39 [i_12] [i_14] [i_12]) ? var_5 : var_14)))))) : (arr_37 [i_13] [i_12])));
                    }
                }
            }
        }
        var_38 = ((!((min((((var_17 ? (arr_15 [i_12]) : var_9))), (~var_13))))));
        /* LoopNest 3 */
        for (int i_16 = 3; i_16 < 22;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 25;i_18 += 1)
                {
                    {
                        arr_61 [i_18] [i_17] [i_12] [i_12] [i_16] [i_12] = (min((arr_46 [i_18] [i_12]), (((184 & (arr_19 [i_12] [i_12] [i_18]))))));
                        arr_62 [i_12] [i_12] [i_16] [i_17] [i_17] [i_12] = ((~(((min((arr_57 [i_12] [i_16 + 1] [i_17] [i_17]), (arr_53 [i_12] [i_12] [i_12]))) & (~var_6)))));
                    }
                }
            }
        }
        arr_63 [14] |= (var_8 <= var_4);
    }
    var_39 = var_4;
    #pragma endscop
}
