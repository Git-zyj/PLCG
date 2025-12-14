/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((!26082) ? (((var_0 ? ((var_7 ? var_9 : var_0)) : (~-561033281)))) : 2151368633);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 -= (arr_0 [18]);
        var_15 = var_5;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_16 = (max(-2171510867, 47819));
                        arr_11 [i_3] [i_3] [i_0] [i_3] = ((((926407257 ? (((arr_10 [1] [i_2]) ? 2171510867 : var_2)) : ((((!(-127 - 1))))))) & (2171510867 - -6243)));
                        arr_12 [i_0] [i_2] [i_1] [i_0] [i_0] = (min((arr_10 [i_1] [i_2]), ((~(arr_6 [i_0] [i_3])))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_17 = ((2171510867 ? 31 : -121));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_18 = var_5;
                    arr_21 [i_5] [i_4] [i_6] = ((((((arr_19 [i_5] [i_4]) > (var_8 || var_11)))) % ((978524519 ? (arr_10 [i_4] [i_4]) : (max(var_7, 31))))));
                    var_19 = (min(var_19, (((-((978524517 ? 378759434 : (arr_1 [i_4] [i_6]))))))));
                }
            }
        }
        var_20 = (min((((!(!-121)))), (arr_17 [i_4] [0] [i_4])));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_21 = (((arr_22 [i_7]) >> var_11));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {
                        arr_33 [i_7] [i_8] [i_9] [i_10] = var_5;
                        var_22 -= ((-((((max((arr_24 [i_10]), (arr_32 [i_9 - 1])))) ? (max(-17, var_10)) : (arr_31 [i_9 + 2] [i_9] [i_9] [i_9 - 1] [i_9])))));
                        arr_34 [i_10] [i_9] [i_8] [i_7] [i_7] = 3316442782;
                        var_23 *= (!var_4);

                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            arr_37 [i_8] [i_8] [i_9] [i_10] [i_11] = (max(((((((3985959765 >> (121 - 107)))) ? -64 : (-121 >= -84)))), 3487503626));
                            arr_38 [i_9] [i_7] [i_7] = (min((arr_30 [i_9] [i_9 - 1] [i_9 - 1] [i_9 + 1]), (((var_9 >= (arr_36 [i_9] [i_9] [3] [i_8] [i_9 + 1]))))));
                            arr_39 [i_7] [i_11] [i_10] [i_7] [i_9] [i_8] [i_7] = var_7;
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    {

                        for (int i_15 = 4; i_15 < 23;i_15 += 1)
                        {
                            arr_49 [i_7] [i_13] [i_7] [i_14] [i_15] [i_13] = (((arr_41 [i_7] [i_7]) < 35));
                            arr_50 [i_12] [i_13] = (((((((var_2 ? -106 : var_10)) == var_1)))));
                        }

                        for (int i_16 = 0; i_16 < 24;i_16 += 1)
                        {
                            var_24 = 110;
                            arr_53 [i_7] [14] [i_13] [i_14] [21] = ((-var_4 != (arr_42 [17] [i_12] [i_13])));
                            arr_54 [i_12] [i_12] [i_12] [i_12] [i_12] [i_13] = (((((arr_52 [i_16] [i_14] [i_13] [i_12] [i_7]) ? var_1 : (min(var_5, (arr_51 [i_16] [i_16] [i_14] [i_13] [i_12] [i_7]))))) >= -588741371));
                        }
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            arr_58 [i_13] [i_12] [i_12] [17] [i_12] [i_13] = (-(min(var_6, -84)));
                            arr_59 [i_13] [i_13] [i_17] = (min(7337739204913429704, (min((18343377472120681816 * var_12), ((((arr_46 [4] [11] [i_13] [i_7] [12]) && 978524525)))))));
                            var_25 = 1706014708;
                        }
                        arr_60 [i_7] [i_12] [i_13] [i_13] [i_14] = 807463669;
                    }
                }
            }
        }
    }
    #pragma endscop
}
