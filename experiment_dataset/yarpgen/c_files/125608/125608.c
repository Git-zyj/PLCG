/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (2147483641 && 1)));
        arr_2 [i_0] = var_2;
        var_15 -= (209 & 224);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        var_16 -= (((1327101490 == var_4) >> (159 - 134)));
                        arr_13 [i_2] [7] = (arr_9 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 1]);
                    }
                }
            }
            var_17 = arr_12 [i_1];
        }
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {
            var_18 -= (arr_9 [i_1] [i_1] [i_1] [i_1]);
            var_19 = ((3340957433 + (((-((max(0, 24))))))));
            var_20 = (min(var_20, (max((((255 / ((3340957438 ? 255 : 0))))), 3949647668360622305))));
            arr_17 [i_5] = ((3340957424 ? (max((((3949647668360622305 ? var_6 : var_2))), var_12)) : (((max((arr_16 [i_5 - 3] [i_5 - 2] [11]), var_7))))));
        }
        var_21 -= (((-1 ? (((var_6 ? (arr_16 [i_1] [i_1] [i_1]) : (arr_10 [3])))) : ((-1 ? (arr_5 [i_1] [i_1]) : var_7)))) <= ((((!((((arr_4 [i_1]) << (((arr_4 [i_1]) - 3426356595))))))))));
        var_22 = ((-(arr_5 [i_1] [i_1])));
        arr_18 [1] = (arr_8 [i_1] [i_1]);
        var_23 = (max(var_9, (min((((2315648307 ? 0 : (arr_5 [i_1] [i_1])))), var_5))));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_24 -= (((((~(arr_20 [i_6] [i_6]))) - (arr_19 [i_6] [i_6]))));
        var_25 = (min((arr_20 [i_6] [i_6]), (((arr_20 [i_6] [i_6]) ? (arr_20 [i_6] [i_6]) : (arr_20 [i_6] [i_6])))));
        arr_21 [i_6] [i_6] = ((((max(62, 4294967295))) - 178));
        var_26 -= var_9;
    }
    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        var_27 = (min((~3340957433), var_9));
        var_28 = (min(var_28, (max((((1 && var_1) ? ((((!(arr_12 [i_7]))))) : (arr_4 [i_7]))), (((arr_16 [i_7 + 1] [i_7 + 2] [i_7]) ? 3340957431 : -291030659))))));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            var_29 -= (((!3148131171717853011) ? var_10 : (~-31)));
            var_30 = -163;
            var_31 -= (!111);
            arr_28 [i_7] [i_8] [i_7] = ((((var_11 << (37 - 33)))) ? var_1 : (arr_9 [i_8] [i_8] [i_8] [i_8]));
            var_32 = (max(var_32, ((((arr_22 [0]) & var_2)))));
        }
        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        var_33 = 15639589798001843510;
                        var_34 = ((3340957431 ? 2807154275707708111 : 954009863));
                        var_35 = ((((max((arr_1 [i_7 + 1] [i_9 - 1]), ((var_1 ? var_1 : 121))))) ? (max(var_5, (!var_6))) : ((((!(var_6 >= 98)))))));
                    }
                }
            }
            arr_38 [i_7] = ((-3200354532401223288 ? -1 : 9223372036854775807));
        }
        for (int i_12 = 2; i_12 < 12;i_12 += 1)
        {

            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                var_36 -= ((-(!var_13)));
                arr_45 [i_7] [i_12 + 1] = (((((min(3340957433, 1983471210)))) % 2807154275707708092));
            }
            arr_46 [i_7] [i_7 + 3] [i_12] = 1364204387;
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 11;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_37 = ((728505385 ? (-2147483647 - 1) : 954009866));
                            var_38 = ((~(((arr_51 [i_7] [i_14] [i_16] [i_16]) ? var_7 : (arr_51 [i_7] [i_16] [i_16] [i_16])))));
                        }
                    }
                }
            }
            var_39 = ((((arr_10 [i_7 + 3]) ? (arr_5 [i_7] [i_7 - 1]) : 1983471223)));
        }
    }
    var_40 = (max(20, (((((var_4 ? 9223372036854775807 : var_10))) ? var_13 : ((max(65535, var_2)))))));
    var_41 = var_11;
    var_42 = (((~var_0) / var_6));
    #pragma endscop
}
