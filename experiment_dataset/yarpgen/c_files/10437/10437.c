/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (max(var_16, 19615));
        var_17 *= (max((((!((((arr_1 [i_0]) ? var_10 : (arr_1 [i_0]))))))), (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = (((((arr_3 [i_1] [i_1 - 1] [i_1]) % (arr_3 [i_1] [i_1 + 3] [i_1 + 3]))) >> (15 && var_2)));
                    var_19 = (min(var_19, ((((!(arr_1 [i_1 + 4]))) || ((((arr_3 [i_1 + 2] [i_1 + 1] [i_1]) ? (arr_3 [i_1 + 3] [i_1 + 1] [i_1]) : (arr_1 [i_1 + 3]))))))));
                }
            }
        }
        var_20 = (min(var_20, ((((((arr_1 [0]) ^ ((((arr_6 [i_0] [i_0]) ^ (arr_3 [i_0] [i_0] [i_0])))))) & (~var_7))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_21 = (min(var_21, (((((((arr_9 [i_3]) | 127))) ? (((arr_9 [i_3]) & var_0)) : ((~(arr_9 [i_3]))))))));
        var_22 = (max(var_22, (arr_6 [i_3] [i_3])));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_23 = (((((((var_15 ? var_2 : var_15))) * ((var_12 ? var_3 : (arr_10 [i_4] [0] [5]))))) <= ((min(var_11, (arr_7 [i_3]))))));

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_24 = var_0;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_25 = ((((min((arr_6 [i_3] [i_4]), 262144))) | -var_5));
                            arr_18 [i_3] [i_3] [i_3] [i_4] [i_3] [9] = (((4294705155 | -1073741824) && ((((arr_4 [i_5] [i_7]) ? (arr_14 [i_3] [1] [i_5] [i_6] [i_7]) : (!var_10))))));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_26 = (min(var_26, ((((max((arr_15 [i_8]), (max(52815, var_6))))) % ((((((var_7 ? (arr_14 [i_3] [i_8] [1] [1] [i_11]) : (arr_24 [i_11] [1])))) && (arr_9 [i_3]))))))));
                            var_27 = (arr_3 [i_10] [i_8] [i_8]);
                            var_28 = var_3;
                        }
                    }
                }
            }
            var_29 = (max(var_29, (((((arr_11 [i_3]) ? (((arr_9 [i_3]) << (((arr_6 [i_3] [i_8]) + 54)))) : var_3))))));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        {
                            var_30 = var_14;
                            var_31 = (((-(arr_5 [i_3] [i_8] [i_12] [i_14]))) % (var_4 && var_10));
                        }
                    }
                }
            }
        }
        arr_38 [i_3] = ((((((32767 % 10963639223237582636) ? (3542442845 - var_13) : (var_7 && var_5)))) ? ((((((var_1 >> (var_5 + 5288466756578243847)))) ? ((var_7 >> (((arr_16 [4] [8] [0] [i_3] [i_3] [i_3] [i_3]) - 1268578868)))) : (var_0 == -470525755)))) : (arr_37 [i_3])));
        arr_39 [i_3] = ((min(((var_11 ? var_9 : var_0)), (!var_6))));
    }

    for (int i_15 = 2; i_15 < 16;i_15 += 1)
    {
        var_32 = ((((((max((arr_41 [i_15]), (arr_41 [i_15]))))) / ((var_9 ? var_14 : var_13)))) < (arr_40 [i_15 + 1]));
        arr_42 [i_15] [i_15] = ((((((arr_41 [i_15 + 1]) ^ var_2))) ? ((max((min(var_8, 15)), (arr_41 [i_15])))) : (((537298490 <= (arr_40 [i_15 - 2]))))));
        var_33 = (max(var_33, ((((!(var_5 & var_4)))))));
        var_34 = ((((var_9 * var_2) || (242 >= var_10))));
    }
    for (int i_16 = 0; i_16 < 17;i_16 += 1)
    {
        arr_46 [0] [i_16] = ((((0 * 1) & var_7)));
        var_35 = (max(var_35, ((((3136 >= 52812) < (((arr_45 [i_16] [i_16]) + (arr_45 [i_16] [i_16]))))))));
        var_36 = (min((arr_41 [i_16]), (((var_3 + var_8) / (((62385 << (4294705151 - 4294705146))))))));
    }
    var_37 = (min(var_37, -var_7));
    #pragma endscop
}
