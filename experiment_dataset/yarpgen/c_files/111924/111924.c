/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (((var_4 > 9438232340401756824) % ((((max(var_12, -118))) ? var_8 : ((1079353816901061151 ? var_11 : 186))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = (max(var_14, ((max((arr_1 [i_0] [i_0]), var_1)))));
        var_15 = (min(var_15, ((min(((((min(var_4, (arr_0 [12] [i_0])))) ? (((max(8110, 103)))) : ((1090055505 ? 0 : 250)))), (((((!(arr_1 [i_0] [i_0]))) && ((((arr_0 [i_0] [i_0]) ? 217 : var_4)))))))))));
        var_16 = 12;
        var_17 &= ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (arr_2 [i_0] [i_0]) : ((min((arr_2 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
        var_18 = ((var_5 * (max(((min(11, var_12))), ((1079353816901061164 ? (arr_1 [i_0] [i_0]) : var_10))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_19 = (max((((arr_4 [i_1]) ? 6425475811557580060 : 18287805645092037102)), ((38563 ? 4 : 158938428617514514))));

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                arr_10 [i_3] [i_2] [i_2] [i_1] = (~-1757643641723161769);
                var_20 = (60386 && var_7);
            }
            arr_11 [i_2] [i_2] [i_1] = (max(((max(0, (arr_8 [i_2] [i_2])))), ((-(~var_9)))));
            var_21 = (((arr_6 [i_2 + 4] [i_2 + 3]) + (((!((max(var_10, 7162))))))));
            var_22 = (min(var_22, (((((!(arr_5 [i_2 - 1]))) ? var_4 : (((var_4 % (arr_4 [i_2 + 2])))))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_23 = (((var_5 * var_9) ? (arr_3 [i_1] [i_1]) : (arr_9 [i_1])));
            var_24 = ((var_8 <= (arr_12 [i_4] [i_4] [i_1])));
            arr_16 [i_1] = var_4;
            arr_17 [i_1] [i_4] [i_4] = ((var_0 ? (arr_14 [i_1]) : var_12));
        }
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_25 = (max(var_25, ((((arr_1 [i_5] [i_5]) | (((18287805645092037102 ? (arr_18 [i_5]) : var_10))))))));

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_26 = (min(var_26, -18290));
            arr_23 [1] [i_6] [i_5] = (((((arr_3 [i_5] [i_6]) ? -4542168570839277561 : 2000278855)) <= ((((var_3 || (arr_1 [i_6] [i_5])))))));
            var_27 = ((((max(70, (arr_3 [i_5] [i_5])))) ? ((((4 & 174) ? (((arr_8 [i_6] [i_5]) | (arr_19 [i_5]))) : (arr_0 [i_5] [i_5])))) : ((~((-24 ? 23242 : 18287805645092037102))))));

            /* vectorizable */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                arr_26 [i_5] [0] [0] [i_6] = (arr_3 [6] [i_7]);
                var_28 = 1090055505;
                var_29 = (max(var_29, (36704 & 18446744073709551590)));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_30 = ((!(arr_25 [i_5] [i_6] [i_7] [i_9])));
                            var_31 &= ((!(arr_25 [i_5] [10] [i_5] [i_8 - 1])));
                            var_32 = (max(var_32, ((((arr_24 [i_8 - 1] [i_8 - 1]) ? var_4 : (arr_24 [i_8 - 1] [i_8 - 1]))))));
                        }
                    }
                }
            }
            var_33 = (max(var_33, ((((((arr_6 [i_5] [i_6]) & (!8338604497504354426))) != (((var_4 > 86) ? ((var_7 ? -1578502602 : 44)) : var_3)))))));
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            var_34 = (min(var_34, ((((arr_34 [i_5] [i_10]) != (64500 - 985162418487296))))));
            var_35 = (max(var_35, 1027));
            var_36 = (((arr_8 [i_5] [i_5]) ? (~var_12) : ((((arr_8 [i_5] [i_5]) ? (arr_8 [i_5] [i_10]) : (arr_8 [i_5] [i_5]))))));
            arr_35 [i_5] [i_5] = (((((~var_8) ? (((arr_2 [i_5] [i_5]) ^ var_2)) : var_7)) & (~16020)));
        }
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            var_37 = (max(97, 64484));
            var_38 = ((-(((((arr_4 [i_11]) >> (var_1 - 3234804762831019321))) | ((var_9 ? (arr_4 [i_11]) : 42424))))));
        }
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            var_39 = (max(var_39, 190));
            var_40 = (max((arr_13 [i_5] [i_12] [i_12]), ((13 ? ((-39 ? var_4 : var_10)) : -var_7))));
        }
    }
    var_41 &= ((var_1 ? (((var_11 ? var_8 : var_12))) : var_12));
    #pragma endscop
}
