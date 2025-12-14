/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (3836303913369439228 + 35511);
        arr_3 [i_0 - 4] = ((65527 + (arr_0 [i_0 + 1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((var_6 ? (var_4 + 65527) : ((((!(arr_4 [i_0 - 2]))))))))));

                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        var_21 = var_7;
                        var_22 = (((arr_6 [i_0 - 3] [i_2 - 1] [i_3 + 1]) + (arr_4 [i_0 + 1])));
                        var_23 = 1;
                        var_24 = (arr_6 [i_2 - 1] [i_2 - 1] [i_2]);
                    }
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        arr_15 [i_4 - 2] [i_4 - 1] [i_2] [i_4] [i_4 + 3] = (arr_10 [i_0 - 3] [i_2 - 1]);
                        var_25 *= var_2;
                        var_26 = (1 ? (arr_9 [i_4 - 2]) : (3836303913369439228 / var_10));
                        arr_16 [i_0 - 1] [i_0 + 1] [i_2] [i_0] [i_0 + 1] = ((var_13 * (!1)));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_27 ^= (1 + -1601612515772528902);
                        arr_19 [i_0] [i_2] [i_0] [i_0] = (arr_12 [i_0] [i_0] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_25 [i_0 - 1] [i_1] [i_2] [i_6] [i_7] = (var_1 ? (~var_13) : ((((!(arr_22 [i_0 - 1] [i_0 - 4] [i_0 - 1] [i_0 - 4] [i_0] [i_0 - 2] [i_0 - 4]))))));
                                arr_26 [i_0 - 2] [i_2] [i_6] [i_7] = (arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                                var_28 = var_17;
                            }
                        }
                    }
                }
            }
        }
        var_29 = ((var_2 * (arr_9 [i_0 + 1])));
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        arr_30 [i_8] = ((((((((var_13 / (arr_23 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))) ? (((arr_0 [i_8]) ? (arr_20 [i_8] [i_8]) : (arr_10 [i_8] [i_8]))) : (~var_4)))) ^ (0 * var_17)));

        /* vectorizable */
        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
        {
            var_30 = (((arr_27 [i_9] [i_9]) ? 17989489365904273248 : (arr_31 [i_8] [i_8])));
            var_31 = ((var_9 ? (arr_24 [i_8] [i_8]) : (arr_24 [i_8] [i_8])));
            var_32 -= var_4;
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
        {
            var_33 = var_6;
            arr_37 [i_10] = (((max((((-(arr_5 [i_8] [i_8] [i_8])))), (min(var_14, var_18))))) ? (((min((min(var_3, 33536)), var_1)))) : var_5);
            arr_38 [i_8] [i_8] [i_8] = var_1;
            var_34 = (((((var_6 ? 4866 : 45320))) ^ (((((538780504523253248 ? var_7 : -1)) * ((((!(arr_35 [i_8] [i_10]))))))))));
        }
        for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
        {
            var_35 = (max(((+(((arr_24 [i_8] [i_11]) * 6075085578662396102)))), ((max(-9223372036854775793, 18)))));
            var_36 &= (min((((3777857944652292886 ^ -12) ? (arr_7 [i_8] [i_11]) : ((var_16 ? var_12 : var_0)))), ((((min(var_12, 8527274460394058557))) ? (9223372036854775796 / var_17) : (var_15 + 1978489853196087589)))));
        }
        var_37 = (min(((((arr_40 [i_8]) * -26))), (min((arr_1 [i_8] [i_8]), (arr_1 [i_8] [i_8])))));
        var_38 = ((43473 * (((((arr_33 [i_8] [i_8]) ? var_17 : var_12)) * (arr_13 [i_8])))));
    }
    var_39 = var_12;
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 1;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 16;i_13 += 1)
        {
            {
                var_40 -= (!1007890880);
                arr_47 [i_12] [i_13 - 1] [i_13] = (~9006649498927104);
                var_41 = (max((!23588), var_17));
                var_42 ^= 26;
                var_43 = (((((arr_41 [i_12 - 1] [i_12 - 1]) + (min(18404945770900913751, (arr_18 [i_13] [i_13] [i_13 - 2] [i_13] [i_13])))))) ? (arr_22 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_13] [i_13 - 1]) : ((var_14 * (arr_32 [i_12 - 1] [i_13 + 1] [i_13 - 1]))));
            }
        }
    }
    #pragma endscop
}
