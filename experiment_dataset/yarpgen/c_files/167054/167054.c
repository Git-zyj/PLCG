/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, 0));
                    arr_8 [i_0] [i_1] = (((((((1 ? 133 : 104)) * (arr_4 [i_0] [i_1] [i_2] [i_0])))) ? ((((((~(arr_5 [9] [i_1] [i_0])))) ? 1 : var_8))) : var_4));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_12 = ((~((((max(var_5, var_7))) ? (!var_7) : (((arr_9 [i_0] [i_1] [i_2] [i_1] [i_4]) - var_1))))));
                                arr_13 [i_2] [i_1] [10] [i_2] [i_2 - 1] [i_2 - 1] = ((var_6 ? (152 == 160) : var_5));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((((((!var_7) ? (arr_5 [i_0] [i_1] [i_0]) : (3963285645 || var_9)))) || ((((var_8 || (arr_9 [i_2] [3] [i_2] [i_1] [i_0]))) || var_4))));
                        arr_19 [6] [i_1] [i_1] [i_5] = 31;
                        var_13 += ((((((arr_4 [i_0] [i_1] [i_2 - 1] [3]) % 1)) > -1418102880)));
                        var_14 = (!((min(var_1, (var_2 & var_1)))));
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_15 = (max(((min(((min((arr_20 [i_6]), (arr_21 [i_6])))), (((arr_20 [i_6]) ? var_9 : var_6))))), (min(((var_0 ? var_10 : (arr_21 [0]))), (((var_7 <= (arr_20 [i_6]))))))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 16;i_9 += 1)
                {
                    {
                        arr_30 [i_6] [i_8] [i_8] [i_9 - 1] |= ((!((min(((max((arr_24 [i_6]), var_3))), (max(178, 15245984381777161402)))))));
                        var_16 = -1;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        var_17 = 160;
        arr_34 [i_10] [i_10] = var_9;
        var_18 |= -1803;
    }
    /* LoopNest 3 */
    for (int i_11 = 2; i_11 < 10;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 9;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 8;i_15 += 1)
                        {
                            {
                                var_19 = (min((var_1 < 15), (((arr_5 [9] [i_11] [i_12 - 1]) & -21))));
                                arr_49 [i_11] [i_12] [i_14 + 1] [i_11] [i_11] = var_6;
                                var_20 = ((~(((((-(arr_22 [i_11])))) ? 1 : var_8))));
                                arr_50 [i_11] [i_14 - 1] [i_13] [i_12 - 2] [i_11] = (((((!var_0) ? 24 : (~17055507710234924201))) != (((-(arr_9 [i_14] [6] [i_14 + 2] [i_14 - 2] [i_14 - 1]))))));
                                var_21 = (max((538583584 * 8423426374344444599), (arr_42 [i_11] [i_14 + 1])));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {

                        for (int i_17 = 1; i_17 < 10;i_17 += 1)
                        {
                            arr_56 [i_11] [i_12] [i_12 - 2] [i_12 - 2] [i_12 + 1] = (!1);
                            arr_57 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] |= 3756383708;
                            arr_58 [i_11] = ((var_0 ? 400084288588392406 : 9007197107257344));
                            var_22 += 101;
                        }
                        for (int i_18 = 2; i_18 < 9;i_18 += 1)
                        {
                            var_23 = (max(var_23, var_9));
                            arr_61 [i_13] [i_12] [i_11] [i_16] [i_18] [i_18] = (1391236363474627427 ? 218 : (950550684 & -11));
                        }
                        var_24 = ((arr_59 [i_12 - 2] [i_12 - 2]) ? (arr_59 [i_12 - 1] [i_12 + 1]) : (arr_59 [i_12 + 1] [i_12 + 1]));
                    }
                }
            }
        }
    }
    #pragma endscop
}
