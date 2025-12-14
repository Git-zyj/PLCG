/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_20 = 1;
                        var_21 = (max((((!(((var_5 ? var_9 : var_17)))))), 127));
                        var_22 = (((arr_0 [i_0] [i_0]) ? var_0 : (arr_9 [i_2] [i_2 + 1] [i_2 + 1] [i_2])));
                    }
                    arr_11 [i_2] [i_0] [i_0] [i_0] = ((((!(arr_0 [i_0] [i_1 + 1]))) ? (min(((var_6 | (arr_4 [i_0]))), (arr_3 [i_0] [i_0] [6]))) : (((arr_4 [i_0]) ? ((((arr_3 [i_0] [i_0] [i_2]) != 80))) : (arr_3 [i_0] [i_1] [i_2 + 2])))));
                }
            }
        }
        var_23 -= (28 / 1);
        var_24 += (arr_1 [8]);
        var_25 *= ((((max(48333, 1))) ? ((1 ? (arr_1 [6]) : var_19)) : (((var_11 ? var_18 : (1 == 32767))))));
        arr_12 [i_0] = ((((((((arr_10 [i_0] [5] [i_0] [i_0] [i_0] [i_0]) ? var_11 : var_5)) * (arr_4 [i_0])))) ? var_2 : (((max(61, (arr_7 [i_0] [i_0] [i_0])))))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_26 *= (((arr_14 [6] [i_4]) ? (((((max(2615809377042642395, 1531464102)) != (arr_13 [2]))))) : ((var_3 * (var_5 || var_9)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    arr_21 [i_4] = (((1 - 3469953892) | ((var_18 ? 127 : (arr_0 [i_5] [i_4])))));
                    var_27 += (((arr_17 [12] [i_5] [12]) <= (((arr_1 [0]) * ((((arr_9 [i_4] [i_5] [12] [1]) || var_2)))))));
                    arr_22 [i_4] [14] [i_5] [i_6] |= (((((var_5 * (((var_4 / (arr_2 [i_4] [i_5]))))))) ? (((((arr_4 [12]) ? var_18 : (arr_4 [10]))))) : (((((((arr_1 [6]) ? 1 : var_8))) || ((max(var_1, var_1))))))));
                }
            }
        }
        var_28 = (min((((((arr_0 [i_4] [i_4]) / 52875)) * var_6)), var_10));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_29 += (((((var_11 ? var_1 : var_19) / var_8))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_30 = (max(var_30, ((((arr_36 [i_7] [i_8] [i_9]) * ((+((-62 ? (arr_35 [i_7] [i_8] [i_8] [i_9] [i_9] [i_10] [i_11]) : var_17)))))))));
                            var_31 = (17203 ^ var_10);
                        }
                        var_32 ^= ((((((((arr_34 [i_10] [i_9] [i_8] [i_7]) ? 61 : var_1)) | var_15))) ? (1152921504606846944 < 1621640901) : ((((var_4 || (arr_31 [i_7] [i_7] [i_7] [i_10 + 1] [i_9] [i_10])))))));
                        var_33 = ((~(((arr_25 [11]) - (arr_36 [i_7] [i_7] [i_7])))));
                    }
                }
            }
        }
    }
    var_34 = var_5;
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 21;i_12 += 1)
    {
        for (int i_13 = 4; i_13 < 20;i_13 += 1)
        {
            {
                arr_46 [i_12] [i_13] [i_12] = (((arr_42 [i_12 + 1]) * ((((1 <= var_16) ? (((1 == (arr_42 [i_13])))) : var_19)))));
                var_35 = (((arr_45 [i_12 + 1] [i_13]) ^ (((var_13 ? (arr_45 [i_12 + 1] [i_13]) : (arr_45 [i_12 - 1] [i_13]))))));
                arr_47 [i_13] = ((~(max(((var_16 ? (arr_43 [i_13] [i_13]) : var_2)), ((min(var_10, var_10)))))));
            }
        }
    }
    #pragma endscop
}
