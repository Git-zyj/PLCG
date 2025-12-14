/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_0 ? var_11 : ((var_6 ? var_3 : var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((((((max((arr_0 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0] [i_1]))))) / (((arr_2 [1]) ? 12122 : var_8))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_20 = (((((min(-4044880357235277787, 896)) + 9223372036854775807)) >> (((((-1392410524404949242 <= (arr_5 [i_2] [i_0] [i_0] [i_3 + 2])))) & var_6))));
                            var_21 = ((var_8 ^ ((var_6 ? (arr_5 [i_2] [i_2] [i_2 + 2] [i_2 + 2]) : (arr_5 [i_2] [i_2] [i_2 + 2] [i_2 + 2])))));
                        }
                    }
                }
            }
        }
    }
    var_22 = var_0;
    var_23 &= var_3;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    var_24 = (((37326 <= (min((arr_13 [i_4]), var_5)))));

                    for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        arr_20 [i_4] [i_4] = (~var_12);
                        arr_21 [1] [i_5] [i_6] [i_4] = ((((((arr_16 [i_4] [i_4] [i_7] [i_7 - 1]) ? (arr_16 [i_4] [i_4] [i_4] [i_7 - 1]) : (arr_16 [i_4] [i_5] [i_7] [i_7 - 1])))) ? (min((arr_16 [i_4] [i_4] [i_4] [i_7 - 1]), var_17)) : var_6));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((~((((~(arr_12 [i_4])))))));
                            arr_25 [i_4] [i_4] [1] [1] [i_4] = (((((204570222 & 53413) - (~4044880357235277786))) != (((~(arr_19 [i_4] [i_4]))))));
                            var_25 = 2947396979302041912;
                            arr_26 [i_4] [i_8] [i_6] [i_4] [i_8] = ((-(((arr_17 [i_7 + 2] [i_7 - 1] [i_4] [17]) ? ((1 * (arr_13 [i_5]))) : var_11))));
                        }
                        var_26 = (max(var_26, ((59903 ? 4090397061 : -2947396979302041912))));
                        arr_27 [i_5] [i_6] [i_4] = ((((max((((var_15 ? (arr_13 [i_7]) : var_12))), var_16))) ? 2947396979302041896 : (arr_18 [i_4])));
                    }
                    for (int i_9 = 1; i_9 < 18;i_9 += 1) /* same iter space */
                    {
                        var_27 = (arr_13 [i_5]);
                        arr_31 [i_4] [i_4] [i_4] [1] [9] = (min((max(((4090397055 ? (arr_18 [i_4]) : (arr_17 [i_4] [i_4] [i_6] [2]))), ((((arr_16 [i_4] [i_6] [i_5] [i_4]) == var_10))))), (min((arr_17 [i_5] [i_9 - 1] [i_5] [i_9 - 1]), var_15))));
                    }
                    for (int i_10 = 1; i_10 < 18;i_10 += 1) /* same iter space */
                    {
                        var_28 = ((-(((((17 ? 5722607057409030215 : 0))) ? 894 : var_0))));
                        var_29 ^= ((((arr_14 [i_6] [i_6]) ? 4090397074 : (min(var_9, (arr_33 [i_5]))))));
                        var_30 ^= (((((arr_32 [i_6] [i_10 + 1] [12] [i_10 - 1] [i_10 - 1]) ? (arr_16 [i_6] [i_10 + 1] [i_10 + 2] [i_10 + 1]) : (arr_32 [i_6] [i_10 + 1] [i_6] [i_10 + 2] [i_10 + 1])))) ? ((~(arr_16 [i_6] [i_10 + 2] [16] [i_10 - 1]))) : (((min((arr_32 [i_6] [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_10 + 1]), (arr_32 [i_6] [i_10 + 2] [i_10] [i_10 + 1] [i_10 - 1]))))));
                    }
                    var_31 = ((((((((arr_30 [i_4] [i_4] [i_5] [9]) && var_9)))) | var_9)));
                }
            }
        }
    }
    #pragma endscop
}
