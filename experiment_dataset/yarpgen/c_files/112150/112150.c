/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_10 [i_0] [i_3] [i_2] [i_1] [i_0] = ((((((32 ? 111 : 156)) - (arr_3 [i_0]))) ^ 172));
                        arr_11 [i_0] [i_1] [i_2] [i_3] [3] = ((var_0 ? var_5 : (arr_0 [i_3])));
                    }
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_0] [9] [7] = ((-(min(((var_4 ? 99 : -31252)), 231))));
                            var_19 = (max(var_19, (((max((((arr_5 [6] [i_1] [13]) ? (arr_0 [i_5]) : (arr_1 [i_0]))), -103)) ^ ((((249 * 1) ? (-78 >= 1207632782) : ((min((arr_12 [i_2]), -127))))))))));
                            var_20 = (!-1178546085);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_20 [i_2] [i_4 - 1] = -33;
                            arr_21 [i_0] [i_1] [13] [7] [i_4] [i_6] = max((((!((min(-30393, var_10)))))), (1 == var_7));
                            arr_22 [i_6] = (var_14 && ((min(var_3, 122))));
                            var_21 = (((((((~-126) <= ((((arr_5 [i_0 - 1] [i_4] [i_2]) < -10586))))))) >= (max(((4294967295 ? 1576170317 : (arr_13 [i_4]))), 30393))));
                            arr_23 [i_0] [9] = var_17;
                        }
                        arr_24 [i_0] [i_0] [i_1] [i_4 - 1] [i_4] [i_2] = (min((!-20937), (((arr_3 [i_4 - 1]) & (arr_3 [i_4])))));
                        var_22 = (((arr_12 [i_0]) ^ 8623));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_27 [i_0] [i_0] = ((32761 ^ (max(-8633, (((arr_15 [6] [i_0 + 1] [i_1] [i_2] [i_7] [i_7] [i_7]) ? var_9 : 157))))));
                        arr_28 [1] [i_2] [1] = ((((max((arr_15 [i_7] [i_1] [i_7] [i_2] [i_1] [i_1] [i_0]), (-127 - 1)))) ? ((min(253, (arr_15 [i_0] [i_1] [10] [1] [2] [12] [i_0])))) : (((0 >= (arr_6 [12] [i_2] [i_7]))))));
                        var_23 = 44;
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_35 [10] [i_1] [i_1] [2] [i_1] = ((~(!0)));
                                var_24 = (min(((-((-(arr_29 [i_0] [12] [i_0] [7]))))), (((((min(-47, -8))) < var_13)))));
                                arr_36 [i_0] [i_1] [0] [8] [i_9 + 2] = ((38 & ((((((arr_4 [i_0] [i_8]) ? var_9 : 16082)) < -1)))));
                                var_25 = ((((((arr_9 [i_0] [i_1]) || ((min(-123, var_7)))))) & (!-70)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = 171;
    #pragma endscop
}
