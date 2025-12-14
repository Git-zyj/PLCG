/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((1 ? 1 : 1)))));
                var_18 = (max(var_18, ((max((((-((var_7 ? (arr_3 [15] [i_1 + 1] [i_1 + 1]) : 1))))), (((arr_4 [i_0] [4] [i_1 + 1]) ? var_14 : (arr_4 [i_0] [i_1 + 1] [i_1 + 1]))))))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_19 += (((arr_5 [8] [i_1 + 1] [8]) & (((arr_5 [14] [i_1 + 1] [14]) ? 1 : (arr_5 [18] [i_1 + 1] [18])))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_2] = ((-(((var_9 + 1) ? (((arr_9 [i_0] [i_0] [i_2] [14]) ? (arr_7 [i_0] [i_0] [i_0]) : var_1)) : ((((arr_4 [i_0] [i_0] [i_0]) ? var_1 : (arr_9 [i_3] [i_3] [i_3] [i_3]))))))));
                        var_20 = (max(var_20, (((1 & (1 | 1))))));
                        arr_11 [i_2] [i_2] [i_2] [i_3] = ((~(~1)));
                    }
                    var_21 = (min(var_21, (((1 << (var_10 + 178707480))))));
                    var_22 = ((~(var_4 * var_4)));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] = (arr_7 [i_1] [i_1] [9]);
                    arr_15 [i_0] [i_1] [i_4] = ((~(arr_4 [i_4] [i_0] [i_0])));
                    arr_16 [i_0] [i_0] = ((var_6 ? 1 : 32767));
                    arr_17 [i_0] [i_0] [1] [i_4] = (!var_2);
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    arr_20 [i_0] = (((arr_1 [i_1 + 1]) ? ((((var_12 + (arr_0 [i_1 + 1] [i_5]))))) : (max(((var_5 ? var_14 : var_16)), (var_9 - 1)))));
                    var_23 = (max((((arr_13 [i_1 + 1] [i_5] [i_5] [i_1 + 1]) ? (arr_13 [i_1 + 1] [i_1 + 1] [i_5] [i_5]) : (arr_13 [i_1 + 1] [i_5] [i_5] [i_5]))), 16948));
                    var_24 = (((max((((-(arr_1 [i_5])))), var_14)) * (((2709113243 ? (arr_2 [i_1 + 1] [i_1 + 1]) : var_9)))));

                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            var_25 = (!1);
                            var_26 += (var_9 + var_14);
                            var_27 = (max(var_27, (!var_16)));
                        }
                        var_28 = (arr_6 [i_0] [i_6 - 1] [9] [i_6]);
                    }
                }
                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    var_29 = ((~(arr_24 [i_0] [i_0] [9])));
                    var_30 = (((~(min(var_9, var_1)))));
                    var_31 = (((((+(((arr_12 [i_0]) ? var_6 : (arr_3 [i_0] [i_1 + 1] [i_8])))))) ? ((min((max((arr_2 [0] [i_1]), (arr_6 [5] [i_1 + 1] [i_1 + 1] [i_0]))), ((((arr_2 [i_0] [i_1 + 1]) ? (arr_4 [i_0] [i_1 + 1] [i_8 - 2]) : var_12)))))) : (arr_24 [1] [i_1] [i_0])));
                    arr_29 [i_0] = ((((((((1 ? (arr_3 [i_0] [18] [16]) : 5459424474322180359))) ? (~9223372036854775807) : (((arr_8 [i_0] [i_0]) ? -9223372036854775803 : (arr_28 [i_0] [i_0] [i_8 - 1] [i_8 - 1])))))) ? ((~(max(60243, 536870848)))) : -16));
                }
            }
        }
    }
    var_32 = var_13;
    #pragma endscop
}
