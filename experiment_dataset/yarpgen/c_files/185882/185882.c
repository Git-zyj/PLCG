/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = ((35184304979968 ? (((min(var_8, (arr_1 [i_0]))))) : (~-9161211946431699650)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((((((+(((arr_9 [10] [0]) ? (arr_0 [i_1] [i_2 - 1]) : var_0))))) ? -21 : (min((~3701794830221237272), (~var_8))))))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_17 = (((min(21, (arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4])))));
                            var_18 = (((((arr_8 [i_0] [14] [i_2 - 1] [i_1 + 1]) * (arr_8 [i_0] [i_1] [i_2 - 1] [i_1 - 2]))) < (((arr_8 [i_0] [i_1 - 2] [i_2 - 1] [i_1 - 2]) ? (arr_13 [i_0] [i_1 - 2] [i_1 - 1] [i_1] [i_0] [i_0]) : 21))));
                            arr_16 [i_0] = min(3575180905, (((!(-21 | var_15)))));
                            arr_17 [i_0] [i_1] [2] [i_3] [i_0] [i_4] = ((35184304979993 && (((~((min(-103, var_1))))))));
                        }
                        for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            var_19 = (min(((((arr_7 [i_0] [i_1] [i_3] [i_5]) ? var_7 : var_14))), (((((-(arr_20 [i_3])))) ? (((-(arr_8 [i_0] [i_1] [i_0] [i_3])))) : 7686962387422250223))));
                            var_20 = (min(((min((min(21, (arr_20 [9]))), var_14))), (arr_18 [i_0] [i_3] [i_3] [i_5] [i_5] [i_5 + 1])));
                            arr_21 [1] [1] [i_1 + 1] [i_2 - 1] [i_3] [i_0] = (~var_9);
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_21 = (((((var_12 ? (arr_12 [i_0] [i_3] [i_2] [i_0] [i_0]) : var_6))) ? (arr_15 [i_0] [i_1 + 1] [i_1 + 1] [i_1] [i_0] [i_3]) : 46));
                            var_22 = (((arr_22 [i_0] [10] [i_1 + 1] [i_1 - 1] [i_6] [i_0] [i_6 + 1]) ? (arr_22 [i_0] [i_0] [i_1 + 1] [i_2] [i_3] [i_0] [i_3]) : -123));
                            var_23 = (((arr_10 [i_0] [i_0] [i_2 - 1]) ? (arr_6 [13] [i_0] [i_2 - 1]) : 32767));
                        }

                        for (int i_7 = 3; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            var_24 = (((((((min((arr_24 [i_0] [i_7]), var_8))) ? var_9 : 39))) && (((arr_7 [i_0] [1] [i_0] [i_0]) <= (arr_14 [i_7] [i_0] [i_2 - 1] [i_2 - 1] [i_1 + 1] [i_0] [i_0])))));
                            var_25 = (max(var_25, ((min(var_2, (min(var_14, var_6)))))));
                            var_26 = (min((min(var_2, ((((arr_7 [i_0] [i_1] [i_2] [i_1]) != -26))))), (arr_1 [i_0])));
                        }
                        for (int i_8 = 3; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            var_27 = 0;
                            var_28 = (max(var_28, var_8));
                            arr_30 [i_0] = 0;
                        }
                        arr_31 [0] [i_0] [1] = ((-35184304979969 ? -var_4 : 3575180905));
                        var_29 = ((min((((-(arr_9 [i_0] [i_0])))), (min(7778876404644729023, 0)))));
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        var_30 = (min((min(-18, ((0 % (arr_12 [i_0] [i_1 + 1] [i_2] [i_9] [i_0]))))), ((((((-127 - 1) > -119))) >> (((-127 - 1) + 149))))));
                        var_31 = (min(((~(arr_19 [i_2] [i_0] [2] [i_2] [i_2 - 1] [i_2 - 1] [i_2]))), ((-7749767075843011074 ? (arr_19 [i_2] [i_0] [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (arr_27 [i_2] [i_0] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        arr_39 [i_0] [i_10] [i_2 - 1] [i_1] [i_1] [i_0] = ((-123 ^ 3688346679645404117) != (arr_33 [i_0] [i_0] [i_0] [i_0]));
                        var_32 = ((var_6 ? (arr_33 [i_1 - 2] [i_0] [i_10] [i_0]) : ((158873010 ? (arr_33 [i_0] [i_0] [i_2] [i_10]) : var_13))));
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                    {
                        var_33 = (((arr_33 [i_0] [i_0] [i_2 - 1] [i_11]) ? var_6 : (((!(arr_3 [i_0]))))));
                        arr_42 [i_0] [i_1] [i_0] [i_11] = ((+(min((arr_33 [i_2 - 1] [i_0] [i_0] [i_0]), var_3))));
                    }
                }
            }
        }
        var_34 = ((((min(((var_5 & (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), ((((arr_2 [i_0]) ? 0 : (arr_40 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? var_7 : (min((~var_5), var_13))));
    }
    var_35 = var_3;
    #pragma endscop
}
