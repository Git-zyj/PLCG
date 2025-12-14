/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (var_1 | 64785)));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_12 = ((-(min(4145, 5538392379427424292))));
                        arr_9 [i_0] [i_0] = (9223372036854775807 * ((((arr_8 [i_0] [i_0 + 4] [i_2]) ? 0 : (!var_10)))));
                        var_13 = (arr_8 [i_3] [0] [i_0]);

                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            var_14 = ((-4145 ? 10492767719956409337 : 2887659768156083071));
                            var_15 -= (((!var_9) * (((150 < (arr_10 [i_2]))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_16 += var_6;
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = 105;
                            arr_16 [i_0 + 4] [i_0 + 4] [i_0 + 4] [16] [19] [i_0] = -var_4;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_17 = -8;
                            arr_19 [i_0] [i_0] [i_0] = (((arr_6 [i_6] [6] [i_2] [i_1]) ? ((((arr_11 [i_6] [i_3] [i_0 + 1] [i_3] [i_0]) - var_8))) : ((((((arr_18 [i_3] [i_3] [i_3] [i_3] [i_3]) ? var_7 : 3489166804397834170))) ? (var_6 - 49) : -4145))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_18 = 17019;
                            var_19 = ((~(((var_2 + -945690796) ? (arr_5 [i_0] [i_0] [i_0]) : (((!(arr_5 [2] [i_1] [i_7]))))))));
                            arr_23 [i_1] = ((-(((arr_0 [i_0 - 1] [i_0 + 2]) * (arr_1 [i_0 + 1])))));
                            arr_24 [i_0] [i_0] [i_2] [i_3] [i_0] [i_1] = (((max(-2334240868561165106, (arr_22 [14] [i_1] [i_2] [4] [14]))) - var_1));
                        }
                    }
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        arr_29 [i_2] [i_2] [i_0] [i_0] = 9399260217797004766;
                        var_20 = (max(var_20, ((min((arr_25 [i_0] [i_1]), (var_6 < var_7))))));
                    }
                }
            }
        }
    }
    var_21 = var_0;
    #pragma endscop
}
