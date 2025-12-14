/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((3796448778 ^ 1569267827) / 1018875592));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = (((arr_3 [i_0] [i_1 + 2] [i_1 - 3]) | ((var_1 >> (arr_3 [i_0] [i_1 + 1] [i_1 - 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [16] [11] [i_2] [i_3] [i_3] [i_4] = ((!(((var_9 * 2725699463) || (((var_8 ? var_6 : 1569267827)))))));
                                var_12 = -1018875593;
                                var_13 = ((231079867 ? 0 : -10119));
                                arr_14 [i_0] [9] [i_2] [5] [i_3] [i_4] = ((((max(var_2, var_2))) + ((var_8 ? -1018875593 : 1))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_14 = ((2644056497 << (17222 - 17198)));
                                arr_19 [i_0] [i_0] [i_5] [i_5] [i_6] [i_6] = 3029754776;
                            }
                        }
                    }
                    var_15 = (min(var_15, var_3));
                    arr_20 [i_0] [i_0] [i_0] = var_3;
                }
            }
        }

        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            arr_24 [i_7] [i_7] = (max((((arr_23 [i_0]) ? ((4294967276 ? var_5 : (arr_23 [i_0]))) : var_9)), (((1569267822 ? -32201 : 1779157349)))));
            var_16 = (min(var_16, ((min(var_2, var_7)))));
            arr_25 [i_7] [5] [i_7] = (var_3 == 684511968);
        }
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] [i_8] = (min(((~(arr_23 [i_8]))), ((((((-32767 - 1) + 2147483647)) >> 1)))));
        arr_29 [i_8] [i_8] = ((var_3 ? var_0 : ((-((min(0, var_0)))))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_17 = var_0;
                            arr_39 [i_12] [0] [i_12] [i_11] = (arr_12 [i_8] [i_8] [11] [i_8]);
                            arr_40 [i_8] [i_11] [i_9] [i_10] [i_11] [i_12] = (((((var_0 ? (arr_18 [i_8] [i_9] [i_10]) : 1569267817))) ? 835705293 : var_1));
                            var_18 = -2477825396479986943;
                            var_19 = (min(var_19, ((max((511 >> 0), (((arr_15 [1] [i_9] [i_10]) ^ (arr_27 [i_12] [3]))))))));
                        }
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            var_20 = (((~var_1) ? (max((arr_9 [i_13] [i_13] [i_13] [i_13] [i_13]), ((max(var_3, var_2))))) : (arr_36 [i_9])));
                            var_21 = 34309;
                            var_22 = ((((min(15, -32766))) ? -91 : (~1265212519)));
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            arr_46 [2] [i_9] [i_9] [i_10] [i_11] [i_11] [i_14] = (max(-var_3, ((-76 ? 0 : 1341932237))));
                            var_23 = (((1837340663 | 1018875621) ^ (~var_7)));
                        }
                        var_24 = (max(var_24, (((((min((arr_31 [i_8] [i_10] [i_11]), (arr_3 [i_8] [i_8] [i_8])))) << (((((arr_33 [i_8] [i_9] [i_9] [i_11]) ? -7180918162088424282 : 55)) + 7180918162088424313)))))));
                    }
                }
            }
        }
        var_25 = ((~((min((arr_31 [i_8] [i_8] [i_8]), 148)))));
        arr_47 [i_8] &= 1;
    }
    for (int i_15 = 2; i_15 < 13;i_15 += 1)
    {
        arr_50 [i_15] [i_15] = var_4;
        arr_51 [i_15] = (max(var_2, ((-16007 ? -79 : -1))));

        for (int i_16 = 1; i_16 < 13;i_16 += 1)
        {
            arr_56 [i_15] = (~-493798110693660151);
            var_26 = (((var_8 != (arr_49 [i_15]))));
        }
        arr_57 [i_15] [7] = (((3869255595215255543 ? var_2 : var_1)));
        arr_58 [i_15] = ((1 >= (max(9264, (((var_3 + 2147483647) << (var_2 - 22368)))))));
    }
    #pragma endscop
}
