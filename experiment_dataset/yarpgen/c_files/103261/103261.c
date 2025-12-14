/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = 1;
        var_10 = (~55317);
        var_11 = 6590;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_12 = (min(498950132, 3950340360861174730));
        arr_6 [i_1] = ((((min((arr_5 [i_1 - 1] [i_1 - 2]), (arr_5 [i_1 + 1] [i_1 - 1])))) ? 3950340360861174730 : (((((min(3796017175, var_6))) ? (arr_5 [i_1 + 2] [i_1 + 2]) : (arr_5 [i_1 - 1] [i_1 + 2]))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_13 = ((3950340360861174730 ? -82 : 1));
                            var_14 ^= arr_14 [i_1 + 1] [i_2] [i_2] [i_4 + 3] [i_5 + 3];
                            var_15 |= 0;
                        }
                    }
                }
            }
            arr_17 [i_2] [i_2] = (arr_5 [i_1 - 1] [i_1 + 2]);
            var_16 = -112;
        }
        for (int i_6 = 3; i_6 < 21;i_6 += 1)
        {
            var_17 = min(-18, -57);
            var_18 = ((((((((96 ? var_6 : 3796017185))) ? 498950108 : -1763641974))) ? (((((85 ? 0 : 31))) ? (min(235, -3950340360861174730)) : 3796017175)) : -22144229));
            var_19 = (((arr_7 [i_6 + 1]) <= ((min(-82, 21)))));
            var_20 = ((((((arr_9 [i_6 - 2] [i_1 + 1] [i_6 - 2]) * (arr_11 [i_6 - 2])))) | ((6384833288993988866 ? 78 : 3950340360861174730))));
            /* LoopNest 2 */
            for (int i_7 = 4; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        arr_27 [i_1] [i_7] = (arr_25 [i_1 - 1] [i_6 - 3] [i_6 - 2] [i_7] [i_7]);
                        var_21 = (max(var_21, (arr_14 [i_8] [i_8] [i_7] [i_6] [i_1])));
                        var_22 = (max(var_22, ((((max(127, (min(2199023255551, 0)))) == var_5)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_23 = (((arr_9 [i_9] [i_9] [i_9]) << ((((55716 + (arr_12 [i_9] [i_9] [i_9] [i_9]))) - 55815))));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 9;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 7;i_12 += 1)
                {
                    {

                        for (int i_13 = 1; i_13 < 8;i_13 += 1)
                        {
                            var_24 |= 3796017175;
                            arr_40 [i_9] [i_10] [i_9] = ((!(127 == 20855)));
                        }
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            arr_43 [i_10] = ((3950340360861174729 ? 160 : 498950109));
                            arr_44 [i_10] = 15841132614006429417;
                        }
                        for (int i_15 = 2; i_15 < 7;i_15 += 1)
                        {
                            arr_48 [i_9] [i_10] [i_10] [i_12 - 1] = var_9;
                            arr_49 [i_9] [i_10] [i_11] [0] [i_15 + 2] [i_15 + 1] [0] = (80 >= 3796017177);
                        }
                        var_25 *= ((~((~(arr_31 [i_9] [i_11] [i_9])))));
                    }
                }
            }
        }
        var_26 = (((arr_8 [22] [i_9]) ? (arr_24 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) : ((-2199023255552 ? 60 : var_7))));
        var_27 = (319223789 / -1);
        var_28 ^= 2937821885;
    }
    var_29 = (((((319223789 ? 1 : 107))) ? var_4 : 31));
    var_30 -= -11365;
    #pragma endscop
}
