/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = -6072053098922718062;
        var_14 -= (arr_3 [i_0]);
        var_15 *= (((247 * var_7) << (-6332821997022496739 + 6332821997022496744)));
        var_16 = ((!(arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_17 += (max(-6332821997022496739, 1147473405));
        var_18 = (((((min((arr_5 [i_1]), (arr_4 [i_1] [i_1]))))) | (~-4775838879643050081)));

        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            arr_8 [i_1] [i_1] [i_2] &= var_7;
            var_19 = (min(var_19, (((((min((arr_6 [i_1] [i_2 + 3]), (arr_6 [i_1] [i_2 + 3])))) ? ((min((arr_6 [i_1] [i_2 + 3]), (arr_6 [i_1] [i_2 + 3])))) : (arr_6 [i_1] [i_2 + 3]))))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_15 [i_4] [i_4] = (min((((arr_12 [i_1] [i_3 + 1] [i_2 + 3] [i_3 + 1]) ? (arr_12 [i_1] [i_3 + 1] [i_2 + 3] [i_4]) : (arr_12 [i_1] [i_3 + 1] [i_2 + 3] [i_4]))), ((max((arr_12 [i_2 + 1] [i_3 + 1] [i_2 + 3] [i_1]), (arr_12 [i_1] [i_3 + 1] [i_2 + 3] [i_4]))))));
                        var_20 = var_4;
                        var_21 |= ((0 / (arr_12 [i_1] [i_1] [i_1] [i_3 - 1])));
                        var_22 = (((arr_12 [i_1] [i_3 - 1] [i_1] [i_1]) >> (!17876097759207906889)));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_4] [i_4] [i_4] = (254 ? (((((arr_7 [i_5] [i_4]) || (arr_5 [i_5]))))) : (max((arr_10 [i_3 - 1]), (arr_10 [i_1]))));
                            var_23 += ((~((max((arr_4 [i_2 - 1] [i_2 - 1]), (arr_5 [i_3 - 1]))))));
                            arr_21 [i_4] = (min(((1 ? (((var_9 * (arr_14 [i_3 - 1] [i_3] [i_3 - 1])))) : -9114807633202041875)), ((((arr_7 [i_1] [i_3 + 1]) / ((max(0, 76))))))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_24 ^= (((3 ^ 0) ? (arr_23 [i_1] [i_2 + 2] [i_3 - 1] [i_4] [i_6] [i_6]) : (max(467055807, (((arr_6 [i_2] [i_2]) ? (arr_9 [i_1] [i_4] [i_3 - 1] [i_1]) : 29))))));
                            var_25 = (min(var_25, -29119));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_2 + 3] [i_3 - 1] [i_4] = (arr_17 [i_2] [i_2] [i_2 + 3] [i_2] [i_2 + 1] [i_2 + 2]);
                            arr_27 [i_4] [i_3 + 1] = ((~(((arr_10 [i_7]) ? 7 : 1))));
                            arr_28 [i_7] [i_2 + 1] [i_3 - 1] [i_3 + 1] [i_4] = 2669590573;
                        }
                    }
                }
            }
            var_26 = (~4294967295);
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_27 = (max(254, (min((arr_29 [i_1] [i_8] [i_8]), 13360959957965201090))));
            var_28 = (max(((((arr_23 [i_8] [i_8] [i_1] [i_1] [i_1] [i_8]) ? (arr_23 [i_8] [i_8] [i_8] [i_8] [i_1] [i_1]) : (arr_13 [i_8])))), (min((((var_9 ? var_2 : (arr_10 [i_1])))), (((arr_17 [i_1] [i_1] [i_1] [i_1] [i_8] [i_1]) / 2408965958953102887))))));
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_29 ^= 0;
            var_30 = (min(var_30, (((max(8085, 1))))));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 9;i_12 += 1)
                    {
                        {
                            arr_45 [i_1] [i_9] [i_10] [i_11] [i_10] = (((arr_16 [i_1] [i_9] [i_9] [i_9] [i_10]) > (arr_6 [i_1] [i_11])));
                            var_31 = ((min((30002 >= 0), 51)));
                        }
                    }
                }
            }
        }
        var_32 = (((max(((max(38, 0))), ((var_0 - (arr_44 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) - (arr_43 [i_1] [i_1] [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 10;i_13 += 1)
    {
        var_33 -= ((~(((arr_25 [i_13] [i_13] [i_13] [i_13] [11] [i_13]) ? 253 : (arr_37 [i_13] [i_13] [i_13])))));
        var_34 = ((6790878064226351251 ? 62 : 4294967295));
    }
    var_35 = var_8;
    var_36 = var_7;
    var_37 = (((min((0 * var_9), 2856915879091758032)) - (((~(min(var_7, var_5)))))));
    #pragma endscop
}
