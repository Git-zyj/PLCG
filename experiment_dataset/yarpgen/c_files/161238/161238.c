/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [18] [18] = (((((var_9 ? (arr_0 [i_0 - 1]) : var_1)))) ? (((arr_1 [i_0 - 2]) >> (var_4 - 43999))) : ((max((arr_1 [i_0 - 1]), (arr_0 [i_0 - 1])))));
        arr_3 [i_0] = (min(var_1, (arr_0 [i_0 - 1])));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] = ((-(((4294967295 >= -6428362854712742557) ? ((9223372036854775807 ? 8419 : 0)) : (!6428362854712742556)))));
        arr_8 [i_1] [i_1 - 1] = ((((((arr_4 [i_1 + 1]) ? (arr_4 [i_1]) : 12885487112265030005))) ? -51 : ((((var_1 / (arr_5 [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_13 [i_2] = (var_1 ^ var_7);
        arr_14 [i_2] = (((((arr_0 [i_2]) ? (((arr_12 [i_2]) ^ (arr_12 [i_2]))) : (arr_0 [i_2])))) ^ (((arr_9 [i_2] [i_2]) & var_5)));

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            arr_17 [i_2] [i_2] &= (((max((arr_9 [i_3 + 1] [i_3 + 1]), (((arr_9 [i_3] [i_2]) ? (arr_11 [i_3 + 1]) : (arr_9 [i_2] [14]))))) & ((((arr_1 [i_3 - 1]) ? ((((arr_10 [i_3]) > var_6))) : -var_6)))));
            arr_18 [i_2] [i_3] = var_9;
            arr_19 [18] [i_3 + 1] = var_3;

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                arr_23 [i_2] [1] = (((((arr_15 [0] [0] [i_3 + 1]) - (arr_15 [8] [8] [i_3 - 1]))) - -var_5));
                arr_24 [i_2] [i_3] = 0;
                arr_25 [i_2] [11] = var_7;
                arr_26 [i_2] [i_2] = ((((var_6 ? var_8 : (arr_12 [i_4])))) ? ((max(((max(var_0, var_2))), (arr_15 [i_2] [i_3 + 1] [i_4])))) : (max((arr_21 [i_3 - 1] [i_3 - 1] [1]), (var_9 <= var_7))));
                arr_27 [i_2] [i_2] = (max(13884643154950830477, var_0));
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                arr_30 [i_2] [i_2] = 0;
                arr_31 [i_2] [i_3] [i_3] [i_5] = ((((-5651305369909670427 * ((var_8 ? var_7 : var_9))))) ? var_0 : var_1);
                arr_32 [i_2] = ((-6428362854712742539 ? ((((arr_1 [i_3 + 1]) > var_1))) : ((13 ? (arr_22 [i_2] [i_2] [i_3 - 1]) : var_4))));
            }
            /* vectorizable */
            for (int i_6 = 3; i_6 < 21;i_6 += 1)
            {
                arr_35 [i_2] [i_2] [i_2] = (arr_15 [i_3] [i_3 - 1] [i_6 - 3]);
                arr_36 [16] [i_3] [i_6] = (((arr_33 [i_3 - 1]) || (arr_34 [i_6 - 3] [i_6 - 2] [i_6 - 3])));
                arr_37 [i_2] = var_3;
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_40 [i_7] = ((var_0 * (arr_16 [i_2])));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    {
                        arr_45 [i_2] = ((var_7 << ((((((-(arr_1 [17]))) + 56304)) - 14))));
                        arr_46 [i_2] [13] [13] [13] [i_2] = (arr_39 [i_8 + 2]);
                        arr_47 [i_2] [i_7] [i_8 - 1] [i_9] [i_9] = ((-(arr_28 [i_2] [i_7] [i_8] [i_2])));
                        arr_48 [i_2] [i_2] [i_2] [i_2] [i_9] = ((-(arr_21 [i_8 + 1] [12] [i_8 - 1])));
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_52 [i_2] [i_2] = ((((~(arr_10 [i_2]))) | var_6));
            arr_53 [10] [i_10] [i_10] = (arr_29 [i_2] [i_10] [i_10] [i_10]);
            arr_54 [i_2] = (arr_20 [i_2] [i_2] [1] [i_2]);
            arr_55 [i_2] [i_10] = (max(var_0, ((var_8 ? (65535 <= var_7) : var_2))));
            arr_56 [16] [i_10] [i_2] = ((((((min(var_7, (arr_1 [i_10])))) ? (arr_43 [i_2] [i_2] [i_10] [i_10]) : (min((arr_11 [14]), 0)))) - var_2));
        }
        for (int i_11 = 2; i_11 < 21;i_11 += 1)
        {
            arr_60 [i_2] [i_11 + 1] [i_2] = ((-((-(((arr_51 [i_2] [i_11] [i_11]) | var_9))))));
            arr_61 [i_2] [i_11 - 1] = var_9;
        }
    }
    var_10 = var_7;
    #pragma endscop
}
