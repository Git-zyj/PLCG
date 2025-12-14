/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 16777215;
    var_16 = ((((((!((min(var_2, var_11))))))) * (((((18 ? var_10 : var_14))) ? var_2 : var_8))));
    var_17 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_18 = (arr_1 [i_1]);

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_2] = ((!(arr_6 [5] [i_1 + 1] [i_1 + 2] [i_1 - 1])));
                var_19 ^= 6675933692341693193;
            }
            arr_9 [i_0] = var_8;
            arr_10 [i_0] [i_0] [i_0] = ((((0 ? 2793647171 : 8271234110129648390))) ? var_8 : (arr_5 [i_1] [i_0] [i_0] [i_0]));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_13 [i_0] [i_3] = var_4;
            arr_14 [i_0] = var_13;
            var_20 = var_9;
            var_21 = (max(var_21, ((var_0 ? var_14 : 13410739197605955176))));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_22 = ((-(arr_12 [i_0] [i_0] [i_0])));
            var_23 ^= var_3;
        }
        arr_19 [i_0] = 1911;
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        var_24 = (((((arr_17 [i_5]) ? var_3 : var_13)) ^ (((arr_11 [i_5]) ? var_11 : (arr_21 [i_5] [i_5])))));
        var_25 = (min(var_9, (((arr_3 [i_5] [i_5] [i_5]) | var_6))));
        var_26 = -2187868655601205259;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_24 [i_6] = (((arr_18 [8] [8] [16]) > (arr_16 [8])));

        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            arr_28 [i_7] = (arr_7 [i_6] [i_7]);
            var_27 = (arr_7 [i_7 + 1] [i_7 + 1]);
            var_28 = (max(var_28, (arr_26 [i_7])));
        }
        var_29 = ((46740 << (7547943891824056641 - 7547943891824056631)));
        var_30 = (((arr_12 [i_6] [24] [i_6]) / (arr_5 [4] [2] [2] [i_6])));
    }
    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {
        var_31 = (max(var_31, ((((((!16474457997003610104) | (arr_7 [i_8] [i_8]))) | (arr_2 [4] [i_8] [4]))))));
        var_32 = var_11;
        var_33 ^= (((((max(15728640, 18142337473476506990)) ? (((var_7 << (var_4 - 6501717261728528962)))) : (arr_20 [8] [i_8])))));
        var_34 ^= ((((arr_12 [i_8 - 1] [14] [i_8 - 1]) | var_9)));
    }
    #pragma endscop
}
