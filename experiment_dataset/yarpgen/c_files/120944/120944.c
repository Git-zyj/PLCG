/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((max(6874019496864422663, (arr_2 [i_0 - 2])))) || -var_8));
        var_12 = (min(var_12, (arr_0 [i_0] [i_0 - 1])));
        var_13 ^= ((!((max((arr_1 [i_0]), (arr_0 [i_0 + 3] [i_0 - 1]))))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_1] = (((max((arr_0 [i_0 + 3] [i_0 + 1]), (arr_1 [i_1]))) < (((var_7 ? (arr_5 [i_0 - 2]) : (arr_4 [i_0] [i_0 - 1] [i_1]))))));
            var_14 = (var_3 >> (((max((arr_0 [i_0 + 1] [i_0]), var_8)) - 744236054407570794)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_15 [8] [i_4] [i_4] [9] = (max((7966551917515258669 / -var_11), 7966551917515258669));
                            arr_16 [i_4] [i_3 - 3] [i_2] [i_1] [i_0] = ((~(((arr_7 [i_0] [i_1] [i_2] [i_4]) ^ var_10))));
                            arr_17 [i_0 - 2] [i_2] = 10480192156194292959;
                            arr_18 [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 1] [14] [i_0 - 3] = (min(7966551917515258669, 41608));
                            var_15 = (max(var_15, (((~((~(!-1369908300190995761))))))));
                        }
                        var_16 -= 1369908300190995760;
                        arr_19 [i_3] [i_2] [i_0] = (((max((arr_12 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_3 - 3]), (arr_10 [1]))) * (!1492103883)));
                    }
                }
            }
            var_17 = ((var_6 <= (((((!(arr_0 [i_0] [i_0]))) || (arr_10 [i_0]))))));
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_18 -= ((max((max((arr_8 [i_0]), 4215555661057823440)), (1492103883 <= 633503765))) % ((-var_3 + ((((arr_11 [i_5] [i_5] [i_0 - 2]) / 32758))))));

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                var_19 = (((max(7966551917515258669, 12848)) > (((((max(-16, (arr_21 [i_0] [i_0 - 2]))) <= 1968288287))))));
                var_20 -= (max((((-1 || (arr_13 [i_0] [i_0] [i_5] [13] [13] [4] [i_6])))), 15));
                var_21 = ((((max((arr_12 [i_0] [i_0 + 2] [i_0 - 1] [i_0 - 2]), (arr_12 [i_0] [i_0 - 3] [i_0 + 2] [i_0 + 1])))) && 10));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_22 = (min(var_22, 240));
                    var_23 = (max(var_23, var_1));
                }
                arr_27 [i_0] [1] [i_6] [i_6] = 4526878084153115736;
            }
        }
        var_24 *= ((!(arr_0 [i_0 - 1] [i_0])));
    }
    for (int i_8 = 1; i_8 < 20;i_8 += 1)
    {
        arr_31 [i_8] = var_7;
        arr_32 [i_8] [i_8] = ((-(((0 > (arr_29 [i_8 + 3]))))));
        var_25 = (min(var_25, (var_2 || 240)));
        arr_33 [i_8] [i_8] = (arr_30 [1]);
    }
    var_26 = 7257;
    var_27 |= (max((min((var_8 / 18446744073709551615), 35)), (var_11 | var_3)));

    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_36 [i_9] = var_2;
        var_28 ^= (arr_12 [i_9] [15] [15] [i_9]);
    }
    #pragma endscop
}
