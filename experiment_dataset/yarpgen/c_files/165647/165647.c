/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = ((+(max((!var_16), (~var_3)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 = (min((arr_2 [i_0]), (arr_5 [i_0] [i_1] [13] [15])));
                            arr_9 [14] [14] [i_2] [i_3] = (max((arr_7 [10] [10] [i_2] [7]), (arr_2 [i_0])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_22 |= var_11;

                            for (int i_6 = 3; i_6 < 15;i_6 += 1)
                            {
                                var_23 = var_1;
                                var_24 = 23585;
                            }
                            for (int i_7 = 0; i_7 < 16;i_7 += 1)
                            {
                                arr_18 [i_0] [i_1] [i_0] [i_4] [i_5] [i_7] = (((~(arr_12 [9] [i_4] [i_4] [i_4 - 2]))));
                                var_25 = (min((((((max(2096481083, 3945836372))) != (arr_14 [i_4])))), -24));
                                arr_19 [i_4] [i_1] [i_1] [i_1] = var_16;
                                var_26 = ((((((arr_4 [1] [3] [i_0]) > -16568)) ? (~3881612178) : var_18)));
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 16;i_8 += 1)
                            {
                                var_27 -= ((var_14 ? 8003823221962729562 : 64325));
                                var_28 -= (arr_10 [i_4 - 1]);
                                var_29 = (45917 <= var_6);
                                var_30 = var_5;
                            }
                            arr_23 [i_4] = (max(0, -23518));
                            var_31 = (((max((arr_7 [i_0] [i_1] [i_0] [i_4 - 3]), (arr_7 [i_0] [i_1] [i_0] [i_4 - 3])))) ? (arr_7 [i_0] [0] [i_4] [i_4 - 3]) : 2096481083);
                        }
                    }
                }
                var_32 ^= ((0 ? (min(((var_2 ? 3945836372 : -47)), 0)) : -538370898));
            }
        }
    }

    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_33 = (max(var_33, (((~((((max((arr_25 [i_9]), 4784564372324361577))) ? var_6 : -12)))))));

        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            var_34 = ((~(((!(arr_25 [i_9]))))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        arr_37 [i_9] [i_9] [i_9] [i_9] = (arr_32 [i_10 + 1] [i_10 + 1] [i_11] [i_10 + 1]);
                        var_35 *= (min((!var_18), (arr_32 [12] [i_10] [i_11] [i_12])));
                    }
                }
            }

            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                var_36 = var_8;
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        {
                            var_37 = ((2 ? (arr_40 [i_10] [i_10] [i_10] [i_10]) : (((((arr_29 [i_13] [i_14]) * (arr_26 [i_9])))))));
                            var_38 = ((((((arr_46 [8] [21] [i_13] [i_13] [i_13]) || (arr_32 [6] [i_10 + 1] [i_13] [0])))) - (~var_15)));
                            arr_48 [i_9] = (((min((arr_41 [i_9] [3] [i_9]), (arr_41 [i_9] [i_10] [i_10]))) ^ (((((max(33266, 14))) ? ((~(arr_44 [i_9] [9] [i_13] [i_13] [13] [i_13]))) : ((~(arr_42 [i_9] [i_13]))))))));
                        }
                    }
                }
                var_39 = (max(var_39, ((((4139659876 >= 11112) ? ((var_10 ? (-92 - var_3) : (var_19 % var_11))) : 2355)))));
                var_40 = 23525;
            }
            for (int i_16 = 2; i_16 < 22;i_16 += 1)
            {
                arr_51 [i_9] [11] [i_9] [i_9] = 170081493;
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 19;i_18 += 1)
                    {
                        {
                            var_41 *= (!-1082065133);
                            var_42 = (max(var_42, (arr_43 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])));
                            arr_59 [i_9] [i_10 + 1] [i_16] [i_9] [i_18] = var_10;
                        }
                    }
                }
                arr_60 [i_9] [i_9] = 16567;
                var_43 = (min(var_43, ((16567 ? ((~(arr_38 [i_9] [i_10 + 1] [i_10 - 1]))) : ((((max(65535, 64449))) ? var_10 : (arr_30 [i_9] [i_16 - 1] [i_10 + 2] [i_10])))))));
            }
        }
    }
    var_44 = (max((var_3 <= var_7), var_3));
    var_45 = (max(var_45, ((max(((var_8 ? var_18 : var_17)), 23)))));
    #pragma endscop
}
