/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (arr_2 [i_1] [i_1 - 1] [i_1]);
                var_21 = -1;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    arr_7 [i_1] = ((~((~(arr_3 [i_1] [i_1])))));
                    var_22 = ((18446744073709551615 ? 1 : (arr_0 [i_1] [i_1 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_23 |= (arr_3 [i_4] [i_1 - 1]);
                                var_24 = ((-1 ? ((~(arr_0 [i_0] [i_0]))) : 2147483636));
                                arr_12 [i_1] [i_1] [i_2 + 1] [i_1] [i_1] = ((-(arr_11 [i_2 + 3] [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1])));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        arr_16 [i_5] [i_5] [i_5] [i_5] [12] [i_5] |= arr_15 [10];
                        var_25 = (min(var_25, (arr_10 [i_0] [i_0] [i_0] [i_5] [i_2] [4])));
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_26 = (max(var_26, (arr_1 [i_6])));
                    var_27 = ((-1974820574 ? 909437179 : 5558627373835289763));
                    arr_21 [i_0] [i_0] [i_1] [i_6] = (arr_8 [i_1 + 2] [i_1 + 1] [i_1 + 1]);
                }
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_28 = var_15;
                        arr_27 [i_0] [i_1] [i_0] [i_0] = 128;
                        var_29 = (max(var_29, 64580));
                        var_30 -= var_7;
                    }

                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        var_31 = ((65506 ? 70 : 4294967282));
                        var_32 |= (((~1) ? (arr_26 [i_7 + 1] [i_1 - 1] [i_1 - 1] [i_7 + 1]) : (arr_9 [i_0] [10] [i_0])));
                        var_33 = (min(var_33, (((1974820573 >= (3 > 128))))));
                        arr_31 [i_0] [i_0] [i_1] [i_0] = ((~(arr_15 [i_1])));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_34 = (~3385530116);
                        var_35 *= var_19;
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                    {
                        var_36 ^= 2082746404;
                        var_37 *= (arr_2 [i_11] [i_11] [i_11]);
                        var_38 = var_10;
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            arr_42 [i_0] [i_1] [i_0] [i_7] [i_12] [i_1] = (((arr_17 [i_7 + 1] [i_7 + 1] [i_1] [i_7 + 1]) ? (!188) : (arr_29 [i_7 + 1] [i_1 - 1] [i_1] [i_1] [i_0] [i_0])));
                            arr_43 [i_1] [i_0] [i_13] [i_0] [i_0] [i_0] = arr_18 [i_1 + 2] [i_1 + 2] [i_1] [i_7 + 1];
                            arr_44 [i_0] [i_1] [i_1] = (~var_7);
                            var_39 += ((!(arr_5 [i_1 + 2] [i_12] [i_1 - 1])));
                        }
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            var_40 = (min(var_40, ((((min((arr_17 [i_1 + 2] [i_14] [i_14] [i_1 - 1]), var_18))) == (arr_15 [i_14])))));
                            var_41 = ((((2082746404 ? (arr_18 [i_0] [i_1] [i_1] [i_7 + 1]) : (arr_18 [i_0] [i_1] [i_1] [i_7 + 1]))) ^ var_19));
                            var_42 ^= ((1 ? ((((arr_14 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 2]) > var_8))) : (((arr_14 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 + 2]) ? 65535 : (arr_14 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                        }
                        arr_47 [i_12] [i_12] [i_1] = (!(arr_13 [i_0] [i_0] [i_0]));
                    }
                    var_43 = (min(var_43, (arr_18 [i_7] [i_7] [0] [i_7])));
                    arr_48 [i_1] = 0;
                }
            }
        }
    }
    var_44 = (~909437179);
    #pragma endscop
}
