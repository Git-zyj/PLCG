/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_0] = ((min((max((arr_5 [2] [2] [i_0]), var_1)), (min(var_4, (arr_2 [i_0] [i_1]))))) << (((((arr_2 [i_0] [i_1]) & (arr_2 [i_0] [i_1]))) - 111)));
            var_19 *= ((~(arr_1 [i_1] [i_1])));
        }
        arr_8 [i_0] = (-(max((arr_3 [i_0] [i_0]), var_16)));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_20 &= ((~(((arr_9 [i_3] [2]) ^ (arr_9 [i_2 + 1] [i_2 + 1])))));
            arr_16 [i_2] = ((((((var_0 - (arr_1 [i_2 + 1] [i_3]))) + var_4)) == ((-(max(var_0, (arr_13 [i_3] [i_2])))))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_21 = (min(var_21, ((((arr_17 [i_2 - 1] [i_3] [i_4] [i_4]) <= (arr_12 [i_2]))))));
                arr_19 [i_4] [i_2] [i_2] = (((arr_6 [i_4] [i_2 - 1] [i_4]) <= (arr_5 [i_2] [i_2 + 1] [i_4])));
            }
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 8;i_7 += 1)
                {
                    {
                        arr_26 [i_2] [i_5] [i_6] [i_7 + 1] = var_1;

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            arr_30 [i_2] [i_5] [i_6] [i_6] [i_8] = ((!(arr_10 [i_2 + 1])));
                            arr_31 [i_6] [i_5] [i_6] [i_7] [i_8] = (arr_10 [i_7 + 2]);
                        }
                        arr_32 [i_6] [i_6] [i_5] [i_6] = (min(var_8, (min((((!(arr_14 [i_2])))), ((-(arr_21 [i_2] [i_2])))))));
                        arr_33 [0] [i_6] [i_5] [i_2] [0] &= var_6;
                    }
                }
            }
            arr_34 [i_2] = ((((-(arr_2 [i_5] [i_2 + 1]))) - (arr_2 [i_5] [i_5])));
            arr_35 [i_2] [i_2] [i_5] = (min(((!(arr_0 [20]))), (((arr_18 [i_2] [i_2 + 1] [i_2 - 1] [i_2]) <= (arr_18 [i_2] [i_2 - 1] [i_2 - 1] [i_2])))));
        }
        var_22 = (arr_12 [i_2]);

        for (int i_9 = 1; i_9 < 6;i_9 += 1)
        {
            var_23 = (min(var_23, (((!((max((arr_4 [14]), (max((arr_2 [i_9] [i_9]), (arr_38 [i_2] [i_2])))))))))));
            var_24 = (min(var_24, var_3));
        }
        /* vectorizable */
        for (int i_10 = 3; i_10 < 6;i_10 += 1)
        {
            arr_41 [i_10] [i_10] [7] = var_11;
            arr_42 [i_10 + 4] [i_2 - 1] = ((-(arr_29 [i_2 + 1] [i_10] [i_2] [i_2] [i_10 + 2] [i_2 + 1])));

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_25 = (((arr_1 [i_2 - 1] [i_10 - 3]) <= (arr_37 [i_2 - 1])));
                var_26 *= (((var_1 & var_1) || (arr_6 [i_2 - 1] [i_10 + 3] [i_11])));
                arr_46 [i_10] [i_10 - 2] = ((!(arr_6 [i_10] [i_10 + 1] [i_10])));
            }
            for (int i_12 = 1; i_12 < 6;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    var_27 = (arr_39 [i_10 + 1]);
                    var_28 = ((arr_14 [i_10 + 4]) & (arr_14 [i_10 - 3]));
                    arr_52 [i_10] [i_12] = arr_44 [i_2] [i_2] [i_2] [3];
                }
                var_29 = (min(var_29, (((!(arr_47 [i_2] [i_10] [i_10 - 3] [i_12]))))));
                var_30 = (min(var_30, (arr_38 [i_10 - 3] [i_2 + 1])));
            }
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                var_31 = (min(var_31, ((((~(arr_48 [i_2] [i_10 - 2] [i_10 - 2])))))));
                arr_55 [i_14] [i_14] = var_17;
            }
            var_32 *= (arr_11 [i_10]);
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 24;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 24;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 22;i_17 += 1)
            {
                {
                    var_33 = (min(var_33, (((-(arr_57 [i_16]))))));
                    var_34 = (min(var_34, (((!(arr_62 [i_17 + 2] [i_17 + 1] [i_17 + 1] [i_17 + 2]))))));
                    var_35 += (((arr_59 [i_15] [0]) % (arr_58 [i_16] [i_16] [i_17 + 1])));
                }
            }
        }
        var_36 = arr_59 [i_15] [i_15];
    }
    for (int i_18 = 0; i_18 < 18;i_18 += 1)
    {
        arr_66 [i_18] [i_18] = ((-(arr_65 [i_18])));
        var_37 = (min(var_37, ((((arr_6 [i_18] [i_18] [0]) || var_9)))));
        arr_67 [i_18] [i_18] = ((~(arr_61 [i_18] [i_18])));
    }
    #pragma endscop
}
