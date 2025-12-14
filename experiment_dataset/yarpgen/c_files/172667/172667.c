/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_1));
    var_21 = (max((!var_17), 18446744073709551615));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        var_22 = (-64 * 0);
                        arr_8 [i_0] [i_0] [i_2] = (((arr_2 [i_0 - 2] [i_1 - 1] [i_2]) << (((arr_2 [i_0] [i_1] [i_2]) - 23937))));
                        var_23 = arr_6 [i_0];
                    }
                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        var_24 = arr_1 [i_0] [i_1];
                        var_25 = (((arr_3 [i_0]) ? 32755 : (arr_3 [i_0])));
                        arr_11 [i_0] [i_2] [i_0] [4] = (76 ^ -64);
                        var_26 = (arr_7 [i_0 - 3] [i_0 - 1] [i_0] [i_4 - 2]);
                    }
                    var_27 = (arr_5 [1] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_28 = ((-(arr_13 [i_5 + 1] [i_5] [i_5] [i_6 - 1] [i_6])));
                                var_29 = 1;
                                var_30 = (((arr_7 [i_1 - 1] [i_6 - 1] [i_0] [i_5]) + (arr_7 [i_1 + 1] [i_6 + 1] [i_0] [i_5])));
                            }
                        }
                    }
                }
            }
        }
        arr_17 [i_0] [i_0] = 155;
        var_31 = (max(var_31, ((((arr_9 [8] [i_0 - 1] [i_0] [8]) ? 17109 : ((var_14 ? (arr_5 [i_0] [i_0] [13]) : 58)))))));
        arr_18 [i_0] = arr_1 [i_0] [i_0];
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_32 = ((arr_20 [i_7]) ? (arr_20 [i_7]) : (arr_19 [i_7]));
        var_33 = 88;
    }
    /* LoopNest 3 */
    for (int i_8 = 3; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_34 += (-(arr_28 [i_10]));

                    for (int i_11 = 3; i_11 < 11;i_11 += 1)
                    {
                        var_35 = (min((((arr_27 [i_8 + 1]) ? (arr_12 [i_9] [i_9]) : (arr_27 [i_8 + 1]))), (((arr_27 [i_8 + 1]) & (arr_27 [i_8 + 1])))));
                        arr_35 [i_9] [12] [i_9 + 2] [i_9] = (((min(-17126, (arr_28 [i_9])))) ? ((((max(-64, 60171))) ? (arr_7 [i_8] [i_9] [i_9] [i_10]) : (((arr_19 [i_8]) ^ 7168)))) : (max((arr_26 [6]), (5365 | 22119))));
                    }
                    for (int i_12 = 1; i_12 < 10;i_12 += 1)
                    {
                        var_36 = (max(var_6, (arr_3 [i_9])));
                        var_37 = (max(var_37, ((((arr_39 [3] [i_12 + 1] [i_12] [i_12] [i_12] [6]) ? (((((var_7 > (arr_9 [i_8] [i_9] [8] [i_10]))) ? (((var_1 > (arr_0 [i_10])))) : (arr_0 [i_10])))) : (max(((min(var_4, (arr_25 [i_10] [i_10])))), 18446744073709551615)))))));
                    }
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        arr_44 [i_13] [i_9] [i_9] [i_8 + 1] = (max((max(64, 4099836483)), 0));
                        arr_45 [i_8] [i_9] = ((((((arr_37 [i_8] [i_9] [i_9] [i_13]) > (arr_23 [i_8 - 2])))) + 23117));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        var_38 = (((((arr_19 [i_8]) ? (arr_14 [i_8] [19] [8] [i_14]) : (arr_0 [i_9])))) ? 4099836483 : ((((arr_13 [i_14] [i_10] [i_9] [i_8] [i_8]) ? (arr_24 [i_8]) : (arr_26 [i_10])))));
                        var_39 = ((29320 ? (arr_20 [i_8 - 2]) : (arr_20 [i_8 - 3])));
                    }
                    var_40 = (((195130813 <= -691184680295240829) < (arr_23 [i_8])));
                }
            }
        }
    }
    #pragma endscop
}
