/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_2] [12] [i_3] &= (!18);
                        var_15 = (((arr_4 [i_1]) ? (18446744073709551597 - 0) : (((+((107 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (arr_0 [i_0]))))))));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_16 &= (arr_6 [i_1] [i_0] [23] [i_4]);
                        var_17 = (((min((((arr_7 [20] [16] [i_2] [i_2]) ? (arr_6 [i_0] [i_0] [16] [16]) : 0)), (arr_5 [i_0] [i_1] [i_2] [i_4])))) ? var_11 : (var_9 < 1));
                        arr_14 [i_0] [i_0] [i_0] [i_2] [i_4] [i_4] = (((arr_0 [i_0]) ? ((((arr_4 [i_0]) < ((((arr_6 [5] [i_2] [i_1] [i_0]) ^ -870131743)))))) : 870131738));
                    }
                    arr_15 [i_2] [i_2] [i_2] [i_2] |= (-46 | 1);
                    var_18 = ((!((((((var_14 ? (arr_13 [i_0] [i_1]) : 1))) ? (var_6 >= 116) : (arr_2 [i_1] [i_2]))))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_19 ^= (((arr_5 [i_0] [i_1] [i_5] [i_5]) / (arr_5 [i_5] [i_2] [i_0] [i_0])));
                        var_20 = (arr_18 [i_0] [23] [i_0] [i_0] [i_0] [23]);
                        var_21 = ((var_7 * (var_10 & 1)));
                        var_22 = (((arr_12 [i_0] [7] [i_2]) + -1170950052));

                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_23 = (max(var_23, -94));
                            arr_22 [i_0] [i_1] [i_2] [i_5] [i_6] = (arr_2 [i_1] [i_6]);
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            var_24 = ((-122 ? (arr_20 [i_1] [i_2] [i_5]) : (arr_20 [i_0] [i_1] [i_2])));
                            var_25 = (8144015620239142441 >> (10906006892229226703 - 10906006892229226670));
                            var_26 = (max(var_26, (!var_13)));
                        }
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_27 = (arr_4 [i_0]);
                        var_28 = (((((((~(arr_4 [i_0]))) + (arr_29 [i_0] [i_0] [i_1] [i_1] [i_2] [i_8])))) ? ((var_5 ? (arr_21 [i_8] [i_2] [i_1] [i_1] [i_1] [i_0]) : (arr_21 [i_8] [i_8] [i_2] [i_1] [i_0] [i_0]))) : (!-4294967281)));
                        var_29 &= arr_2 [i_0] [i_0];
                        arr_30 [i_2] [i_2] [i_2] [i_2] [i_2] = (((((((arr_27 [i_0] [i_0] [i_2] [i_8] [i_0] [i_8]) ? -115 : ((8144015620239142453 ? 97 : (arr_1 [i_0] [i_0]))))) + 2147483647)) << ((((+(((arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_14 : var_11)))) - 4294967260))));
                        var_30 += ((((((arr_21 [i_1] [i_2] [i_1] [i_1] [i_0] [i_0]) ? (arr_21 [i_0] [i_0] [i_0] [i_1] [i_2] [i_8]) : (arr_21 [i_8] [i_2] [i_1] [i_1] [i_0] [i_0])))) ? (((arr_21 [i_8] [i_2] [i_1] [i_1] [i_1] [i_0]) ^ -97)) : (arr_21 [i_0] [i_1] [i_1] [i_8] [i_2] [i_1])));
                    }
                    arr_31 [i_0] [i_0] [i_0] = (((10 / (arr_23 [i_0] [i_1] [i_2] [i_1] [i_2] [i_2] [i_1]))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            {
                var_31 = ((!((((min((arr_20 [i_9] [i_10] [i_9]), (arr_37 [7] [7]))) | (arr_33 [i_9]))))));
                var_32 = (max(var_32, (arr_11 [i_10] [i_10] [i_9] [i_9] [i_9] [i_9])));
                var_33 = (((!2) ? -20218 : -870131738));
            }
        }
    }
    #pragma endscop
}
