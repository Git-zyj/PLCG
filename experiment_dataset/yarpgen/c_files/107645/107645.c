/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [1] [i_0] = (!var_6);
        arr_3 [i_0] = ((((((-(arr_1 [i_0] [i_0]))) + 9223372036854775807)) << (((!((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 40383))))))));
        arr_4 [3] = (((((~(arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (min(2698574957, 38))));
        arr_5 [20] = arr_1 [i_0] [i_0];
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (((32736 == 32736) ? -13525 : 239));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_16 [i_4] [i_3] [i_3] [i_1] [i_1] = (((arr_11 [i_2] [i_4]) ? (arr_10 [i_1]) : 32767));
                        arr_17 [i_1] [i_1] [i_1] [i_3] [i_1] [i_1] = (arr_11 [i_1] [i_1]);
                    }
                }
            }
            var_14 = (~30337);
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_15 = 0;
            arr_20 [i_5] [i_5] = (38 == 7767);
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    {
                        var_16 = (((arr_19 [i_6 + 1] [i_5] [i_7 - 2]) ? 37 : (arr_19 [i_6 + 1] [i_5] [i_7 - 1])));
                        var_17 = (((((var_11 ^ (arr_18 [i_5])))) < (arr_24 [i_5] [i_6 - 1] [i_6 + 1])));
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 19;i_8 += 1)
        {
            arr_27 [i_1] [i_8] [i_8 - 1] = 3667;
            var_18 = (arr_22 [i_8 - 1] [i_8 + 1]);
        }

        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            arr_30 [1] = (arr_18 [i_9]);
            var_19 = ((39689 & (arr_21 [i_1] [i_9])));
        }
        for (int i_10 = 1; i_10 < 17;i_10 += 1)
        {
            arr_33 [i_10] = ((((((arr_11 [i_1] [i_1]) ? (arr_21 [i_1] [i_1]) : (arr_0 [i_1] [i_1])))) - ((-47 & (arr_10 [i_1])))));
            arr_34 [i_1] [i_10] [13] = arr_14 [19] [i_10 + 4] [i_1] [i_10];
        }
        for (int i_11 = 1; i_11 < 17;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 20;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    {
                        var_20 = (((arr_21 [i_1] [i_11 + 2]) ? (arr_21 [i_1] [i_11 + 3]) : 16));
                        arr_41 [i_1] [i_1] = (((arr_15 [i_11] [i_11 + 1] [i_12 - 2] [i_12 + 1]) >> (((arr_15 [i_11] [i_11 + 1] [i_12 - 2] [i_12 + 1]) - 2790959687946865706))));
                        arr_42 [i_13] [i_12] [i_11] [i_1] = (((1 != 33007) % 16655));
                    }
                }
            }
            var_21 = (arr_35 [i_11 + 2] [i_11 + 2]);
        }
    }
    for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
    {
        var_22 = (max(var_22, (((17 ? (((!((max(239, (arr_6 [i_14]))))))) : var_8)))));

        /* vectorizable */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                arr_52 [i_14] |= ((arr_11 [i_14] [i_15]) || (arr_12 [i_14]));
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 20;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        {
                            arr_59 [i_18] [i_17] [i_16] [i_16] [i_14] [i_14] = (((arr_55 [i_16] [i_16] [i_17 - 2] [i_17] [i_17 - 1]) < (arr_55 [i_16] [11] [i_17 - 2] [11] [14])));
                            var_23 = ((65528 >> (16607740007106989145 - 16607740007106989134)));
                            var_24 = (!var_11);
                            var_25 = 0;
                        }
                    }
                }
                var_26 = (((809103810 ? var_2 : var_8)) <= (arr_43 [i_14] [i_16]));
                var_27 = (max(var_27, (((+(((arr_10 [i_14]) & var_1)))))));
            }
            for (int i_19 = 1; i_19 < 1;i_19 += 1)
            {
                /* LoopNest 2 */
                for (int i_20 = 1; i_20 < 17;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 21;i_21 += 1)
                    {
                        {
                            var_28 = (min(var_28, 582622753));
                            arr_68 [i_20] = var_11;
                        }
                    }
                }
                arr_69 [i_15] [i_14] = ((arr_43 [i_19] [i_19 - 1]) ^ var_12);
                var_29 = 60;
            }
            var_30 = (7753 ? ((1 ? 805636818 : var_5)) : (arr_62 [i_14] [i_14] [2] [i_14] [i_15] [i_15]));
        }
        arr_70 [1] = (((~7757) && ((((arr_9 [i_14] [i_14] [i_14]) ? (arr_9 [i_14] [i_14] [i_14]) : (arr_9 [i_14] [i_14] [i_14]))))));
    }
    var_31 = var_11;
    /* LoopNest 2 */
    for (int i_22 = 0; i_22 < 17;i_22 += 1)
    {
        for (int i_23 = 0; i_23 < 17;i_23 += 1)
        {
            {
                arr_77 [i_22] [i_22] = ((min((arr_6 [i_22]), 2162492598456860343)));
                var_32 = 239;
                var_33 = (((min(((25846 ? (arr_15 [i_22] [i_22] [i_23] [i_23]) : 3991633322339441265)), ((~(arr_67 [i_22] [i_22] [i_22] [i_22] [i_22] [1]))))) % (8323072 - -886343562)));
            }
        }
    }
    #pragma endscop
}
