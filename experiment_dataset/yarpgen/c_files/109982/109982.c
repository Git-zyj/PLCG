/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 *= ((((((arr_2 [i_0]) / 1))) ? (min(14768, (arr_3 [i_0]))) : (((531975029 ? -1 : 5842)))));
        var_17 &= (((((((65535 ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0]))) == ((-211619733628336231 ? 1 : (arr_0 [i_0] [i_0]))))))) * (((var_12 < 0) ? (arr_0 [i_0] [i_0]) : 2388139521726518487)));
        arr_4 [i_0] = (((1 ? ((-4307519051548127054 ? 1457085553274381225 : 1)) : 1)));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            var_18 = var_1;
            var_19 = (arr_1 [i_1 + 2] [i_2 - 1]);
        }
        arr_9 [i_1] [i_1 + 3] = (arr_3 [i_1]);
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_20 = (arr_11 [i_3]);

        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            arr_15 [i_3] [i_3 - 1] [i_3 + 2] = ((-(arr_14 [i_3 + 2] [i_3] [i_4])));
            arr_16 [i_3] [i_4 - 3] = 0;
            arr_17 [i_3] = ((-22 ? -8753355840233391004 : -2415));
            arr_18 [i_4] [14] |= ((-(arr_14 [i_3] [10] [i_4 - 2])));
            arr_19 [i_3] = (((arr_10 [i_3 - 1] [i_4 - 2]) ? 29884 : (arr_10 [i_3 - 1] [i_4 + 1])));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            arr_24 [i_3] [i_3] = (arr_20 [i_3]);
            var_21 += (((((arr_21 [i_5] [i_5]) ? 30621 : 791518481)) > (arr_12 [i_3 + 1])));
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_22 += 3578821991312501052;
            var_23 = (max(var_23, (((var_3 ? 18446744073709551614 : (arr_12 [i_3 + 2]))))));
            var_24 = ((((arr_25 [i_3]) ? 60 : -1)) + (arr_12 [i_3]));
            var_25 = ((arr_25 [i_3]) * (754838665 >= 2));
            var_26 = (~-81);
        }
        arr_28 [2] |= (arr_10 [i_3 + 1] [i_3 - 1]);
        var_27 = (((arr_14 [i_3] [i_3] [i_3 - 1]) ^ -28610));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            var_28 ^= (!20683);
            arr_35 [i_7] [1] [i_7] = (!1);
            var_29 ^= (84 && 25754);
            var_30 |= (arr_23 [i_7] [1]);
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {

            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                arr_42 [i_7] [i_9] = (((arr_20 [i_7 - 1]) == var_14));
                var_31 = (((arr_20 [i_10 - 2]) > (((-(arr_10 [i_7] [i_7 - 1]))))));
                var_32 ^= (((~0) >= (!0)));
                arr_43 [i_7] [i_9] [1] [14] = (((arr_21 [i_7] [i_9]) ^ (arr_39 [i_10 + 1] [i_9] [i_7 + 1] [i_10])));
            }
            var_33 -= (((arr_27 [i_9]) > (arr_37 [i_7 + 1] [i_7] [i_7 - 1])));
            var_34 = ((((((arr_36 [i_7] [i_7]) > 35658))) * (((arr_40 [i_7] [i_7] [i_7]) << (((arr_39 [0] [i_9] [5] [i_7]) - 43681))))));
        }
        for (int i_11 = 3; i_11 < 15;i_11 += 1)
        {
            arr_47 [i_7 + 2] [i_11] [i_7] = (arr_20 [i_7 + 1]);
            arr_48 [11] [1] [i_7] = ((9 ? 1 : (((arr_20 [i_7]) | var_1))));
        }
        for (int i_12 = 4; i_12 < 16;i_12 += 1)
        {
            arr_52 [i_12 - 1] [8] |= ((1 | (arr_29 [i_7 + 2])));
            arr_53 [i_7] [i_12] = (arr_50 [i_12 + 1] [i_7 + 2]);
            arr_54 [12] [9] [i_7] = (arr_20 [i_7 + 2]);
        }
        var_35 = (!-1218348836);
        arr_55 [i_7] = (arr_10 [i_7] [16]);
    }
    for (int i_13 = 1; i_13 < 16;i_13 += 1) /* same iter space */
    {
        arr_58 [i_13] = (((arr_12 [i_13]) / -4));
        var_36 = ((((var_13 / (((arr_49 [i_13 - 1]) ? (arr_27 [8]) : (arr_22 [i_13 + 2] [i_13]))))) / ((((max(0, 78)))))));
    }
    var_37 = var_5;
    #pragma endscop
}
