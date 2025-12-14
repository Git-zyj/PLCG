/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_19 += var_5;
        var_20 = ((~(~var_7)));
        arr_3 [i_0] = ((65535 ? 30439 : (~35092)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 = ((((min((arr_13 [i_0] [i_3] [i_2] [i_1 - 1] [i_0]), var_1))) && (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])));
                                var_22 = (min(var_22, ((((((((~(arr_4 [i_4]))) / (var_8 - 30439)))) ? (arr_5 [i_2]) : ((((!21855) != ((min((arr_7 [i_1] [i_2] [i_3] [i_4]), var_5)))))))))));
                                arr_14 [i_0] [i_0] = (((arr_6 [i_0] [i_1 - 1] [i_0] [i_3]) << ((((65535 ? (0 ^ 30439) : ((max(var_4, var_2))))) - 30424))));
                                var_23 ^= arr_5 [i_4];
                            }
                        }
                    }
                    arr_15 [1] [i_1] [i_0] = arr_6 [i_0] [i_0] [i_1 - 1] [i_1 - 1];
                    var_24 = ((((var_10 ^ (arr_1 [i_1 - 1]))) | ((~(arr_1 [i_1 - 1])))));
                    arr_16 [i_0] [i_0] [i_1 - 1] [i_2] = (max(((((30439 ? 21102 : var_15)) != (arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1 - 1]))), (arr_2 [i_0])));
                    arr_17 [i_0] [i_1 - 1] [i_0] [i_0] = (min((((arr_11 [i_1 - 1] [i_1 - 1]) ? 58086 : (arr_11 [i_1 - 1] [i_1 - 1]))), var_5));
                }
            }
        }
        var_25 = (max(var_25, (((((max((min(65535, 56677)), 1))) | (min((32767 ^ 1), 1)))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_26 = (max(var_26, 35097));
        arr_22 [i_5] = (min(var_6, ((max(var_4, (arr_5 [8]))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_27 ^= var_5;
        var_28 = (((max(64500, 29717))));
        var_29 = ((~((min((arr_9 [i_6]), (max(35097, (arr_8 [i_6] [1] [i_6] [i_6]))))))));
    }
    for (int i_7 = 3; i_7 < 20;i_7 += 1)
    {
        arr_28 [i_7 - 3] [i_7] = ((((~((min((arr_26 [i_7] [i_7]), 35097))))) & (((arr_26 [i_7 - 1] [i_7]) ? (arr_27 [i_7]) : (24486 | 35096)))));
        arr_29 [i_7] = 20331;
    }
    var_30 += ((+((min((-32767 - 1), var_18)))));
    var_31 = var_7;
    #pragma endscop
}
