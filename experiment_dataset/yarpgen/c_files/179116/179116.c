/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_13 &= (~var_7);
                        var_14 = ((var_1 >> ((((!(arr_7 [i_0] [i_1] [i_2] [i_2] [i_0] [i_2])))))));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_15 += (((arr_4 [i_0] [2] [i_1 - 2]) ? ((((arr_4 [i_0] [22] [i_1 + 1]) + (arr_4 [i_0] [2] [i_1 - 2])))) : var_0));
                            var_16 = ((-(arr_8 [i_0] [i_1] [i_2] [i_3])));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            arr_12 [i_0] [i_1] [i_1] [20] [i_3] [18] &= ((((arr_11 [i_0 - 1] [i_0] [i_0 + 2] [i_0] [i_1 - 2] [i_1 + 3] [2]) != var_10)));
                            var_17 ^= ((~(max(var_4, (max((arr_7 [8] [8] [i_2] [18] [2] [i_5]), (arr_1 [i_5])))))));
                            var_18 = (max(var_18, ((((max(var_9, ((191 ? 2305843009213693951 : -122)))) == var_8)))));
                            var_19 = (min(var_19, (((-(min(18446744073709551615, var_9)))))));
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_0] [9] [i_0] = ((-((min(var_3, var_4)))));
                            var_20 = ((max(var_6, (var_0 != var_9))));
                            var_21 ^= ((var_7 ? (max((arr_1 [i_0 + 2]), (arr_1 [i_0 - 1]))) : (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 2])))));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            var_22 *= (arr_6 [i_0 + 2] [i_1] [5] [i_3] [i_7]);
                            var_23 ^= -2305843009213693943;
                        }
                    }
                }
            }
        }
        arr_19 [i_0] = (max(((-(max((arr_17 [i_0 - 1] [i_0] [i_0] [i_0 + 2] [i_0]), var_0)))), ((max((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]), var_4)))));
    }
    var_24 *= ((((max(-1134691252573770075, (min(var_0, var_4))))) || var_0));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 13;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_25 = (((max(((var_6 ? var_11 : var_2)), (((var_9 ? (arr_13 [i_8] [i_9 + 1] [i_10] [19] [i_11]) : (arr_10 [i_8] [16] [i_10] [i_10] [i_11 - 1] [i_11] [i_10])))))) + (arr_29 [i_10] [i_9 - 2] [11] [i_10] [i_9 + 3] [i_10])));
                            var_26 += (arr_17 [i_8] [i_8] [i_9] [i_10] [i_8]);
                            var_27 = max(((var_6 ? (~var_11) : (((max((arr_7 [i_11] [i_10] [i_8] [11] [i_10] [i_8]), (arr_20 [i_8]))))))), var_3);
                            var_28 |= (min((arr_9 [i_8] [i_9 - 2] [i_9] [i_11 - 1] [i_11]), ((~(arr_9 [22] [22] [i_11 - 1] [i_11 - 1] [i_11 - 1])))));
                            arr_32 [i_10] [i_10] [i_11] = (~-31328);
                        }
                    }
                }
                var_29 = ((((max(-var_10, var_5))) ? (arr_26 [i_9] [i_8]) : (((-(arr_4 [i_9 - 1] [i_8] [i_9 + 3]))))));
                var_30 = (min(var_30, ((min(((min((arr_5 [i_8] [i_9 + 1] [i_8]), var_6))), (max(((~(arr_30 [8] [7] [i_8] [i_8] [i_8] [i_8]))), (arr_28 [i_8]))))))));
                var_31 = (!-1134691252573770073);
            }
        }
    }
    var_32 = (max(var_32, (~var_4)));
    var_33 *= var_9;
    #pragma endscop
}
