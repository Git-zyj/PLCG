/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 = var_3;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] |= (((var_5 * 1) / (var_11 / var_1)));
        arr_4 [i_0] = (-((((((arr_2 [i_0]) ^ 58948))) ? ((var_14 ? var_12 : var_5)) : ((1650902015 ? var_11 : (arr_1 [i_0] [i_0]))))));
        arr_5 [i_0] = (((((1 ? (arr_1 [i_0] [13]) : var_5))) || (!243)));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_8 [16] [16] [i_1] = ((((((arr_1 [i_0] [i_1]) - 12))) ? -3731369746 : (-603360464 == -2198743136591146070)));
            var_18 = (max(var_18, (((((var_3 ? var_6 : 228)) * (((((arr_6 [i_0]) && var_3)))))))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_11 [1] [i_2] |= (1 != 253);
            var_19 = (max(var_19, (((+(((!2198743136591146070) ? (((var_12 ? (arr_1 [i_0] [i_2]) : (arr_1 [i_0] [14])))) : ((34 ? 413396136 : var_13)))))))));
        }
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_20 *= (((var_8 && var_5) && ((var_8 || (arr_7 [i_3] [i_3])))));
        var_21 = (min(var_21, (((((((arr_2 [i_3]) ? 1650902015 : 79))) ? ((var_3 ? (arr_2 [i_3]) : (arr_2 [i_3]))) : (((arr_2 [i_3]) * (arr_2 [i_3]))))))));
        arr_16 [i_3] = ((((1 || (((var_13 ? -2198743136591146070 : 450849774))))) ? (((((!12) && 2644065286)))) : ((((!(arr_13 [i_3]))) ? ((((var_1 && (arr_13 [i_3]))))) : ((var_3 ? 2198743136591146069 : (arr_1 [i_3] [i_3])))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_22 |= ((var_7 ? var_6 : (arr_15 [i_4])));
            arr_21 [i_4] [i_5] = (-2198743136591146070 || var_8);
        }
        var_23 = (min(var_23, (((2644065287 ? (222 * 1) : var_13)))));
        var_24 = (max(var_24, ((((48021 ? (((arr_18 [i_4] [i_4]) ? 1083978290 : var_4)) : (!222))) | ((~((((arr_7 [i_4] [i_4]) != 1)))))))));
        arr_22 [i_4] = ((((((arr_18 [i_4] [i_4]) ? (((((arr_6 [12]) && var_15)))) : ((var_10 - (arr_12 [0])))))) ? (((arr_12 [i_4]) ? 1 : (1650902010 > 243))) : ((((((arr_18 [i_4] [i_4]) + var_11))) ? var_7 : (((arr_20 [i_4] [i_4] [i_4]) ? var_11 : 1))))));
    }
    var_25 = (((((var_9 >> var_10) ? var_13 : var_1)) + var_5));
    #pragma endscop
}
