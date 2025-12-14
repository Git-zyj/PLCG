/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((-(~var_3))), 117));
    var_17 = (min(((var_13 % (((min(var_9, var_4)))))), (!-3232325056)));
    var_18 = (var_0 >= (0 != var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_19 = (((min(-22, (arr_3 [i_0] [i_1] [i_0]))) % 103));
                    arr_9 [i_0] [i_0] [i_2] = (max(((max(((var_4 ? 1 : var_3)), 19))), ((var_14 | (min((arr_8 [i_0] [i_0] [i_0] [i_2]), var_6))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_20 = ((((((-15 ? -72 : (arr_3 [i_1] [i_1] [i_3])))) ? ((var_0 ? (arr_11 [i_0] [i_0] [i_1] [i_0] [i_2]) : var_7)) : (var_7 && 1))));
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] = ((((((992 ? var_3 : var_1))) ? ((max((arr_1 [i_2]), (arr_8 [i_0] [i_0] [i_0] [i_3])))) : ((1 ? var_4 : 252)))));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_21 ^= var_13;

                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_22 = var_8;
                            arr_18 [i_0] [i_5] [i_2] [i_1] [i_5] [i_0] = ((!(101 == -10)));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_23 &= var_11;
                            var_24 |= (((~var_8) ? 1 : (arr_22 [i_6] [i_2])));
                            var_25 += -var_0;
                            arr_23 [i_0] [i_0] [i_0] [i_2] [i_4] [i_6] = (min((!215), -84));
                        }
                        for (int i_7 = 2; i_7 < 10;i_7 += 1)
                        {
                            var_26 = (max((arr_17 [i_0] [i_1] [i_2] [i_1] [i_7 - 2]), (min(((var_7 ? (arr_1 [i_1]) : -1)), (var_12 * var_5)))));
                            arr_27 [i_7 - 1] [i_4] [i_2] [i_1] [i_0] = (min((arr_26 [i_0] [i_7 + 1] [i_2]), (((arr_26 [i_7] [i_7 - 2] [i_2]) ? (arr_26 [i_0] [i_7 + 3] [i_2]) : (arr_3 [i_7 + 3] [i_7 + 2] [i_7 + 3])))));
                            var_27 = var_9;
                            var_28 *= (((~var_0) ? ((-(arr_25 [i_0] [i_1] [i_2] [i_0] [i_7 + 2] [i_7 + 3] [i_1]))) : 54093));
                        }
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        var_29 = (var_9 | -var_12);
                        arr_31 [i_8] [i_2] = ((max(1, 34527)));
                        var_30 = (min(var_30, ((((max(var_4, 61)) & var_11)))));
                    }
                    var_31 = (max(var_13, ((min(var_7, 5851771883772712470)))));
                    arr_32 [i_0] [i_0] = (max((min(((max(1, (arr_16 [i_1] [i_1] [i_2] [i_2] [i_1] [i_1])))), (arr_13 [i_2] [i_2] [i_0] [i_1] [i_1] [i_0]))), 2255154338));
                }
                var_32 = (min(((18 ? 0 : 2)), (((min(var_15, 10330))))));
                var_33 = (((((((min(var_3, (arr_8 [i_0] [i_1] [i_0] [i_0])))) ? (arr_15 [i_0]) : ((var_5 ? (arr_2 [i_1] [i_1]) : 1))))) ? ((((!(!1))))) : (1062642245 - 263577054)));
                var_34 = (max(var_34, var_14));
            }
        }
    }
    var_35 = var_9;
    #pragma endscop
}
