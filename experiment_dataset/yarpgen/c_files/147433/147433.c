/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= max(24331, -9759);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        arr_12 [i_0] [17] [i_0] [i_0] [i_0] = (arr_2 [i_1 + 3] [14]);
                        var_15 += var_6;
                        arr_13 [i_0] [i_1 - 1] [i_2] [i_3] = var_8;
                        var_16 = var_7;
                        var_17 = var_5;
                    }
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            var_18 = (max(var_10, (min((arr_9 [i_1 - 2]), (max((arr_8 [i_0 - 1] [20] [i_2] [i_4]), var_13))))));
                            var_19 = (min((arr_5 [i_0] [i_4 - 1] [i_5 - 1]), 6068649842738904810));
                            var_20 = (min(13662753549225176329, 4783990524484375286));
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            var_21 += 2147483645;
                            arr_23 [i_0] [i_0] [i_1] [i_1] [i_0] [i_4 - 1] [2] = 1;
                        }
                        var_22 = var_4;
                        var_23 = var_6;
                        arr_24 [i_2] [i_2] [i_2] [i_1] [i_2] &= var_3;
                        var_24 = ((4783990524484375286 ? (min(((11838824154042280638 ? var_7 : var_8)), var_8)) : 254));
                    }
                    var_25 = var_2;
                    var_26 &= (min(109, (max((arr_0 [i_1 - 2] [i_2]), var_5))));
                    var_27 -= (min(((min(var_7, 23))), (min((arr_0 [i_1 - 1] [i_2]), var_0))));
                }
                var_28 |= (min(((4294967291 ? 254 : 6068649842738904810)), ((min((max(1498177288, 233)), ((1993784984 ? 11328 : 122)))))));
            }
        }
    }
    var_29 = ((((max(((max(var_2, 109))), var_10))) ? var_0 : var_5));

    /* vectorizable */
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            var_30 = (arr_16 [0] [i_8] [i_7 + 2] [0]);
            var_31 = (arr_21 [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_8]);
            arr_30 [i_7] [i_8] [13] = (((arr_22 [i_7] [i_8] [i_7] [i_7 + 3] [i_8 + 1]) ? 1 : (arr_22 [14] [i_8 + 1] [i_7] [i_7 + 3] [i_8 + 1])));
            var_32 = 3660871108;
            var_33 = (arr_14 [i_7] [20]);
        }
        arr_31 [i_7] = (arr_16 [6] [16] [10] [i_7]);
        arr_32 [i_7] = (arr_26 [i_7 + 2]);
        var_34 |= 4294967291;
    }
    for (int i_9 = 4; i_9 < 13;i_9 += 1)
    {

        for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
        {
            var_35 = -4011653647085363249;
            arr_38 [9] [i_9] [i_9 - 4] = (min(((max((-2147483647 - 1), 85))), (max(var_11, (arr_9 [i_9 - 4])))));
            arr_39 [i_9] = (max((max((arr_34 [i_9] [i_10]), var_10)), (arr_22 [1] [i_10] [i_9 + 3] [i_9 + 1] [i_9 + 3])));
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
        {
            var_36 = 1;
            var_37 |= -18894;
        }

        for (int i_12 = 1; i_12 < 12;i_12 += 1)
        {
            var_38 += var_7;
            var_39 = -1993784987;
        }
        for (int i_13 = 2; i_13 < 15;i_13 += 1)
        {
            var_40 *= var_11;
            arr_47 [i_9 - 4] [7] = (((arr_7 [i_9]) ? var_7 : ((var_2 ? (arr_40 [i_9 + 3] [i_9 + 3] [i_9 + 1]) : -24977))));
            var_41 = var_12;
            var_42 &= var_10;
        }
        var_43 = 146;
    }
    #pragma endscop
}
