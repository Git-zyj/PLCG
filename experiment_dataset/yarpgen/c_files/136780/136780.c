/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] [i_2] [3] [i_2] [10] [i_2 - 2] [i_2] = (((((((arr_6 [i_2]) > 8767947681072802675)))) > (((arr_14 [i_2 - 4] [i_4 - 2]) ? (arr_6 [i_2]) : 18446744073709551615))));
                                var_16 = (max(var_16, ((((arr_4 [i_0 - 2] [i_0 - 2]) ? -18446744073709551615 : (((max(1, (max(0, var_2)))))))))));
                                var_17 = (min((((arr_5 [i_0] [i_0] [i_2 + 3] [i_2]) ? var_4 : 1)), var_8));
                                arr_17 [i_0 + 2] [i_2] [i_2 + 2] [i_3] [i_2] = (((((1282 ? 193 : -642))) & (min(((var_4 ? var_13 : 0)), ((max(var_1, 1)))))));
                            }
                        }
                    }
                }
                var_18 = (max((min(((0 * (arr_10 [1] [i_1 - 2]))), -var_1)), var_13));
                var_19 = ((1 ? -86 : (1 - 648602079)));
            }
        }
    }
    var_20 = 1604914665;

    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = var_2;
        arr_23 [i_5] [i_5] = (((((max(var_3, (arr_18 [5])))) ? (min(720962138, (arr_21 [4]))) : (-5395225078215082648 || 34670))));
        arr_24 [i_5] [16] = ((((((var_5 < ((var_15 ? 557081566 : var_11)))))) / ((var_15 & (arr_18 [i_5])))));
        var_21 = ((((((var_11 ? (arr_20 [i_5] [i_5]) : var_10))) ? 30865 : var_2)));
        var_22 = (min(var_22, ((((((arr_19 [7] [i_5]) * -5300))) & (((var_13 >= 1727276858) ? ((var_5 & (arr_20 [i_5] [i_5]))) : (arr_18 [8])))))));
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
    {
        var_23 = var_7;
        var_24 = (min(var_24, (((2147483647 ? (1727276861 - -1305) : ((((arr_27 [i_6] [6]) ? (arr_27 [i_6] [14]) : (arr_27 [i_6] [0])))))))));
        var_25 ^= (max(1, (min((arr_26 [i_6]), 30882))));
        /* LoopNest 2 */
        for (int i_7 = 4; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                {
                    var_26 += ((127 ? ((~(arr_25 [12] [12]))) : (((arr_29 [i_7 - 2] [i_7 - 1]) ? (arr_29 [i_7 - 2] [i_7 - 2]) : (arr_29 [i_7 + 1] [i_7 + 1])))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_27 += ((((((((arr_37 [i_6] [i_6] [4] [i_9 + 2] [i_10 - 1]) ? 8461248508456653893 : (arr_29 [i_6] [3])))) || (((5321 ? var_7 : (arr_35 [i_6] [i_6] [i_6] [i_7] [i_8] [i_6] [1])))))) ? ((-(arr_37 [i_10] [i_6] [14] [i_7] [i_6]))) : ((((max(var_6, 1))) ? (var_9 / var_9) : (((arr_20 [10] [10]) ? var_2 : 100))))));
                                arr_38 [6] [i_6] = (((((~(min(4294967291, 57414))))) ? (((max(var_9, var_0)))) : (((min(var_7, var_8)) >> ((127 ? var_4 : (arr_35 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))))));
                                arr_39 [i_10] [i_6] [i_6] [i_6] [i_6] = (((((max(1, 1743432484))) && 84)));
                            }
                        }
                    }
                    arr_40 [i_6] [i_6] [i_6] [i_7] = -var_10;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 15;i_12 += 1)
                        {
                            {
                                var_28 = ((var_3 ? -1 : ((-((max(var_1, (arr_21 [i_12]))))))));
                                arr_45 [4] [i_8] [i_6] = (arr_31 [10] [i_6]);
                            }
                        }
                    }
                }
            }
        }
        arr_46 [0] [i_6] &= (~3);
    }
    var_29 = ((((var_2 ? ((var_9 ? var_3 : var_11)) : (min(var_1, var_5)))) & var_6));
    #pragma endscop
}
