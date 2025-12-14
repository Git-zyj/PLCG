/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_14 = (~var_8);
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_15 -= (((28599 ? (max((arr_1 [i_1]), var_9)) : ((((arr_4 [i_1 - 1] [i_1]) / var_5))))));
        var_16 = (max(var_16, ((((arr_5 [i_1 - 2]) * (((((((arr_0 [20]) * var_7))) > 7760424137067360100))))))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_17 = 46;

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                arr_11 [i_3] [i_1] = ((+(min((arr_0 [1]), (max((arr_6 [i_1] [i_2] [i_2]), var_3))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((((((66 ^ 61) ? 166 : (arr_12 [2] [i_4] [8] [i_3] [8] [2])))) & var_1)))));
                            var_19 = (~((((max(13, 66))) ? (((240 ? 16 : (arr_13 [i_1] [i_2] [i_2] [i_4])))) : ((var_1 ? var_1 : var_3)))));
                        }
                    }
                }
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {

                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    var_20 = (max(var_20, (max(var_3, ((max(0, 1294073217152764408)))))));
                    arr_23 [13] [13] [i_6] = (max(((((arr_7 [i_1] [i_1]) ? (arr_7 [i_2] [i_6]) : (arr_7 [i_1] [i_2])))), (max((arr_7 [i_2] [i_2]), var_12))));
                    arr_24 [0] [i_6] [1] [i_7] [i_6] [i_7] = ((210 ? -1 : 34));
                    var_21 += ((((~var_6) && (arr_6 [i_1 - 4] [i_7 - 1] [i_7 - 1]))) ? (~7839791507973003068) : (((min((!var_1), (max((arr_5 [19]), 166)))))));
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_22 = (min(var_22, ((((arr_26 [i_9] [i_1 - 3] [i_6] [1] [i_9]) ? (arr_12 [8] [i_1 + 2] [8] [i_1 - 3] [i_1 + 2] [i_1 + 2]) : (arr_26 [i_1] [i_1 - 3] [i_6] [0] [i_1]))))));
                        var_23 = ((((((arr_5 [i_1 - 1]) * 0))) ? (arr_16 [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 2] [11] [i_1 - 3]) : (max((arr_5 [i_1 - 1]), var_3))));
                        var_24 = (min(var_24, (arr_15 [i_1] [i_1] [i_1] [13] [i_9] [i_1] [10])));
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_25 *= min(4706604883915868622, ((((var_7 ? (arr_6 [i_1] [i_1 - 4] [i_1]) : var_2)))));
                        var_26 = (arr_9 [i_1 - 2] [i_1 - 1] [i_1 - 4] [i_1]);
                    }
                    arr_35 [i_8] [i_6] [1] [1] = (-(arr_28 [i_8] [i_2] [i_6] [i_1 - 4]));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    var_27 = (var_8 != var_1);
                    arr_39 [i_6] [i_2] [i_6] = ((90 << (var_8 + 8451785199014925375)));
                    var_28 = 1490624254;
                    var_29 = (max(var_29, (arr_16 [i_1 - 2] [i_2] [i_6] [i_6] [10] [5])));
                }
                var_30 = var_11;
                var_31 = (max((((~(arr_22 [i_1] [i_1] [i_1])))), (max((arr_17 [i_1] [i_6] [i_2] [i_1]), 240))));

                for (int i_12 = 2; i_12 < 22;i_12 += 1)
                {
                    arr_42 [i_6] [i_2] [i_2] [i_2] [i_2] [i_2] = (max(1985894670923020812, var_7));

                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        arr_46 [i_6] [i_2] [i_2] [0] = ((var_6 | (((((~var_5) > (arr_22 [i_1 - 1] [i_1 - 1] [i_6])))))));
                        var_32 = (min(var_32, var_2));
                        var_33 += 210;
                    }
                }
            }
            var_34 = ((((max((arr_10 [i_1 - 4] [i_1 + 2]), (arr_10 [i_1 + 2] [i_1 - 1])))) ^ (((!(arr_4 [i_1 + 2] [i_2]))))));
            arr_47 [i_2] [i_1] [1] = var_1;
        }
    }
    var_35 = ((((((var_12 ? 7278917562770967671 : var_3)) * 60)) <= var_12));
    var_36 = (((max((6678863194469219389 ^ var_7), (var_1 <= var_12))) > (((((var_2 ? var_13 : 0)) * (var_4 * var_7))))));
    var_37 *= ((((((~((166 ? 188 : 195)))) + 2147483647)) << (14457 - 14457)));
    var_38 = (var_10 ? (((7791 ? ((9135 << (var_9 - 2174863914876558021))) : 1))) : (((-20813 % var_6) ? (((var_3 ? var_4 : var_4))) : ((var_7 ? 0 : 6678863194469219389)))));
    #pragma endscop
}
