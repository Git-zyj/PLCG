/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (((arr_0 [i_0]) || ((2083247883 && (arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = 111;

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                arr_6 [i_2] [i_1] [i_1] [i_0] = ((arr_5 [i_1] [i_2]) ? (~var_0) : 4172740255);
                var_19 = ((var_16 ? (!122227056) : (arr_5 [i_1] [i_2])));
                var_20 ^= (((max(4172740258, (arr_4 [i_0] [i_1] [i_2] [i_0])))) ? ((max(81, -33))) : (max(var_0, 2036308041)));
                var_21 = ((~(((arr_5 [i_0] [i_0]) ? (arr_5 [i_0] [i_1]) : (arr_5 [i_1] [i_0])))));
                arr_7 [i_1] [8] [i_1] = (((var_7 | var_7) <= (4172740238 == var_11)));
            }
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                arr_10 [i_1] [i_1] [i_1] = arr_9 [i_3] [i_1] [i_0] [i_0];
                var_22 = (((((var_2 / 1792928503) * (((((arr_3 [i_0] [i_1] [1]) >= var_0))))))) ? (((arr_4 [i_0] [i_0] [i_0] [2]) % (arr_2 [i_0] [i_1]))) : var_13);

                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    arr_15 [12] [i_1] [i_1] [i_0] = (((arr_8 [i_1]) / (arr_0 [i_0])));
                    var_23 = (arr_13 [i_0] [i_1] [i_1] [i_4]);
                }
                var_24 = (min((arr_1 [i_3]), (min((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1])))));
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_18 [i_5] = var_6;
            var_25 += (((arr_8 [i_0]) ? (arr_8 [i_0]) : (arr_8 [i_0])));
        }
        arr_19 [i_0] = ((-91 ? (min((arr_2 [i_0] [i_0]), 23666052)) : (((arr_0 [i_0]) ? -122227021 : (arr_9 [i_0] [i_0] [0] [i_0])))));
        arr_20 [i_0] [i_0] = (((arr_8 [i_0]) && (((-(arr_14 [i_0] [18] [i_0] [i_0] [10]))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {

        for (int i_7 = 4; i_7 < 11;i_7 += 1)
        {
            arr_26 [i_7] = (min(((((var_6 ? var_5 : var_7)) | (((~(arr_23 [i_6] [i_7])))))), ((((arr_23 [i_7 - 4] [i_7 - 1]) >> (((arr_24 [i_7 + 1] [i_7 + 1] [i_7 + 1]) + 16509)))))));
            var_26 *= (arr_11 [i_6] [i_7] [i_6] [18] [i_7]);
            var_27 = ((-((min(79, 0)))));
            arr_27 [i_6] [i_6] [i_7] = (!var_16);
        }
        var_28 = arr_24 [i_6] [i_6] [i_6];
        var_29 = ((((max((arr_23 [i_6] [i_6]), (arr_22 [i_6])))) ? ((var_13 ? 32767 : (arr_16 [i_6] [i_6]))) : (min((arr_12 [i_6] [i_6]), var_3))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_30 = var_2;
        arr_30 [i_8] = var_3;
        arr_31 [i_8] [i_8] = var_6;
    }
    var_31 = var_16;
    var_32 = var_11;
    #pragma endscop
}
