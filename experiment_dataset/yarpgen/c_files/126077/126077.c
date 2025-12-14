/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (max(((var_5 >> (var_10 >= var_5))), (((var_1 ? (65535 < var_8) : var_1)))));
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        var_13 = ((~(((var_5 * 65525) ? (((var_11 ? (arr_1 [i_1]) : 6))) : ((64406 ? var_10 : (arr_0 [1])))))));
                        var_14 = (((var_11 ? (var_4 >= var_2) : ((((arr_0 [i_0]) < (arr_7 [i_0] [i_2] [i_2])))))));
                        var_15 = (max(((max((arr_8 [i_0] [i_1] [i_3] [i_3]), (arr_5 [i_0])))), ((-96 ? var_3 : (arr_9 [i_0] [i_1] [i_1])))));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, (arr_9 [i_1] [i_1] [i_1])));
                        arr_13 [i_2] [i_1] [i_2] = ((((((!((max((arr_6 [i_2]), 1995691175))))))) > (((~var_5) | 41109))));
                        arr_14 [i_2] [i_2] = (var_11 ^ var_7);
                        var_17 = (arr_1 [i_2]);
                    }
                    var_18 = var_11;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_19 = (max(var_19, ((((arr_16 [i_5] [i_5]) >> (((arr_12 [i_6] [i_6] [i_6] [i_6] [i_6 - 2]) + 24358)))))));
                            var_20 = (((~2572081305) || -var_3));
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            var_21 = (((((((20 ? 65509 : 6))) ? ((~(arr_0 [14]))) : (((~(arr_4 [i_9])))))) + (16898 >= 65525)));
                            arr_28 [i_7] [i_5] [i_6 + 1] [i_7] [i_7] = (arr_8 [i_0] [i_5] [i_6 - 1] [i_9]);
                            var_22 &= (!var_5);
                            arr_29 [i_5] [i_5] [i_5] [i_0] [i_9] [i_9] [i_7] = var_1;
                        }
                        var_23 = (((arr_9 [i_0] [i_5] [i_0]) & (9223372036854775785 | 59545)));
                        var_24 = ((((!(arr_4 [i_6])))));
                        var_25 = ((var_2 >> (-17 + 44)));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            {
                arr_34 [i_10] [i_10] [1] &= (((var_12 != var_2) >= (((arr_33 [1] [1] [i_11]) | (arr_33 [i_10] [3] [i_11])))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        {
                            var_26 &= (((((arr_11 [i_10] [i_10] [i_12] [i_13] [i_10] [i_12 + 1]) ? (arr_11 [i_10] [15] [1] [i_12 + 1] [i_12] [i_12 + 1]) : (arr_11 [i_10] [i_11] [i_11] [20] [i_10] [i_12 + 1]))) % (arr_11 [i_11] [i_10] [i_10] [i_13] [i_13] [i_12 + 1])));
                            var_27 = ((!(((-(arr_20 [i_10] [i_12 + 1] [i_12]))))));
                            arr_41 [i_10] [i_13] [i_12] [i_12] [4] = ((((arr_31 [i_13] [i_12]) ? var_11 : 1129)) % (~var_1));
                        }
                    }
                }
                var_28 = (max(var_28, ((((~32719) * (((1 | var_5) ? (((166 >> (65515 - 65504)))) : var_3)))))));
                var_29 = min((6 | var_11), -67);
            }
        }
    }
    var_30 = 32727;
    var_31 = var_11;
    #pragma endscop
}
