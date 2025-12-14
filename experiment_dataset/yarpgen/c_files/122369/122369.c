/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = ((((-18 <= (~var_4))) ? ((max(((min(174, 243))), ((var_3 ? var_2 : var_7))))) : (((((var_2 ? (arr_2 [i_0] [i_1]) : 3))) ? 5624703761844720017 : 18446744073709551612))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_13 = ((917116286 || 238) ? (arr_6 [i_1] [i_1 - 1] [i_1 - 1] [i_2]) : 127);
                            var_14 = ((-(arr_6 [5] [i_1 + 1] [i_1 + 1] [i_2])));
                            var_15 = (max(var_15, (((var_5 ? (arr_5 [i_0] [i_1] [i_1 + 1]) : 247)))));
                        }
                        var_16 += (arr_9 [i_2] [i_3] [i_1 + 1] [i_3] [0] [i_2]);
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_17 = (arr_0 [i_5]);
                        var_18 &= (((arr_12 [i_1 + 1] [i_1] [i_1 - 1] [i_0]) ^ (arr_9 [i_1] [i_0] [8] [i_1] [i_1 - 1] [i_1])));
                        var_19 += (~-18446744073709551613);
                        var_20 = 5229090675449268439;
                    }
                    var_21 = (max(var_21, (((-1 - (15161201790241913153 >= 15))))));
                    var_22 = var_8;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_23 = (((arr_14 [i_1 + 1] [i_6 - 1] [i_6 + 3] [i_6]) ? (arr_14 [i_1 + 1] [i_6 + 2] [i_6 + 3] [i_7]) : -727963218));
                                var_24 = (arr_3 [i_7] [i_7]);
                                var_25 += (((arr_2 [i_7] [i_2]) >= (arr_5 [i_1] [11] [i_1 + 1])));
                            }
                        }
                    }
                    arr_19 [i_2] = 3298534883328;
                }
                var_26 = max((((((min(var_6, var_2))) && ((min(var_4, 4124938138)))))), var_8);
                /* LoopNest 3 */
                for (int i_8 = 4; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 15;i_10 += 1)
                        {
                            {
                                arr_27 [i_8] [10] [3] [i_9] [10] = 3593773299128122811;
                                var_27 = 23407133;
                                var_28 = (arr_25 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 + 1]);
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_11 = 2; i_11 < 15;i_11 += 1)
                {
                    var_29 = (arr_7 [i_0] [i_11] [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 - 2]);
                    var_30 = ((1969110536555679590 ^ (arr_8 [i_0] [i_0] [i_11])));
                    var_31 -= ((~(arr_6 [i_1 - 1] [i_1 + 1] [4] [i_0])));
                    var_32 -= (arr_21 [i_0] [i_1 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
