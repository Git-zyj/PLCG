/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max(131071, (~-131071)))) ? 5982 : (((32935 < var_9) ? var_17 : var_1))));
    var_20 = var_6;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_21 += 5982;
        arr_3 [i_0] [7] = ((((((arr_1 [i_0 + 1]) & var_6))) ? ((var_2 ? ((((var_12 && (arr_0 [i_0]))))) : ((5961 ? var_16 : (arr_0 [i_0]))))) : (((((min(-1172737601, 65535)) > (min(-5962, var_16))))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_13 [6] [i_2] [i_2] [i_1] = ((~(max(((1700930352 ? 17809858203847648940 : var_11)), var_5))));
                        arr_14 [i_2] [1] [i_2] [i_3] [i_4 + 1] = (((((~1172737600) / (((arr_5 [i_3] [i_4]) / 1)))) / (min(((-26188 ? var_1 : (arr_12 [6] [i_2 - 2] [8] [8]))), (min((arr_11 [i_1] [i_1] [i_1] [i_3] [i_3] [i_1]), (arr_5 [i_2] [i_1])))))));
                    }
                }
            }
            arr_15 [i_2] [i_2] [i_2] = (((((4294967266 ? 5982 : 27))) == ((((min(10146, (arr_10 [i_1] [i_2])))) ? var_13 : (1488366278 / var_9)))));
            var_22 = 158;
            arr_16 [i_2] = ((((((arr_6 [i_2] [i_2 - 3] [i_2]) ? (((arr_7 [i_1] [i_2]) ? var_17 : (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : ((var_17 ? -5981 : 42))))) ? ((((min(var_8, 57))) * (1 / -131068))) : ((var_4 ? ((var_15 / (arr_8 [i_2] [i_1]))) : ((var_4 ? var_5 : 1))))));
        }
        for (int i_5 = 3; i_5 < 9;i_5 += 1)
        {
            var_23 = (min(18446744073709551615, 32767));
            var_24 *= ((((!(((var_11 ? var_2 : var_13))))) ? 10 : (~5982)));
            var_25 = (max((((((var_8 ? 5981 : (arr_5 [i_5] [i_1]))) == (((-70 ? var_13 : var_6)))))), (max(1, ((1 ? 1 : 1))))));
            var_26 = ((64029793 % ((((((var_4 ? (arr_11 [i_1] [i_1] [i_1] [11] [i_5 - 2] [i_5]) : 2734897982))) ? (arr_11 [i_5] [i_5] [i_5 + 3] [i_5 - 3] [i_5 - 3] [i_5 - 2]) : (!0))))));
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            var_27 = ((((arr_12 [i_1] [i_1] [i_1] [i_1]) == var_11)) && (~var_18));
            var_28 = (arr_8 [i_1] [i_6]);
        }
        arr_21 [5] = ((((((min((arr_20 [i_1] [i_1]), (arr_6 [2] [i_1] [i_1]))) >> (255 - 232)))) ? (((~(((arr_20 [i_1] [i_1]) ? 100 : (arr_18 [i_1] [i_1] [i_1])))))) : ((((((arr_5 [9] [i_1]) | var_14))) ? (arr_5 [i_1] [11]) : (arr_5 [i_1] [i_1])))));
    }
    for (int i_7 = 2; i_7 < 11;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    arr_31 [i_7] = var_4;
                    var_29 *= (arr_20 [i_8] [i_8]);
                    var_30 *= ((-((min(var_9, var_3)))));
                    arr_32 [i_7] [i_7 + 1] [i_7 + 1] [i_7] = (((((((min(var_15, var_8))) ? 7 : 1))) ? ((2001377646 ? (arr_30 [i_7 - 2] [i_7 + 2]) : var_4)) : var_1));
                    arr_33 [i_7] = max((max(-1337621054, -1)), (min((arr_11 [i_8 - 3] [i_8 - 3] [i_8 - 2] [i_8 - 1] [i_8 - 3] [i_8 - 1]), (arr_9 [i_8 - 2] [i_8 - 3] [i_8 + 3] [i_7]))));
                }
            }
        }
        var_31 = ((((49917 ? (((!(arr_28 [i_7])))) : (((var_17 > (arr_5 [i_7] [i_7])))))) ^ 1477591259));
        arr_34 [i_7] [i_7] = (min((((-1477591253 ? -1477591253 : -131060))), ((((min(var_12, var_0))) % (max(var_1, var_3))))));
    }
    #pragma endscop
}
