/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (arr_2 [i_1])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = arr_0 [i_2];
                                arr_13 [i_4] [i_1] |= (((arr_7 [i_0] [i_0] [i_0]) ? (arr_7 [9] [i_3] [9]) : (arr_7 [i_0] [i_0] [i_0])));
                                arr_14 [i_2] [i_1] [i_1] [i_2] [i_1] [i_4] = (arr_8 [i_2]);
                            }
                        }
                    }
                    arr_15 [i_2] [i_1] [i_2] = ((((((arr_8 [i_2]) > (arr_5 [i_2] [i_2])))) + (arr_4 [13] [13] [i_2])));
                    var_21 -= (((arr_10 [i_2] [5] [i_0] [i_0]) ? (arr_6 [16] [16] [i_2] [i_2]) : (arr_0 [i_1])));
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_22 = (max(var_22, (arr_7 [i_1] [i_5] [i_5])));
                        var_23 = (min(var_23, (arr_6 [i_0] [i_0] [i_5] [i_0])));
                        arr_22 [6] [i_0] [i_6] [6] [i_6] [i_6] = 1;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {

                        for (int i_8 = 3; i_8 < 23;i_8 += 1)
                        {
                            var_24 += (((arr_7 [i_0] [i_1] [i_7]) + (-1512962858 + 1512962857)));
                            arr_28 [i_7] [i_7] [i_7] [i_7] [i_7] = (((arr_19 [i_0] [i_1] [i_5] [i_1] [4]) ^ (((arr_5 [i_1] [i_1]) / (arr_19 [i_0] [i_1] [i_5] [i_7] [i_7])))));
                        }
                        arr_29 [i_0] [i_1] [i_5] [i_1] = (((min(((((arr_4 [i_5] [i_1] [i_0]) && (arr_21 [i_1] [i_1])))), (((arr_25 [i_0] [i_0] [i_5] [i_0] [i_7] [i_7]) ? (arr_27 [i_7] [i_1] [i_0]) : (arr_26 [i_0] [i_7] [i_0] [i_7] [i_0])))))) ? (arr_2 [21]) : (((arr_8 [i_0]) ? (arr_21 [i_0] [i_0]) : (arr_5 [i_1] [i_1]))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        var_25 = (((arr_5 [i_1] [i_9]) || (arr_5 [i_9] [i_1])));
                        var_26 &= ((6474 ? -18764 : 1512962857));
                        var_27 = (((arr_25 [i_0] [i_1] [i_5] [i_5] [i_0] [i_0]) % (((arr_20 [i_0] [i_1] [i_0] [i_9]) / (arr_25 [i_0] [i_1] [i_5] [i_0] [i_0] [i_0])))));
                    }

                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_28 = ((arr_18 [i_0]) ? (arr_18 [i_10]) : (((arr_24 [i_1] [i_5]) ? (arr_24 [i_1] [0]) : (arr_24 [i_1] [i_5]))));
                        var_29 = -1512962858;
                    }
                }

                /* vectorizable */
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    var_30 += 23666;
                    var_31 += (arr_20 [i_0] [i_0] [i_1] [i_11]);

                    for (int i_12 = 3; i_12 < 20;i_12 += 1)
                    {
                        arr_40 [i_0] [i_0] [i_1] [i_11] [i_12] [i_12] = (arr_10 [i_0] [i_1] [i_12 - 2] [5]);
                        arr_41 [i_0] [i_1] [i_1] [i_12] = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        var_32 = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_11]) : (arr_1 [i_0] [i_13])));
                        var_33 &= (arr_9 [i_0] [i_0] [i_0] [i_11] [i_0]);
                        var_34 = (arr_36 [i_0] [i_1] [i_11] [i_1]);
                    }
                }
            }
        }
    }
    var_35 = var_10;
    var_36 = ((-32745 ? 139 : 0));
    var_37 -= var_6;
    #pragma endscop
}
