/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = min((arr_1 [i_0 + 1]), (arr_0 [i_0 - 1]));
        arr_3 [i_0 - 1] [i_0] = ((((((arr_0 [i_0 + 4]) ? (max((arr_1 [i_0]), (arr_0 [0]))) : ((min(221, var_5)))))) ? ((((((var_13 ? var_6 : var_3))) ? (arr_0 [i_0 + 4]) : var_5))) : (max(((min(-296196253, -1615977199199993362))), ((var_7 ? 8773822865126633694 : 15993187562127254600))))));

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            var_18 = (((((arr_0 [i_0 + 3]) % 126)) % (max(((min(var_8, (arr_5 [i_0])))), (min(-784006254662250696, (arr_1 [i_0])))))));
            arr_6 [3] [i_1] [i_1 + 1] = ((!((((arr_4 [i_0 - 1] [i_0 + 4]) >> 1)))));

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_19 -= var_17;
                arr_11 [4] [i_1] [i_2] [i_0] = ((min((arr_9 [i_0 + 4] [i_0 + 2]), var_10)) - 43);
                var_20 *= var_16;
            }
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                arr_15 [i_0] [i_1] = ((((max((min(784006254662250696, (arr_10 [i_3] [i_1] [i_0 + 3]))), ((((arr_9 [i_1] [i_3]) ? 1 : 8162)))))) ? (0 <= 32767) : (((arr_1 [i_0 + 3]) ? (arr_1 [i_0 + 2]) : var_11))));
                var_21 = (((~(!2820200903))));
                var_22 -= ((-((55339 >> (((arr_14 [i_3 + 1]) + 20035))))));
            }
            var_23 = (arr_5 [i_1]);
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    arr_22 [i_4] = (((((((max(5131671389862028726, -784006254662250682))) ? 927582077 : 28195))) - ((((arr_17 [i_4]) != 6932)))));
                    var_24 = (min(var_24, (((((0 || ((min(var_6, -784006254662250696)))))) > var_14))));
                    arr_23 [i_4] [0] [i_6] = var_3;
                    arr_24 [i_4] [i_4] = (min(((max(var_9, (!67)))), (4294967295 - 279)));
                }
            }
        }
        var_25 *= var_5;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    {
                        var_26 = (min(var_26, ((((((var_7 ^ (arr_27 [i_8] [i_7] [i_4])))) ? (min((arr_27 [i_4] [i_8] [i_9]), (arr_27 [i_8] [i_8] [i_7]))) : (((arr_27 [i_7] [i_8] [i_9]) - var_16)))))));
                        arr_33 [i_4] [i_9] [i_4] [i_4] [i_4] = ((1 ? -6173261858734262839 : 23162));
                    }
                }
            }
        }
    }
    var_27 *= ((((max(-var_15, var_1))) ? (var_9 <= var_8) : (min(6354, var_13))));
    var_28 -= var_1;
    var_29 = (max(var_29, var_3));
    var_30 = ((-(((!var_12) | ((var_12 ? var_9 : var_4))))));
    #pragma endscop
}
