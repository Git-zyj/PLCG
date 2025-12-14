/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_10 = var_2;
            var_11 = (!var_2);
            var_12 ^= var_7;
            var_13 = 30235;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_14 = (min(var_14, ((((arr_4 [i_0] [i_2]) ? 30235 : (arr_1 [i_2]))))));
            var_15 = ((0 ? 0 : 1));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_16 = (max(var_16, 20239));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_17 = (arr_12 [i_0] [i_0]);
                            var_18 += (min(var_5, (max(var_6, (((531333567425735871 ? 5531 : 16380)))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        var_19 ^= var_7;

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_20 = (((34651 * (arr_22 [i_3]))));
                            var_21 = (max(var_21, (((~((((max(7582707567395955637, 45297))) ? (((arr_4 [i_3] [i_0]) ? var_8 : (arr_3 [i_8]))) : (~var_4))))))));
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_22 = ((((-(var_5 + -32739))) >> (((min((arr_28 [i_3] [i_8]), (arr_28 [i_8] [i_3]))) - 17889599638548595973))));
                            var_23 = 1073741822;
                        }
                        for (int i_11 = 4; i_11 < 12;i_11 += 1)
                        {
                            arr_32 [i_0] [i_0] [10] [i_0] [i_11] [i_7] [i_7] = (max((arr_5 [i_0]), (((-(arr_24 [i_7] [8] [i_7] [i_8] [8] [8]))))));
                            arr_33 [i_3] [i_11] [i_3] [2] [i_3] [i_0] = ((45296 ? ((max((10424 != var_6), var_6))) : (arr_7 [i_11] [i_3] [i_3])));
                        }
                    }
                }
            }
            arr_34 [i_3] = (((((7582707567395955637 ? -10425 : 48651))) ? ((min(((-(arr_20 [i_3] [i_3] [i_3] [i_0] [i_0]))), var_6))) : (min((-127 - 1), 0))));

            /* vectorizable */
            for (int i_12 = 3; i_12 < 13;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    arr_39 [i_0] = (1 * (arr_14 [i_13] [4] [i_3] [i_3] [i_0]));
                    var_24 -= (((arr_12 [i_12 + 3] [i_12 + 3]) + (arr_12 [i_12 - 2] [i_12 + 3])));
                }
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    arr_44 [i_14] [i_0] [i_14] = var_4;
                    arr_45 [i_14] [i_14] [i_14] [i_0] = (arr_28 [i_12 + 1] [i_12 + 3]);
                    var_25 = (((arr_25 [i_0] [11] [i_0] [i_12 + 3] [i_12]) ? (~var_1) : 49898));
                }
                var_26 = (min(var_26, var_9));

                for (int i_15 = 3; i_15 < 15;i_15 += 1)
                {
                    var_27 ^= ((7582707567395955637 * ((((arr_14 [i_15] [i_15] [i_12] [i_3] [i_0]) + (arr_21 [i_0]))))));
                    var_28 = (arr_15 [i_0] [5] [i_0] [4] [i_12] [i_15] [i_15 + 1]);
                }
            }
        }
        var_29 = (arr_42 [12] [i_0] [i_0] [i_0] [0]);
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 15;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 14;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 15;i_18 += 1)
            {
                {
                    var_30 += ((((var_3 >= (arr_43 [i_17 - 1]))) ? (-8002929131972328489 <= -8002929131972328489) : -0));
                    var_31 = var_0;

                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 15;i_19 += 1)
                    {
                        var_32 = (((1853541215 ? var_5 : (arr_46 [i_16] [i_16] [i_16] [i_16] [i_18] [i_19]))));
                        var_33 = ((((23 ? (arr_28 [i_17 - 1] [i_18]) : 18446744073709551615)) * (arr_15 [15] [i_17 + 1] [11] [i_17 + 1] [i_17 - 1] [i_17 - 1] [i_17 - 1])));
                    }
                }
            }
        }
    }
    var_34 = -5295227313667653585;
    /* LoopNest 3 */
    for (int i_20 = 0; i_20 < 14;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 14;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 14;i_22 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 14;i_23 += 1)
                    {
                        for (int i_24 = 3; i_24 < 11;i_24 += 1)
                        {
                            {
                                var_35 = ((~(arr_15 [i_20] [i_24 - 2] [i_24 - 2] [8] [i_24 + 2] [i_20] [i_24])));
                                var_36 = var_4;
                                var_37 = (min(var_37, (((((max((arr_42 [i_23] [i_24] [i_24 + 3] [i_24] [i_23]), (arr_14 [i_24 + 2] [i_24] [i_24] [i_24] [i_24 + 3])))) * 18446744073709551610)))));
                                var_38 = (min(var_38, (max(var_7, (((arr_14 [i_24] [i_24] [i_24 - 1] [i_24 - 1] [i_24 - 2]) ? (arr_14 [i_20] [1] [i_24 + 1] [i_24 - 2] [i_24 - 2]) : (arr_14 [3] [i_23] [i_24 - 2] [i_24 + 2] [i_24 - 2])))))));
                            }
                        }
                    }
                    var_39 = max(3871651894997102964, (((arr_10 [i_21] [13] [i_21]) ? (arr_52 [i_20] [i_21] [i_22]) : (arr_15 [i_22] [i_21] [i_22] [i_22] [i_22] [i_20] [i_20]))));
                    var_40 = (arr_37 [i_21] [i_22]);
                    var_41 = 1;
                }
            }
        }
    }
    #pragma endscop
}
