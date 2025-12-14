/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] = (min(((1421180356 ? 2484 : 1)), var_1));
                                var_16 = (((arr_2 [i_1]) ? ((min(-1499660990, 255))) : ((var_5 ? (arr_7 [i_0 - 2] [6] [i_4] [i_3 + 2]) : -29))));
                                var_17 = 535;
                            }
                        }
                    }
                }
                arr_13 [1] = ((((((32767 ? -622734227 : 10493)) <= 243)) && 1));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 18;i_6 += 1)
        {
            {
                var_18 = (min(var_18, (((((min((((arr_18 [9] [i_6 - 3]) ? 0 : var_8)), (((((arr_15 [10] [i_6]) + 2147483647)) << (((((arr_15 [i_6 - 2] [i_5]) + 3993)) - 7))))))) ? ((((arr_16 [i_5 + 1]) ? (arr_15 [i_5 - 4] [i_6]) : 1048575))) : (((((32 ? 26 : -109))) ? (arr_18 [i_6] [i_6 - 2]) : (min(5588567187769785266, var_14)))))))));
                var_19 = (max((((arr_16 [i_5]) ? ((230 ? (arr_18 [i_5 - 2] [i_5 + 1]) : 26)) : (((!(-127 - 1)))))), (arr_15 [i_6] [i_5 + 1])));
            }
        }
    }

    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        arr_22 [i_7] [10] = (min((max((max(var_0, var_11)), ((min((-127 - 1), (arr_17 [i_7])))))), (arr_21 [i_7] [i_7])));
        var_20 = (max(var_20, (((((-(arr_16 [i_7]))) * ((-10493 / (((arr_14 [i_7]) * 255)))))))));
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
    {
        arr_27 [i_8] = ((26 ? ((1 ? 127 : 6999495055548659374)) : -24475));
        var_21 = (arr_14 [i_8]);
        var_22 = var_15;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        arr_36 [i_11] = (max((var_14 + -58), ((((max(var_12, (arr_15 [i_8] [i_8])))) ? (max((arr_25 [i_9]), var_6)) : ((((arr_30 [i_8] [i_9] [i_11]) ? var_12 : (arr_35 [i_11] [i_11] [i_10] [i_9] [i_8]))))))));
                        var_23 = (arr_24 [i_9] [i_10]);
                        var_24 = (max(var_24, (((229 > (~170))))));
                        var_25 = ((-24476 ? ((var_7 ? (arr_30 [i_10] [i_9] [i_8]) : (arr_30 [i_9] [i_10] [8]))) : ((((var_1 - (arr_17 [i_8])))))));
                    }
                    var_26 -= (max((((arr_25 [i_8]) ? (arr_19 [i_9]) : var_4)), (((((arr_24 [i_9] [i_10]) < (arr_26 [i_8])))))));
                }
            }
        }
    }
    var_27 = ((((((((-127 - 1) ? -22 : 83)) * var_14))) ? (-9150725487882090251 || var_8) : (min(127, 2087511167))));
    #pragma endscop
}
