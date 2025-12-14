/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = var_5;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_15 ^= ((~((~(arr_4 [i_0 - 1] [i_0 - 1])))));
                            arr_11 [i_3] [i_1] [i_2] [i_0] = ((((min(85, -86))) ? ((min((arr_10 [i_0] [i_0] [i_2] [i_0]), (arr_8 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3])))) : ((min((arr_8 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_8 [i_3] [i_2] [i_2] [i_1] [i_1] [i_0]))))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_21 [10] [10] |= (((arr_16 [i_6 + 2] [i_6] [i_6]) ^ (arr_3 [10] [i_6 + 2])));
                                var_16 = arr_12 [i_0] [i_1] [i_0] [i_6 - 1];
                                var_17 = (min(var_17, (arr_15 [10] [6] [i_4])));
                                arr_22 [i_0] [10] [i_0 - 1] [i_0] = (arr_16 [i_0 + 1] [i_6 + 2] [i_5 + 1]);
                                arr_23 [i_0] [i_0] [i_0] [i_4] [i_5] [i_6 - 1] = ((1 ? 134217600 : 177));
                            }
                        }
                    }
                    arr_24 [i_0] = (((arr_9 [i_0 - 1] [i_0] [i_0 - 2] [i_0]) ? (arr_1 [i_0 - 2]) : (arr_12 [i_4] [i_4] [i_4] [i_0 + 1])));
                    arr_25 [i_0 - 1] [i_0] [10] = (arr_12 [i_0] [i_0] [i_1] [i_4]);
                }
                for (int i_7 = 3; i_7 < 10;i_7 += 1)
                {

                    for (int i_8 = 1; i_8 < 8;i_8 += 1) /* same iter space */
                    {
                        var_18 -= (arr_28 [i_0 - 2] [i_0 - 2] [i_7] [i_7] [i_8 + 1]);

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_34 [i_1] [i_7 - 2] [i_0] [i_9] = (!(arr_3 [i_0] [i_1]));
                            var_19 = (min(var_19, (-134217600 == -134217600)));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_20 -= ((~((min((min(23, 1)), (arr_13 [i_0] [i_1] [i_7] [0]))))));
                            arr_37 [i_0] [i_1] [i_7 - 1] [i_8] [i_0] = ((~(((!((min((arr_28 [i_0 + 1] [6] [i_0 - 2] [i_0 - 2] [6]), var_11))))))));
                        }
                        for (int i_11 = 1; i_11 < 10;i_11 += 1)
                        {
                            var_21 = (min(var_21, (((~(max((!0), (arr_39 [1] [0] [i_1] [i_7 - 1] [i_8] [i_11]))))))));
                            arr_41 [i_0] [i_0] [0] [i_8] [i_0] = max(1, 50496);
                            arr_42 [i_8] [i_0] = (arr_4 [i_0 + 1] [i_0 + 1]);
                            arr_43 [i_0] [i_1] [i_7 - 3] [i_7 - 2] [i_8] [i_11] = (max(8034243472346663743, 4294967282));
                        }
                        var_22 = (arr_9 [i_0 - 2] [i_0] [i_7] [i_8 + 1]);
                    }
                    for (int i_12 = 1; i_12 < 8;i_12 += 1) /* same iter space */
                    {
                        arr_47 [i_0] = (arr_17 [i_12 + 2] [i_0] [i_12] [i_12 - 1]);
                        var_23 = ((((!(arr_36 [i_12 + 3] [i_0 + 1]))) ? (arr_36 [i_12 + 1] [i_1]) : ((min(var_10, var_10)))));
                        arr_48 [i_0 - 1] [i_0] [i_0] [9] [i_0] [i_0 - 1] = ((((((arr_15 [i_0] [i_7 - 2] [i_12 + 2]) ? (arr_15 [i_0] [i_7 - 3] [i_12 + 3]) : (arr_15 [i_0] [i_1] [i_0])))) ? 4294967295 : (((((1 ? 35 : 4294967294))) ? ((min(var_8, -25))) : (arr_35 [i_0] [i_1] [i_1] [i_7 + 1] [i_12 + 3])))));
                    }
                    arr_49 [i_0] [i_7 - 2] [i_1] [i_0] = (~var_10);
                    var_24 = (min(1, (~281474976710144)));
                }
                arr_50 [i_0] [i_0] = (max(85, 10412500601362887873));
            }
        }
    }
    #pragma endscop
}
