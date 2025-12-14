/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -24563;
    var_14 = (min(((((13868 && 398349897) && var_1))), (((!var_1) ? var_4 : (var_12 && 24563)))));
    var_15 = (!0);
    var_16 = (((max(var_12, var_5))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] |= ((((arr_2 [i_0]) ? ((var_7 ? (arr_7 [i_1] [i_1]) : var_5)) : -4928418967444601218)) - 75);
                    arr_9 [i_2] [i_1] = ((!(((((min(-2694633512246488622, (arr_7 [i_2] [i_1])))) ? (var_9 || var_11) : (arr_1 [i_0 - 2] [i_0 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_17 [i_2] [i_2] [i_2] [1] [i_4] = (min(((252 ? (!var_1) : (max((arr_11 [i_3] [i_2] [i_1] [i_0]), (arr_12 [i_1] [i_1] [i_3] [10]))))), (((249 / ((min(var_1, var_7))))))));
                                arr_18 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] [21] = ((-((9223372036854775807 % (arr_0 [22])))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_17 *= ((var_12 ? (arr_2 [i_0]) : ((-((4294967277 ? (arr_11 [i_0] [i_1] [i_5] [i_1]) : (arr_6 [i_0] [12] [i_5])))))));
                    arr_21 [i_5] = (((max((~0), -24573)) / (((((-24563 + 2147483647) << (var_3 - 174)))))));
                }
                for (int i_6 = 4; i_6 < 21;i_6 += 1)
                {
                    var_18 = (arr_10 [i_0] [i_1] [i_6] [i_1] [i_0 + 4] [i_1]);

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_19 = (min(var_19, (((-(arr_29 [i_6] [i_6] [8] [i_6 - 1] [i_6 - 2]))))));
                            var_20 = var_10;
                            var_21 = (((((246 ? (!231) : var_11))) ? ((-(arr_10 [i_0] [i_1] [i_0] [21] [i_1] [i_8]))) : ((max((arr_10 [i_0] [i_0] [i_0] [10] [i_0] [i_0 + 4]), (max(var_12, (arr_24 [i_8] [i_8] [i_8] [i_8]))))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            var_22 *= (((arr_4 [i_0] [i_1]) & (arr_4 [i_6 + 2] [i_9])));
                            arr_33 [i_9] [i_0] = arr_16 [i_0] [i_0] [i_6 - 1] [i_7] [i_0] [i_9] [i_0];
                            var_23 = var_4;
                            var_24 = (min(var_24, -5036934061662814128));
                        }
                        var_25 *= (((var_2 & ((min(-1222, (arr_5 [i_1] [i_7])))))));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_38 [i_0 - 3] [i_10] [i_0 - 3] [19] [i_0] = ((2694633512246488648 % (~24)));
                        var_26 = (arr_25 [i_6 + 1] [i_1] [i_0]);
                    }
                }
                var_27 = (((((min((arr_19 [i_0] [i_0]), (arr_24 [i_0 + 1] [i_1] [i_1] [i_1]))))) ? (((max(var_12, 2694633512246488607)))) : (((!(((var_2 ? var_4 : (arr_27 [i_0 + 1] [i_1] [i_1] [i_1])))))))));

                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    var_28 = (((((max(127, 1)) % var_4)) <= (((~(arr_39 [i_11] [i_1] [i_0 + 4] [i_0 + 4]))))));
                    var_29 = (max((((max(16383, (arr_35 [i_0] [i_0] [i_1] [i_0]))) % (((var_0 ? var_1 : var_3))))), (((~(max(var_8, var_3)))))));
                }
            }
        }
    }
    #pragma endscop
}
