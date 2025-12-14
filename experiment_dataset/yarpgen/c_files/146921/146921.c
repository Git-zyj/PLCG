/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(((~((var_1 ? 2147483647 : var_0)))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_0] = ((-((var_6 << ((((-22887 ? (arr_3 [11]) : var_7)) + 25875))))));
            var_12 = (min(var_12, ((max((((((arr_1 [i_0]) ? var_0 : var_10)) >> (((arr_4 [i_1]) - 768164685)))), (((-var_9 ? (arr_4 [i_1 + 1]) : var_4))))))));
        }
        var_13 *= ((!(((~((32767 ? 13128598282726276480 : 6228979505267883225)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                {
                    var_14 = ((min((((255 >> (((arr_0 [i_3] [i_2]) + 4222619765673622587))))), (arr_4 [i_0]))));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_2] [i_2] [i_4] [i_2] = (((((arr_13 [1]) ? var_8 : 3564831565))));
                        var_15 = (max(var_15, (((!((min(((var_2 ? 3175234654 : var_7)), 13128598282726276477))))))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [3] [3] [i_5] [i_5] = ((((((max(var_5, var_1))) ? (((max((arr_8 [i_0]), (arr_13 [14]))))) : 18446744073709551615)) ^ 18446744073709551604));
                        arr_18 [i_5] = (min(((797340946 ? var_7 : var_6)), (!var_5)));
                        var_16 = (min(var_16, (-32767 - 1)));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 4; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_17 = (((arr_0 [i_7 - 2] [i_3 - 2]) ? -32757 : (arr_0 [i_7 - 2] [i_3 - 2])));
                            arr_24 [i_0] [i_2] [i_3] [4] [7] = var_4;
                            var_18 = (min(var_18, ((((-27372 / var_9) * var_7)))));
                        }
                        for (int i_8 = 4; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_19 = (max((var_6 < var_7), -var_7));
                            arr_29 [i_0] [i_0] [2] [i_0] [i_8] = 12217764568441668391;
                        }
                        var_20 = ((var_5 ? (arr_21 [i_0] [i_3 - 1] [i_3] [i_6]) : (((-(arr_21 [2] [i_3 - 1] [i_6] [i_6]))))));
                        var_21 = ((var_1 + (((730135746 && (arr_12 [i_3 - 1] [i_3 - 1] [i_3] [i_0] [i_6]))))));
                        arr_30 [17] [17] [17] = ((~(var_10 == -var_7)));
                    }
                    var_22 = (arr_27 [5] [5] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
