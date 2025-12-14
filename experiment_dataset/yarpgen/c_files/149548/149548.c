/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_2));
    var_14 = var_1;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_15 = (max(var_15, ((((max(765358121, (arr_2 [i_0 + 2] [i_0 + 2]))) - ((~(arr_1 [i_0 + 2] [i_0 + 2]))))))));
        arr_3 [i_0 + 1] [i_0 + 1] = (max(((var_10 ? (~21638) : 1)), (var_7 << 1)));
        arr_4 [i_0] = 2563748465924582939;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            arr_8 [i_1] [i_0] = (arr_2 [i_0 + 1] [i_0 + 1]);
            var_16 = (min(var_16, (arr_7 [i_1] [i_0 + 2] [i_0])));
            var_17 = (((!1) ? (((!(arr_1 [i_1] [i_1])))) : (((!(-2147483647 - 1))))));
            var_18 |= 2263779569928434601;
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    {
                        var_19 = (min(var_19, var_3));

                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            var_20 = -13039;
                            var_21 = (min(((-(min(5273589786091173524, var_7)))), (((var_5 / (949608396 / 46674))))));
                            arr_21 [i_5] = (((((~(arr_16 [i_5 + 1] [i_4 + 2])))) ? (arr_6 [i_5 + 1] [i_4 - 2] [i_0 + 1]) : ((((!((((arr_16 [i_0 + 1] [i_5]) + var_4)))))))));
                        }
                        var_22 ^= var_5;
                        arr_22 [i_0] [i_2] [i_3] [i_2] &= 3539827950;
                        var_23 = (min(-61, ((((min(3805149939, (arr_6 [i_4] [i_2] [i_0])))) ? var_1 : (max(var_2, (arr_12 [i_0 + 2] [i_2] [i_0 + 2] [i_0 + 2])))))));
                    }
                }
            }
            var_24 = (max(var_9, (var_4 + -19927)));

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                arr_25 [i_0 - 1] [i_6] [i_0 - 1] [i_0 + 2] = ((((arr_5 [i_0 + 2]) ? (arr_5 [i_0 + 1]) : (arr_10 [i_0 + 2] [i_0 + 2] [i_0 + 2]))));
                arr_26 [i_6] [i_2] [i_2] [i_2] = ((((((3 ? (arr_17 [i_2] [i_2] [i_0 + 1] [i_0 + 1]) : -2030528093))) / var_0)));
                var_25 ^= -var_5;
            }
            arr_27 [i_0 + 1] [i_0] [i_2] = (min((arr_18 [i_0] [i_0] [i_2] [i_0] [i_0]), (((!(arr_24 [i_0 + 1] [i_0 - 1] [i_0 + 2]))))));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_26 = 18008;
            arr_31 [i_0 + 1] [i_0] [i_0 + 1] = (((arr_0 [i_0 + 1]) - ((-(2563748465924582941 * 511)))));
            var_27 ^= (0 / 752198960);
        }
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {

            /* vectorizable */
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                var_28 ^= var_5;
                var_29 = (max(var_29, (((32747 ^ 18868) ? (arr_10 [i_9] [i_0] [i_0]) : -2030528093))));

                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    var_30 &= 309891228;
                    var_31 = (max(var_31, 997272765));
                    arr_40 [i_8] = ((2030528063 ? (arr_5 [i_10]) : (arr_5 [i_10])));
                    arr_41 [i_0 + 2] [i_0 + 2] [i_8] [i_0 + 2] [i_8] [i_0 + 2] = (arr_0 [i_9]);
                }
                for (int i_11 = 1; i_11 < 20;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        var_32 = (arr_46 [i_9] [i_11 + 1] [i_8] [i_0 + 1] [i_12] [i_9]);
                        var_33 += (arr_37 [i_9] [i_11 - 1] [8] [i_0 + 1]);
                        var_34 += (var_0 + var_4);
                        arr_47 [i_0] [i_8 + 1] [i_0] [i_0] [i_8] = 8388607;
                    }
                    for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
                    {
                        var_35 = (min(var_35, (!2939170233)));
                        arr_51 [i_8] [i_8] [i_0] [i_8] [i_0] = (!0);
                        arr_52 [i_8] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1] = ((arr_23 [i_0 + 2] [i_11 + 1] [i_0 - 1]) / (arr_37 [i_0 + 2] [i_8 - 1] [i_8] [i_8 + 1]));
                    }
                    for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
                    {
                        var_36 = (min(var_36, 1732756096));
                        arr_55 [i_0] [i_0] [i_8] = ((~(~46668)));
                    }
                    for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
                    {
                        arr_60 [i_0] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_0] = ((((var_6 ? var_6 : (arr_28 [i_9] [i_9] [i_9]))) << (2030528111 - 2030528089)));
                        arr_61 [i_0] [i_8] [i_9] [i_11] [i_0] = 2030528093;
                        var_37 = (min(var_37, ((~(arr_49 [i_15] [i_8 + 1] [i_9] [i_11 + 1] [i_15] [i_8] [i_11])))));
                    }
                    var_38 ^= (((-817269938 ? -12295 : -2472)));
                }
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    var_39 |= ((var_8 / (arr_5 [i_0])));
                    arr_64 [i_8] = ((var_7 + (29158 != 61401502)));
                }
                var_40 = ((((arr_6 [i_9] [i_0] [i_0]) << (((arr_30 [i_9]) - 2003050892)))));
            }
            arr_65 [10] |= (max(((max(var_11, (arr_5 [i_8 + 1])))), 15882995607784968677));
        }
    }
    #pragma endscop
}
