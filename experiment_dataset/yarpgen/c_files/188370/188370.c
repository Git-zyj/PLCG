/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_14 = (((arr_3 [6] [6] [6]) ? (min((arr_1 [i_0]), ((5413402943266220407 ? (arr_6 [12] [12] [i_2] [i_2]) : (arr_0 [5]))))) : (((((arr_1 [i_2]) + 2147483647)) >> (((min((arr_6 [0] [0] [i_2] [i_2]), -698052884)) + 698052886))))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_15 |= ((-((-(arr_8 [i_2] [i_1] [i_2] [i_2] [i_2])))));
                        var_16 = (min((arr_4 [i_0]), (arr_7 [i_3] [i_2] [i_1] [i_0])));
                        var_17 &= 1;
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_18 = ((!(arr_6 [i_0] [i_0] [i_0] [0])));
                        var_19 = ((~(min(-22110, var_11))));
                        var_20 = (min(1, (arr_2 [i_0] [i_0])));
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_21 = (max(var_21, (((-((~(arr_11 [i_0] [i_0]))))))));
                        var_22 = ((!6) ? (arr_10 [4] [i_5] [i_5] [i_5] [i_5]) : (arr_9 [1] [i_1] [i_2] [i_5]));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_23 = ((((((arr_15 [i_0] [1] [1]) ? (arr_10 [i_0] [i_1] [i_2] [i_6] [i_1]) : (arr_0 [i_1])))) < (arr_11 [i_0] [i_1])));
                            var_24 += (!1);
                            var_25 *= -var_6;
                        }
                        var_26 = (arr_0 [i_6]);
                    }
                    var_27 = (min(var_27, var_5));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_28 = (min(((((arr_10 [i_0] [i_0] [i_2] [i_8] [i_9]) ? (arr_10 [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_10 [i_9] [i_8] [i_2] [i_1] [i_0])))), ((((((arr_6 [i_0] [i_0] [i_2] [i_9]) ? 32768 : 9))) ? (arr_14 [i_0] [i_1] [i_0]) : (arr_20 [i_0] [i_1] [i_2] [i_2] [i_8] [i_9])))));
                                var_29 = (arr_12 [i_8]);
                            }
                        }
                    }
                }
                var_30 = ((-(((((arr_7 [i_0] [i_1] [4] [7]) ? (arr_8 [i_0] [i_0] [i_1] [i_0] [i_0]) : var_8))))));
            }
        }
    }
    var_31 = (min(((((var_6 ? var_11 : var_10)) * (1 > var_6))), (~var_11)));
    #pragma endscop
}
