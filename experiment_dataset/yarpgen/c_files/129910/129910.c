/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (~9139192419114316609)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_21 -= var_10;
            arr_5 [i_0] |= arr_1 [2] [i_1];
        }
        var_22 *= (arr_3 [i_0] [i_0] [i_0]);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_17 [i_2] [i_2] [i_3] [i_2] [i_2] = (arr_10 [i_2]);
                        var_23 = (arr_10 [i_2]);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_24 = (arr_1 [i_3] [i_6]);
                        var_25 = (arr_16 [i_2] [i_2] [i_2] [i_6]);
                        var_26 = (((arr_12 [i_2] [i_4] [i_2]) ? (arr_13 [i_2] [i_2] [i_2]) : (arr_0 [6])));
                        arr_21 [i_2] [i_2] [i_4] [i_3] = ((var_14 - (arr_19 [i_2] [i_3] [i_4] [i_6])));
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_27 = ((((min((arr_2 [i_4]), (arr_2 [i_2])))) ? (((~(arr_1 [i_3] [i_3])))) : (((arr_16 [i_2] [i_2] [i_2] [i_2]) ^ var_6))));

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_27 [0] [i_3] [i_4] [i_2] [0] = var_0;
                            arr_28 [i_2] [i_3] [i_3] [i_3] [i_3] [16] [i_3] = (((min(-5069933201888428426, -2)) ^ (arr_26 [i_2] [8] [i_7] [i_8])));
                        }
                        var_28 = (min(44544, 2161263401290672038));
                        var_29 = (max(var_29, var_14));
                        arr_29 [i_2] = (((~-2161263401290672021) ^ (min(((24654 ? (arr_16 [i_2] [i_3] [i_2] [14]) : 2161263401290672031)), (arr_18 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))));
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        arr_33 [i_2] [i_3] [i_4] [i_2] [i_4] = 2161263401290672020;
                        var_30 = (arr_8 [i_2]);
                        var_31 -= (arr_20 [i_9] [i_3] [i_2]);
                        var_32 = (max(var_32, var_4));
                        var_33 = (((arr_16 [7] [i_2] [i_2] [i_2]) ? (arr_24 [i_2] [i_3] [6] [i_2]) : (arr_32 [i_2] [i_2] [i_4] [2])));
                    }
                    arr_34 [i_2] [i_3] [i_2] = ((~(-2161263401290672039 ^ -22859)));

                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        var_34 = (arr_13 [9] [i_2] [i_4]);

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_35 = -6555306628245154254;
                            var_36 = 157;
                        }
                    }
                    var_37 = (((min((((arr_15 [i_2] [i_2] [i_3] [i_4]) % var_4)), -2161263401290672037)) % (((min((arr_22 [i_2]), (arr_22 [i_2])))))));
                }
            }
        }
        arr_39 [i_2] = ((((min((((arr_1 [i_2] [i_2]) ? (arr_6 [i_2]) : (arr_13 [i_2] [i_2] [i_2]))), (arr_23 [4] [i_2] [i_2] [i_2])))) >= var_4));
        var_38 = (arr_7 [i_2] [i_2]);
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        var_39 = (arr_2 [i_12]);
        arr_43 [i_12] [i_12] = (arr_14 [i_12] [i_12] [i_12] [i_12]);
    }
    #pragma endscop
}
