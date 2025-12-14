/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(((min(var_2, var_3))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 |= 36203;
            var_15 = ((!(arr_1 [16])));
            var_16 += ((-((~((var_6 ? var_8 : (arr_2 [i_0] [i_1])))))));
        }
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_17 = ((((min((arr_4 [i_2 + 2] [3]), (~29353)))) ? var_4 : (((var_3 % (arr_4 [i_0] [i_2 - 1]))))));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_18 &= (max(((~(((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [12] [3]) : var_5)))), (max((arr_3 [i_2 + 2] [i_2]), ((0 ? -1 : 29326))))));
                    var_19 = ((((((36203 > var_11) ? var_1 : (max(29333, var_2))))) ? -0 : ((~(arr_3 [i_2 + 1] [i_2])))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_20 = ((var_9 + (arr_9 [i_0] [i_2 + 1] [i_2] [i_2] [15] [i_2 + 2])));
                    var_21 = ((var_2 ? (arr_0 [i_2]) : (arr_5 [i_0] [i_2 + 1] [i_0])));
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_22 = ((-(((arr_4 [i_0] [i_2]) << ((((var_0 ^ (arr_3 [i_0] [i_2 + 2]))) - 4995305268524775392))))));
                    var_23 &= (arr_4 [i_0] [i_3]);
                }
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    var_24 += var_2;

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_25 = 2770073579;
                        var_26 = ((0 ? (~var_10) : var_7));
                        var_27 = (var_7 * var_4);
                        var_28 += (!(arr_11 [i_8] [i_2 - 1] [i_7]));
                        var_29 |= ((var_6 ? 216188382 : 54));
                    }
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        var_30 = ((!((min(128, (arr_9 [i_0] [3] [i_3] [i_7] [i_9 + 1] [i_3]))))));
                        var_31 = (((arr_10 [i_2] [i_2 - 1] [i_2] [i_7 + 1] [i_2]) ? (((((29332 ? var_7 : var_2))) ? (~58) : var_2)) : var_3));
                    }
                }
                var_32 = var_1;

                for (int i_10 = 3; i_10 < 17;i_10 += 1)
                {
                    var_33 = (((~var_3) ? ((max((arr_10 [i_10 - 2] [i_10 - 2] [i_0] [i_3] [7]), (arr_10 [i_10 - 2] [i_10 - 2] [i_3] [i_10] [i_2 - 1])))) : ((min(var_9, (arr_10 [i_10 - 2] [i_2] [i_3] [i_10 + 2] [i_10]))))));
                    var_34 = ((-((min(var_4, ((0 <= (arr_17 [i_0] [i_0] [i_2 + 2]))))))));
                }
                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    var_35 = ((((((arr_24 [i_0] [i_2 + 1]) >> (((arr_24 [i_0] [i_2 + 2]) - 27847))))) ? (max(((var_7 ? var_12 : (arr_14 [i_0] [0] [i_2] [i_3] [i_11] [i_11]))), ((~(arr_7 [i_0]))))) : var_8));
                    var_36 = 36190;
                    var_37 = var_0;
                }
                var_38 ^= -662091540;
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 15;i_13 += 1)
                    {
                        {
                            var_39 = (((~0) ? ((0 ? 9223372036854775786 : 1)) : (arr_16 [i_0] [i_2] [0] [i_12] [14])));
                            var_40 = ((((max(9223372036854775786, 1)) - (((max((arr_11 [1] [i_3] [i_0]), -15)))))));
                            var_41 = (min(((((min(var_12, var_6))) * (arr_10 [14] [13] [i_2 - 1] [i_2] [1]))), (arr_31 [i_0] [i_2] [i_0] [i_12])));
                            var_42 = ((32767 ? -9223372036854775787 : (!var_3)));
                        }
                    }
                }
            }
        }
        for (int i_14 = 1; i_14 < 1;i_14 += 1)
        {
            var_43 = ((var_3 ? (((arr_21 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1]) ? (arr_21 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1]) : var_6)) : ((((!((max((arr_25 [1] [i_14] [i_0] [1]), var_10)))))))));
            var_44 = (1 | -61);
        }
        var_45 = (~0);
    }
    #pragma endscop
}
