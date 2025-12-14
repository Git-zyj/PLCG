/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 += var_5;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 *= (arr_1 [i_0]);
        var_16 = var_7;
        var_17 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_18 = (((arr_3 [i_1]) - 75));
        arr_4 [i_1] = (((-127 - 1) ? 3 : 16));

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            arr_8 [i_1] [i_1] = (((((~(arr_5 [23] [23] [i_2 - 1])))) ? (((arr_5 [i_1] [23] [i_2 - 1]) | var_11)) : (((-65 ? 58951 : 87)))));
            var_19 -= (((((49067 ? 4909880350162010925 : -59))) ? (arr_2 [i_2 + 1] [i_2]) : (((arr_2 [i_2 + 1] [i_1]) ? var_10 : (arr_5 [i_2 + 1] [i_2 + 2] [i_2 + 2])))));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_11 [i_1] [i_3] = ((((var_6 | ((((9979200116256947984 < (arr_9 [i_3]))))))) << (((((max((arr_3 [i_1]), -2701639923627986796)) + 66)) - 21))));
            arr_12 [i_1] [i_3] [i_1] = (arr_3 [i_3]);
            var_20 += 8397638085053569880;
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
        {
            var_21 = (max(var_21, (arr_14 [20] [i_4])));
            arr_15 [i_1] [15] [20] = (((arr_9 [i_1]) & ((((arr_6 [i_1] [i_1]) <= 16461)))));
            var_22 -= ((((71 + (arr_2 [i_1] [i_4])))) ? (((52393 > var_2) ? (var_0 % var_12) : ((var_2 ? var_1 : 272951666833716616)))) : var_6);
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                var_23 = (max(var_23, ((((min(((var_7 ? 1431684984 : (arr_13 [i_5] [i_5] [11]))), (arr_16 [i_5])))) ? (arr_13 [i_1] [i_5] [i_6]) : var_2))));

                /* vectorizable */
                for (int i_7 = 3; i_7 < 21;i_7 += 1)
                {
                    arr_24 [i_1] [i_1] [i_1] = 2384243419579156781;
                    var_24 = var_1;

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_27 [i_1] [i_1] = ((arr_25 [i_7 - 2] [i_1] [i_7 + 3] [i_7 + 1] [10] [i_7] [16]) / (arr_0 [i_7 + 2]));
                        var_25 = (((arr_26 [7] [i_1] [i_7 - 1] [i_7 - 2] [19] [8] [7]) ? var_0 : var_10));
                        var_26 = (((~-7591902604961890798) ? (arr_25 [i_1] [i_1] [i_1] [i_5] [i_1] [6] [i_8]) : -13133));
                    }
                }
            }
            /* vectorizable */
            for (int i_9 = 1; i_9 < 22;i_9 += 1) /* same iter space */
            {
                var_27 *= (arr_14 [i_1] [i_5]);
                arr_31 [i_1] [18] = 733475832161620553;
                var_28 += ((var_4 ? var_12 : (80 / -2384243419579156779)));
            }
            for (int i_10 = 1; i_10 < 22;i_10 += 1) /* same iter space */
            {
                var_29 = ((((var_8 / 66) ? (((var_5 ? 200 : (arr_25 [i_1] [i_1] [17] [i_10] [i_10] [0] [i_1])))) : (2863282301 ^ 16466))));
                arr_34 [i_1] = -8;
            }
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                var_30 = ((+(((arr_36 [i_1] [i_1] [i_1] [i_1]) / -1))));
                var_31 = ((48 ? ((1 ? (((arr_16 [i_1]) ? -6555728712025679576 : 1)) : (min(1729382256910270464, var_10)))) : 3344670789121743928));
            }
            arr_37 [i_1] [17] [i_1] = (min(var_12, (2146435072 + 31)));
        }
    }
    #pragma endscop
}
