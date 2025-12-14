/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((~var_5) + var_3)), var_8));
    var_11 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [19] |= var_3;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_12 -= (((arr_4 [i_0 + 1]) ? (arr_4 [i_0 + 1]) : -10025));
                    arr_10 [8] [4] [6] = 849514907;
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    arr_14 [i_3] [i_3] = (max(((((((arr_0 [i_3]) ? 3445452383 : (arr_12 [i_0] [i_1] [i_3])))) ? (((arr_3 [i_0] [13]) ? (arr_3 [i_0] [i_0]) : 0)) : (-127 - 1))), var_4));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_13 -= (((arr_9 [i_1] [i_3] [i_1]) ? 744146290 : (((~(arr_16 [i_0 + 1] [i_1 - 1] [1] [i_0 + 1] [2]))))));
                                var_14 = var_6;
                            }
                        }
                    }
                    var_15 = (max(var_15, ((((~-16991) ^ (-var_3 + 744146295))))));

                    for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        var_16 = (max(((((arr_16 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_1] [i_3]) ? var_8 : (arr_16 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_3])))), (max(-120, 1911863647))));
                        var_17 = var_9;
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [i_1] [i_3] [i_7 + 1] = var_6;
                        arr_25 [i_0] [1] [1] [i_3] [0] |= ((!(((var_7 ? var_8 : var_8)))));

                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            var_18 = (arr_15 [13] [i_3]);
                            arr_29 [1] [i_1 - 1] [i_1] [i_3] [i_1 - 1] [i_1 - 1] = var_8;
                            var_19 = ((var_7 ? (arr_20 [i_0 + 1] [i_1 - 1] [i_7 - 1] [i_7 - 1]) : (arr_20 [i_0 + 1] [i_1 - 1] [i_7 - 1] [i_7 + 1])));
                            arr_30 [i_3] = (var_7 ^ 744146290);
                        }
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_20 -= var_3;
                            var_21 = (min(var_21, (var_2 / var_5)));
                            arr_34 [i_0] [i_3] = 744146290;
                        }
                    }
                }
                var_22 = (max(var_22, 3445452373));
                arr_35 [i_0 + 1] = ((3445452392 ? (((max(var_7, (arr_9 [i_0] [i_1] [i_1]))))) : (arr_8 [1])));
            }
        }
    }
    #pragma endscop
}
