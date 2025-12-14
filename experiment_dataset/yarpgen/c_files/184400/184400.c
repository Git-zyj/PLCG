/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max(31101, var_7);
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        arr_10 [6] [i_1] [7] [i_3] [i_1] = arr_8 [i_0] [i_3 - 3] [i_2];
                        var_13 = ((~(arr_7 [i_0] [i_1] [i_2] [i_1])));
                    }
                    var_14 = ((~(~31101)));
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_15 = (arr_3 [i_0] [i_1] [i_0]);
                            var_16 = (((((arr_14 [i_0] [i_4] [i_1]) ? (arr_14 [i_4] [i_4] [i_1]) : (arr_14 [i_1] [i_4] [i_1]))) % (arr_14 [i_1 + 1] [i_1 - 1] [i_1])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 14;i_7 += 1)
        {
            {
                var_17 = (((var_2 ? ((~(arr_18 [i_7 + 2])) : var_2))));
                arr_22 [8] [i_6] [i_7] = (!var_1);
            }
        }
    }

    for (int i_8 = 3; i_8 < 22;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 23;i_11 += 1)
                {
                    {
                        var_18 = (((((34430 ? var_0 : (var_5 <= var_3)))) < (((arr_29 [i_8 - 1] [i_11 - 1] [i_11] [17]) >> (((arr_29 [3] [i_11 - 1] [6] [i_11 + 1]) - 5175626572686206522))))));
                        arr_35 [i_8] = ((((~(arr_31 [i_8 - 1] [i_8 - 1] [i_10] [i_11]))) == (min(var_2, var_9))));
                        arr_36 [i_8] [i_9] [23] [i_9] = var_0;
                        arr_37 [i_8 + 3] [i_9] [10] [i_11 + 2] = (var_2 / -34426);
                    }
                }
            }
            arr_38 [10] = ((+(min((~34430), ((var_0 ? 31100 : var_8))))));
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 24;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 22;i_13 += 1)
                {
                    {
                        var_19 = (~230441718309054188);

                        for (int i_14 = 3; i_14 < 23;i_14 += 1)
                        {
                            arr_47 [i_8 - 1] [i_9] = (arr_28 [i_8] [i_8] [i_12 + 1]);
                            var_20 = 31085;
                            var_21 = 34430;
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            var_22 = (~var_1);
                            arr_50 [i_8] [i_9] [i_12 + 1] [i_13 + 2] [21] = (!18216302355400497427);
                        }
                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            arr_54 [i_8] [i_8] [i_12 + 1] [i_13 + 2] [i_16] = (max(31106, (min((max(var_7, (arr_34 [i_8] [i_8] [i_12] [i_13] [i_16] [i_16]))), (max(65526, 230441718309054197))))));
                            arr_55 [22] [i_9] [i_9] [i_12] [i_12] [i_12] [i_16] = ((-(max((!var_7), (arr_34 [i_8] [i_8] [i_8 + 3] [9] [i_16] [i_8 + 3])))));
                            var_23 = min(var_5, 26751);
                            var_24 = (((arr_49 [i_12] [i_12 - 1] [18] [9] [i_13 + 3] [i_13] [i_16]) + ((var_6 + (1016 * 64511)))));
                        }
                        for (int i_17 = 1; i_17 < 23;i_17 += 1)
                        {
                            var_25 = ((var_6 ? 42 : (min(var_2, ((min(175, 1010)))))));
                            var_26 = ((!(!var_10)));
                            var_27 = ((690585726 ? 39007 : 1195290376));
                        }
                        var_28 = (min(230441718309054188, -1));
                    }
                }
            }
            var_29 = 1016;
        }

        /* vectorizable */
        for (int i_18 = 3; i_18 < 21;i_18 += 1)
        {
            /* LoopNest 2 */
            for (int i_19 = 3; i_19 < 22;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    {
                        var_30 = (arr_40 [i_8 - 3] [i_8 - 1] [i_8 - 3]);

                        for (int i_21 = 1; i_21 < 24;i_21 += 1)
                        {
                            var_31 = (~64519);
                            arr_67 [i_8 + 1] [i_8 + 1] [i_21] [10] [i_21 - 1] = var_4;
                        }
                        var_32 = var_0;
                    }
                }
            }
            var_33 = 18216302355400497427;
            arr_68 [i_8] = 34409;
            arr_69 [i_8] [22] [22] = (arr_23 [i_18]);
        }
        var_34 = var_3;
        arr_70 [i_8] = (max(248, var_10));
    }
    /* vectorizable */
    for (int i_22 = 4; i_22 < 16;i_22 += 1)
    {
        var_35 = (var_8 == 59263);
        var_36 = var_4;
    }
    for (int i_23 = 0; i_23 < 25;i_23 += 1)
    {
        arr_78 [i_23] = (max(((min(var_5, 59245))), (arr_26 [13])));
        var_37 = (((max(-1198428719, (max(1195290376, 15424366019330584316)))) <= 3421619390169206451));
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 25;i_24 += 1)
        {
            for (int i_25 = 3; i_25 < 23;i_25 += 1)
            {
                {
                    arr_83 [i_23] [i_25] [i_24] [i_25] = ((~(((arr_66 [i_25] [i_25] [i_25 + 1] [i_25 + 1] [i_25 - 1] [i_25] [i_25 + 2]) ? (arr_66 [24] [23] [i_25 - 1] [i_25 + 2] [i_25 + 2] [18] [i_25 - 3]) : (arr_66 [i_25 - 1] [i_25] [i_25 + 2] [i_25] [i_25 - 1] [14] [i_25])))));
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 25;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 25;i_27 += 1)
                        {
                            {
                                arr_88 [i_25] [i_26] [i_27] = (((max(var_3, -64511)) >= 3));
                                var_38 = ((var_0 ? var_6 : (arr_27 [i_24] [i_24])));
                            }
                        }
                    }
                }
            }
        }
        arr_89 [i_23] = (((((arr_43 [8] [8] [i_23] [8]) ? (var_4 | 230441718309054165) : var_2)) == (((max(var_4, (arr_84 [i_23] [i_23] [i_23] [i_23])))))));
    }
    #pragma endscop
}
