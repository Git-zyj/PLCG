/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-var_18 ? ((var_7 ? var_1 : (32758 & var_6))) : var_16));
    var_20 *= 66;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    var_21 = ((!((max((arr_1 [i_0]), (arr_3 [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_22 = (arr_4 [i_1 + 1] [i_1 + 2]);
                                arr_12 [i_0] [i_0] [i_0] [0] [i_4] = ((((-(arr_4 [i_1 + 3] [i_1]))) == (((4096 ? -4097 : 32758)))));
                                var_23 -= (arr_9 [i_4] [i_3] [i_0] [i_1] [i_0]);
                                var_24 = ((((((arr_5 [i_0]) ? (arr_0 [i_0] [i_0]) : 2108899920)) % (arr_3 [i_1 + 2] [i_0]))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    arr_15 [i_0] [i_1 + 1] [4] = ((((((arr_8 [i_0] [13] [7] [i_0] [i_0] [i_0]) ? (arr_6 [12] [12] [3] [i_0]) : -32758))) ? (arr_13 [i_0]) : (arr_7 [i_5] [i_1] [i_1] [i_0])));
                    arr_16 [i_1] [i_0] = 255;
                }
                arr_17 [i_0] [i_1 - 1] = (((arr_4 [i_0] [i_0]) ? (!var_4) : ((~((-32751 ? 255 : var_15))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                            {
                                var_25 = (~var_18);
                                var_26 &= (((arr_22 [i_1] [i_1] [i_1] [i_1 + 3] [i_7 - 2] [i_8 + 3]) / (arr_0 [i_0] [i_0])));
                                var_27 += -32759;
                                arr_25 [i_0] = (((arr_20 [i_0] [i_0] [i_6] [i_0] [i_7] [i_0]) ^ (arr_8 [i_0] [i_1] [i_1] [i_7 - 1] [i_1] [i_7])));
                                var_28 = (((arr_4 [i_8 + 4] [1]) ? (arr_7 [i_1 - 1] [i_1 - 1] [i_8 + 4] [i_0]) : (arr_4 [i_8 + 2] [i_8 + 2])));
                            }
                            /* vectorizable */
                            for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
                            {
                                var_29 = -66;
                                var_30 += (((((arr_18 [i_0] [i_7]) <= (arr_26 [i_0] [i_0] [i_0] [i_0] [i_7 - 1] [i_9] [i_9]))) ? 14 : (arr_10 [i_0] [i_0] [i_7 - 2] [i_7] [i_9 - 1])));
                                var_31 = (((((-4097 ? (arr_13 [i_0]) : (arr_20 [i_0] [i_1 + 2] [i_6] [i_6] [i_9 + 1] [11])))) ? (((arr_8 [i_0] [i_9] [i_9] [i_6] [i_9] [i_0]) ? (arr_24 [i_0] [i_0] [i_6] [i_7] [i_7] [14]) : (arr_1 [i_0]))) : (~57913)));
                                var_32 = (((arr_9 [i_9 + 2] [i_7 - 1] [i_0] [i_1 + 2] [i_0]) ? (arr_21 [i_6] [i_6]) : (arr_2 [i_0] [i_9 + 1])));
                            }
                            /* vectorizable */
                            for (int i_10 = 1; i_10 < 13;i_10 += 1) /* same iter space */
                            {
                                var_33 ^= (((arr_29 [i_0] [i_1 + 2] [i_6] [i_6] [i_6] [i_10 + 2]) ? (((-(arr_11 [14] [2] [14] [14] [i_10])))) : (arr_5 [i_0])));
                                arr_30 [i_0] [i_0] [i_0] [11] [i_0] [11] = (--7624);
                                var_34 ^= ((127 << (-54 + 64)));
                            }
                            arr_31 [i_0] [5] [i_6] [i_6] [i_6] [i_0] = arr_4 [i_1 - 1] [i_1 - 1];
                        }
                    }
                }
            }
        }
    }
    var_35 |= (max((((var_3 & var_7) ? (max(61, var_2)) : (((var_16 << (66 - 62)))))), 8));
    var_36 ^= ((((((46376 >> (64344 - 64326)))) ? ((var_14 ? var_15 : var_12)) : var_11)));
    #pragma endscop
}
