/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_8 != (-5496335724458721266 - var_3))) ? (((var_8 ? 4294967295 : 4294967271))) : (~1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_11 &= (var_2 - 8441);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            var_12 = (11 && var_1);
                            var_13 *= ((4294967282 ? 2 : 2349924076678552872));
                            arr_13 [i_0] [i_0] [i_1] [i_2] [i_3 + 2] [i_2] = 5344;
                        }
                        arr_14 [6] [i_2] [i_2] [i_3] [i_3] = 28;
                    }
                    arr_15 [i_2] [i_2] [i_2] [i_2] = ((((1451278884 ? (arr_10 [i_0] [i_1] [i_0]) : -23775)) ^ (((arr_3 [i_1] [i_0]) ? 8 : 3875))));
                }
            }
        }
        arr_16 [i_0] = (200 * 2015163470);
        arr_17 [i_0] = ((var_3 ? var_9 : 31));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] [i_5] = 3538404166;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_14 = (max(var_14, (((~(max(((var_0 ? 1152921504606846976 : 1792)), 0)))))));
                    var_15 = (!4294967278);
                }
            }
        }
        arr_28 [i_5] = var_4;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_16 = ((-(((arr_29 [i_8]) & 1))));
        var_17 = (min(var_17, 3357859814));
    }

    for (int i_9 = 3; i_9 < 15;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                {
                    arr_38 [i_9 - 2] [i_10] [i_9] = -var_7;
                    arr_39 [i_9] = (min((arr_35 [i_9 + 1] [i_9 - 1]), (((arr_35 [i_9 - 2] [i_9 - 3]) ? 17704 : 11929))));
                }
            }
        }
        var_18 += -721886393;

        /* vectorizable */
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            var_19 -= 16;
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    {
                        var_20 = (min(var_20, -1));

                        for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
                        {
                            var_21 = (~135107988821114880);
                            var_22 = (max(var_22, (((-(2592969994944089204 - 20923))))));
                        }
                        for (int i_16 = 0; i_16 < 16;i_16 += 1) /* same iter space */
                        {
                            arr_55 [15] [15] [15] [i_9] [1] = (!var_4);
                            arr_56 [i_12] [i_9] = (-7092 - -124);
                            arr_57 [11] [11] [i_9] [i_9] [i_13] [i_14] = 125;
                        }
                        var_23 += ((~(arr_52 [i_9] [3] [i_9 - 1] [i_9] [i_14] [i_14] [i_14])));
                        var_24 *= (~var_8);
                        var_25 = 1;
                    }
                }
            }
            var_26 = 229;
        }
    }
    #pragma endscop
}
