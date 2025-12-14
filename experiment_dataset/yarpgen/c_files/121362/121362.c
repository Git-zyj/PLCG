/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (min((((var_2 ? (arr_0 [i_0]) : var_16))), (((arr_3 [i_0] [i_0] [i_0]) ? ((((arr_0 [i_0]) + var_15))) : -3403096102145946101))));
                var_21 = (arr_2 [i_0] [i_0] [i_0]);
                arr_5 [i_0] [i_1] = var_19;
                var_22 = ((((~(arr_1 [i_0] [i_0]))) != (((((((arr_1 [i_0] [i_1]) ? -5603350237762252725 : var_9)) > var_7))))));
                arr_6 [i_0] = (((((max((arr_0 [i_0]), (arr_4 [i_0] [i_0] [i_1]))))) >= ((((((arr_3 [i_0] [i_1 + 2] [i_0]) ? var_19 : var_13))) + ((var_3 - (arr_3 [21] [i_0] [1])))))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_23 = ((((((arr_2 [i_2] [i_2] [i_2]) <= var_6))) << (((arr_1 [4] [i_2 + 2]) - 1695004131))));
        arr_11 [i_2] = ((-5603350237762252708 ? 3403096102145946088 : (arr_10 [4] [7])));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_24 += (arr_10 [i_3] [i_3]);

        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            var_25 = ((+(((var_16 < var_13) + var_18))));
            var_26 = ((((max((arr_10 [i_4 - 2] [i_4 - 2]), 5603350237762252748))) ? (((max(var_10, var_4)))) : (var_14 | var_18)));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_27 = ((-((((min(var_12, 6355798507291790251))) ? var_15 : (((((arr_19 [i_4 - 2] [i_3]) > var_17))))))));
                        var_28 -= (((((-((-2048 ? (arr_9 [16]) : var_2))))) || ((((var_4 + 7009790620766306956) ? var_11 : (((var_8 == (arr_14 [i_5] [i_4])))))))));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_28 [i_3] [i_7] [i_7] = ((~(((-7009790620766306956 - var_14) / (((28619 ? (arr_22 [i_3] [i_3] [i_3] [i_7] [i_7]) : 21464)))))));
            var_29 -= ((~(((!((min(var_7, var_7))))))));
            arr_29 [i_3] = (arr_19 [i_3] [i_3]);
            var_30 = var_17;
        }
        var_31 = (((((var_10 ? var_18 : var_0)) | (2037 % var_16))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_32 -= (((((63 ? 15043647971563605538 : 47087))) ? (var_4 - var_1) : (!var_0)));

        for (int i_9 = 1; i_9 < 14;i_9 += 1)
        {
            arr_38 [i_8] [i_8] [i_8] = (!var_4);
            var_33 = (max(var_33, var_16));
            var_34 = ((var_18 ? (((~(arr_4 [i_9] [i_8] [i_8])))) : ((var_0 ? (arr_13 [i_8] [i_8]) : var_12))));
            arr_39 [i_8] [i_8] = ((-5058788565600492135 & 198) ? ((-(arr_20 [i_9]))) : ((var_9 ? var_2 : var_10)));
            arr_40 [i_9] [i_8] [15] = (arr_32 [i_8] [i_9]);
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            arr_45 [i_8] [i_10] [13] = ((((arr_25 [i_8] [i_8] [i_10]) >> (-602323240 + 602323267))) >> (((((arr_27 [i_10]) ? (arr_9 [i_8]) : (arr_42 [i_8] [i_8] [4]))) - 15338244177684186345)));
            var_35 = (((arr_41 [i_8] [i_10]) > -1240814262));
        }
    }
    var_36 = var_17;
    var_37 = (((min(((-31346 ? 3403096102145946077 : 992965763)), ((max(var_14, var_18))))) * (((~(~var_13))))));
    var_38 -= ((((~(min(var_17, var_15))))) ? (min((var_7 / var_13), (138 & var_2))) : var_5);
    #pragma endscop
}
