/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min((228 & var_9), var_9))) ? (max(((min(var_5, var_7))), 228)) : (((max(var_1, var_6))))));
    var_11 = ((((max(var_0, var_5))) ? var_7 : (225 ^ var_3)));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = arr_2 [i_0] [i_0];
        arr_4 [i_0] = (((arr_1 [i_0 - 1]) % (arr_1 [i_0])));
        var_12 = (((arr_2 [i_0 - 1] [i_0 - 1]) ? (35 % 23) : ((min(var_9, var_1)))));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_13 = var_4;
        var_14 = (((((arr_0 [i_1 - 2]) ? (((8 ? 225 : var_3))) : (max(var_0, (arr_6 [i_1] [i_1]))))) ^ (arr_1 [i_1 + 2])));
        var_15 = (arr_6 [i_1 + 2] [i_1 + 2]);
        var_16 = (max((((arr_6 [i_1] [i_1]) ? var_2 : var_0)), var_0));
    }
    for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = var_9;

        for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                var_17 = var_1;
                arr_16 [i_4] [i_3 + 1] [i_4 + 1] [i_3 + 2] = (arr_2 [i_3] [i_2]);
                var_18 = (arr_15 [i_2 - 3] [i_3]);
                var_19 = (arr_6 [i_4] [i_2]);
            }
            var_20 += (arr_1 [i_2]);
        }
        for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
        {
            arr_20 [i_5] = ((arr_19 [i_5] [i_5 + 2]) ? (min(2662801323187490633, (arr_19 [i_5] [i_5 + 2]))) : (((min((arr_8 [i_2 + 3]), (arr_8 [i_2 - 1]))))));

            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_21 &= var_7;
                            var_22 ^= min((arr_19 [i_7] [i_6]), var_3);
                            var_23 = (max(var_23, ((min(((max((arr_14 [i_5 + 2] [i_6] [i_6 - 1] [i_7 - 2]), (arr_14 [i_5] [i_5] [i_6 - 1] [i_7 + 1])))), ((-(arr_14 [i_5 + 1] [i_5 + 1] [i_6 - 1] [i_7 + 1]))))))));
                            arr_29 [i_2 - 3] [i_2] [i_2] [i_5] [i_5] [i_7 - 3] [3] = 123;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 8;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_35 [1] [i_5] [i_6 + 1] [i_5] [i_2] = ((max(((min((arr_25 [i_10] [0] [i_5] [i_5] [9] [i_2]), var_9))), (arr_19 [i_5] [i_5]))));
                            var_24 = min((((max(0, 30)))), (((arr_19 [i_5] [i_2]) ? -5599237315825573523 : (arr_27 [i_9]))));
                            arr_36 [i_2] [i_5] [i_5] [i_6] [i_5] [i_5] = (~var_3);
                            var_25 = (max((arr_12 [i_2 - 3] [i_2 + 2] [i_6]), (((arr_12 [i_2 - 3] [i_9 + 1] [i_10 + 1]) + var_1))));
                        }
                    }
                }

                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    var_26 = (arr_24 [1] [i_5] [i_6] [i_11]);
                    arr_39 [i_5] [i_2] [i_6] = max(((((min((arr_6 [i_11] [i_6]), var_5))) ? 27 : (((30 ? var_7 : (arr_1 [i_2])))))), (arr_30 [i_2] [i_2] [i_2] [i_5] [i_2] [4]));
                    arr_40 [i_5 - 1] [i_5 - 1] [i_5] [i_5] = (arr_2 [i_2] [i_2]);
                }
            }
            for (int i_12 = 1; i_12 < 10;i_12 += 1)
            {
                var_27 = ((((arr_14 [i_2] [i_2] [i_2] [i_2]) ? (arr_17 [i_2 - 2]) : 221)));
                arr_44 [i_2] [i_5] = (((arr_13 [3] [10] [9]) ? (max(var_8, (arr_1 [i_5]))) : (min((arr_37 [i_2] [i_12] [i_12]), (arr_37 [i_2 - 3] [i_5 + 1] [i_12])))));
                var_28 = (max(var_28, (arr_10 [i_12] [i_5])));
                arr_45 [i_12] [i_5] [i_5] [i_2 + 2] = (((((((arr_5 [i_5]) ? 132 : (arr_26 [i_12] [i_2] [i_12] [i_2] [i_2] [8]))))) > (arr_38 [0] [0] [0] [i_5] [i_12 + 2] [i_12])));
            }
            for (int i_13 = 1; i_13 < 11;i_13 += 1)
            {
                arr_48 [i_5] = (((((var_5 + (arr_25 [i_13] [i_13 - 1] [i_5] [i_13] [i_13] [i_13 - 1])))) || ((max((arr_25 [i_2] [i_13 - 1] [i_5] [i_13] [i_13] [i_13]), (arr_25 [i_5] [i_13 + 1] [i_5] [8] [i_13] [8]))))));
                arr_49 [i_5] [i_5] [i_5] [i_2] = (var_2 ? (((var_5 ? var_3 : var_8))) : (arr_8 [0]));
            }
            for (int i_14 = 1; i_14 < 11;i_14 += 1)
            {
                var_29 = (var_4 ? var_9 : (arr_47 [i_14] [i_5] [i_14] [i_5]));
                arr_52 [i_5] [i_14 - 1] = (arr_0 [i_2]);
                var_30 = ((var_4 ? (arr_34 [i_2] [i_5 + 1] [3] [i_14 + 1] [i_2]) : (arr_7 [i_14])));
            }
        }
        for (int i_15 = 1; i_15 < 10;i_15 += 1) /* same iter space */
        {
            var_31 -= (((var_4 ? var_4 : var_7)));
            var_32 ^= ((225 ^ ((((arr_13 [10] [i_2 - 2] [i_15 - 1]) > (arr_17 [i_2 - 1]))))));
        }

        for (int i_16 = 1; i_16 < 9;i_16 += 1)
        {
            var_33 = var_4;
            arr_59 [i_2] = 65516;
            /* LoopNest 2 */
            for (int i_17 = 4; i_17 < 10;i_17 += 1)
            {
                for (int i_18 = 2; i_18 < 9;i_18 += 1)
                {
                    {
                        var_34 = 65516;
                        var_35 = arr_5 [i_2 + 2];
                        var_36 = arr_28 [i_2] [i_2 + 1] [i_16] [i_17] [i_17] [i_16] [i_18];
                        arr_65 [8] [i_16] [10] [i_17 - 3] [10] [i_18] &= (((min(var_7, var_9))));
                        var_37 = (arr_27 [i_2]);
                    }
                }
            }
        }
        var_38 -= (arr_53 [i_2 + 1] [i_2 + 3] [i_2 + 2]);
        var_39 |= (min((((arr_11 [i_2 + 3] [i_2 - 1]) | var_3)), ((0 ? 244 : ((min(123, 127)))))));
    }
    #pragma endscop
}
