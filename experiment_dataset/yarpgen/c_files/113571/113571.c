/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_2 ? 13292 : 1425800920));
    var_21 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_22 = (((arr_4 [i_0] [i_0]) ? ((var_8 ? (~var_2) : 3695638757342018602)) : -1425800903));
                var_23 = (var_3 ? (((((3695638757342018620 ? (arr_2 [i_1] [i_0]) : -826656330))) ? (((arr_4 [i_0] [i_1]) ? (arr_2 [i_0] [i_0]) : (arr_4 [i_0] [i_0]))) : (arr_1 [i_0]))) : var_19);
                var_24 = (((((1872286015 ? -var_9 : (var_3 || 0)))) - ((var_3 ? 4294967295 : (arr_4 [i_0] [i_0])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_7 [i_2] = var_17;

        /* vectorizable */
        for (int i_3 = 2; i_3 < 22;i_3 += 1) /* same iter space */
        {
            arr_10 [i_2] [i_2] [i_2] = (((arr_5 [i_3 + 1] [i_3 + 1]) * (((arr_5 [i_3] [1]) ? var_6 : 1425800923))));
            var_25 = -0;
            arr_11 [i_2] [i_3] [i_3] = var_0;
        }
        for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
        {
            var_26 = ((-(min((arr_5 [5] [5]), 826656332))));
            arr_15 [i_4] [1] [i_2] = (((((((17534370158835162299 / (arr_5 [i_2] [i_4 - 1])))))) * (arr_8 [i_4 - 2])));
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_27 += ((+(((arr_9 [i_5] [i_6]) ? (arr_9 [i_2] [i_7]) : (arr_9 [i_7] [i_6])))));
                        var_28 = ((arr_19 [i_7] [i_2] [i_2]) ? (((arr_9 [i_2] [i_2]) ? var_10 : (arr_9 [i_5] [i_7]))) : (arr_9 [i_5] [i_5]));
                        var_29 = arr_19 [11] [11] [i_6];
                        arr_22 [i_5] = (-2147483647 - 1);
                        arr_23 [i_5] [i_2] [i_5] [i_5] [i_5] = (arr_9 [i_2] [i_7]);
                    }
                    var_30 = ((var_0 || ((!(arr_8 [i_6])))));
                    var_31 ^= -1394;
                    var_32 = (((~-476202620153317900) ^ ((((-808308441 ? var_5 : var_15)) % -12546))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {

        /* vectorizable */
        for (int i_9 = 3; i_9 < 14;i_9 += 1)
        {
            var_33 = (arr_24 [i_9 - 2] [i_8]);
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 14;i_12 += 1)
                    {
                        {
                            var_34 = 3695638757342018627;
                            arr_36 [i_11] [i_11] [i_11] [i_8] = var_19;
                        }
                    }
                }
            }
        }

        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            var_35 -= ((2097152 ? -1697067949 : 7082827157091954979));
            arr_40 [i_8] &= (min((((arr_0 [i_8]) ? ((var_1 ? var_15 : (arr_13 [i_8] [i_8] [i_8]))) : (!var_10))), ((((((arr_12 [i_8]) ^ (arr_2 [i_8] [i_8])))) ? (arr_26 [i_8] [i_13]) : (arr_27 [i_8] [i_8])))));
            arr_41 [i_8] [16] = -1697067958;
        }
        arr_42 [i_8] = (max(((((var_17 - 3770225149) ? -4082349606931038975 : ((-4082349606931038975 ? (arr_39 [i_8] [i_8] [1]) : var_13))))), var_16));
        var_36 = var_14;
    }
    #pragma endscop
}
