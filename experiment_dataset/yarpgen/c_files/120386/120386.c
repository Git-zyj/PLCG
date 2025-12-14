/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(var_7, ((var_11 ? var_7 : var_9))))) ? ((min(var_5, (var_0 != var_0)))) : ((var_9 ? var_0 : ((min(var_7, var_2)))))));
    var_20 = var_4;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_21 = min(((min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2])))), (((min(2, 2)))));
        arr_2 [i_0] = var_4;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = ((arr_4 [i_1] [i_1] [i_0]) != ((var_18 ? (arr_3 [i_0 - 1]) : (((min((arr_4 [i_0 - 1] [i_1] [i_1]), var_16)))))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_22 ^= ((!((min(((max(1, -32183))), (((arr_3 [i_2]) * (arr_0 [7]))))))));
                var_23 = (min(var_23, ((max((((var_9 % var_2) ? (((min((arr_4 [i_0] [i_1] [i_2]), var_10)))) : (max((arr_9 [10] [i_1] [10]), (arr_4 [i_0] [i_0] [i_0]))))), ((min(42862, 39614))))))));
                arr_10 [i_0] [i_0] [i_2] = (min((((((arr_6 [10] [i_0 + 2]) || (arr_4 [i_0] [i_0] [i_0]))) ? (((arr_5 [i_0]) ? (arr_4 [i_0] [i_1] [i_2]) : (arr_1 [i_2]))) : ((var_14 ? var_2 : var_13)))), ((((arr_9 [i_0] [i_0] [i_0 + 1]) && (arr_9 [i_0] [i_0] [i_0 + 1]))))));
                var_24 = var_17;
                var_25 = (((((var_7 ? (((~(arr_6 [1] [i_1])))) : (arr_3 [i_0 + 3])))) ? ((((arr_4 [i_0] [i_0 - 1] [i_0 + 2]) << (((arr_1 [17]) + 1947188197))))) : var_3));
            }
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_13 [i_0] [i_0] = ((+(((arr_6 [i_0 + 1] [i_0 + 1]) ? (arr_6 [i_0 - 1] [i_0 + 1]) : var_2))));
            arr_14 [i_3] &= (min(var_3, (var_7 != var_12)));
        }
        var_26 = (max(var_26, (((((((arr_3 [i_0 + 2]) ? ((var_6 ? (arr_3 [i_0 + 2]) : var_0)) : ((max((arr_0 [i_0]), (arr_1 [i_0]))))))) ? (max((arr_0 [i_0 + 1]), (((arr_0 [i_0]) ? var_10 : var_12)))) : (((((max(var_13, (arr_12 [8])))) ? (min((arr_5 [10]), var_5)) : ((min(var_11, var_1)))))))))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_27 = ((arr_1 [i_4]) ? (((-2147483647 - 1) ? 18446744073709551608 : 42872)) : (((((min((arr_5 [i_4]), (arr_8 [i_4])))) ? (arr_3 [i_4]) : (arr_15 [i_4] [i_4])))));
        var_28 = ((+((((arr_12 [i_4]) < ((((arr_15 [i_4] [i_4]) != (arr_4 [i_4] [i_4] [i_4])))))))));
        arr_17 [i_4] = ((((max(67, 1))) * (arr_0 [i_4])));
        var_29 = (max(var_29, (((((min((((arr_8 [i_4]) ? var_11 : (arr_1 [i_4]))), (arr_12 [6])))) ? (((((25922 ? 253 : 1))) ? ((min(0, 9595))) : 705084062)) : (min((((var_12 && (arr_11 [i_4] [i_4] [i_4])))), ((var_6 ? (arr_8 [i_4]) : (arr_5 [18]))))))))));
        var_30 = (arr_4 [i_4] [i_4] [i_4]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_31 = (((arr_20 [i_5] [i_6]) ? (arr_20 [i_5] [i_6]) : (arr_20 [i_5] [i_5])));
            arr_23 [1] = (((((arr_21 [i_6] [i_5]) & (arr_20 [i_5] [i_5]))) & (arr_18 [i_5] [i_5])));
            arr_24 [i_5] = (~var_18);
            arr_25 [i_5] = var_1;
            var_32 = ((-((27165 ? (arr_18 [i_5] [i_6]) : 1))));
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_33 = (max(var_33, (((arr_27 [i_5] [i_5] [i_7]) ? (arr_27 [i_7] [i_5] [i_5]) : ((var_18 ? (arr_26 [i_5] [i_7] [i_5]) : (arr_22 [i_7])))))));
            arr_28 [i_7] [7] = (arr_27 [i_5] [i_5] [i_5]);
            var_34 = ((((var_6 * (arr_20 [i_5] [i_5])))) ? (((arr_18 [i_5] [i_7]) ? var_15 : var_14)) : (arr_27 [i_5] [i_7] [i_5]));
            arr_29 [i_5] = ((arr_19 [i_5]) ? (arr_19 [i_5]) : (arr_19 [i_5]));
        }
        var_35 = (((arr_19 [i_5]) ? ((var_1 ? var_11 : (arr_26 [i_5] [i_5] [i_5]))) : (((((arr_22 [i_5]) > (arr_19 [i_5])))))));
    }
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        arr_32 [i_8 - 1] = (min((((((arr_26 [i_8] [i_8 - 1] [1]) && var_3)) ? var_17 : (arr_21 [i_8] [7]))), ((((((arr_26 [10] [i_8] [i_8]) ? var_11 : (arr_21 [i_8] [i_8 - 1])))) ? (arr_21 [i_8] [i_8]) : (((max((arr_30 [1]), var_0))))))));
        var_36 = (max(((((((arr_19 [i_8]) ? var_4 : (arr_21 [i_8] [i_8])))) ? var_12 : (arr_26 [i_8 - 1] [i_8 - 1] [i_8 - 1]))), (((((arr_26 [i_8] [i_8] [i_8]) * var_16)) + (arr_20 [i_8] [i_8])))));
    }
    var_37 = (max((((((min(var_9, var_16)) + 2147483647)) << (((max(var_12, var_6)) - 18446744071734456077)))), var_6));
    #pragma endscop
}
