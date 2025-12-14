/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = var_0;
                var_13 = ((~var_9) - (max(((1 << (var_2 + 88))), (~var_10))));

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    var_14 = (((var_4 ? var_2 : (arr_6 [i_2] [i_2] [i_2 - 2]))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_2] [i_3] = (var_0 || ((var_2 || (!38))));
                        var_15 += ((!((min(211, 78)))));
                        var_16 = (min(var_16, (((!((((!11) ? ((((arr_7 [i_3] [18] [i_1] [6]) ? var_10 : var_9))) : -var_6))))))));
                    }
                    var_17 |= (+-211);
                }
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    var_18 = max((!var_7), -0);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_19 -= var_1;
                                var_20 -= ((((0 && (arr_6 [i_0] [i_1] [i_5 - 1]))) ? 71613982 : 45));
                                var_21 = ((~(arr_8 [i_0] [i_0] [i_4] [i_5] [i_6])));
                            }
                        }
                    }
                    var_22 = (max(-4, (((arr_15 [i_4] [i_4 - 1] [i_4 + 4] [i_4 + 3] [i_4 + 2] [i_4 + 2]) ? (arr_15 [i_4 + 2] [i_4 - 1] [i_4 + 4] [i_4 + 4] [i_4 + 2] [i_4 + 2]) : -12))));
                }
                for (int i_7 = 4; i_7 < 19;i_7 += 1)
                {
                    arr_19 [i_7] = -var_10;
                    var_23 = (!var_11);
                    arr_20 [i_0] [i_0] [1] [i_7] = var_8;
                    arr_21 [i_0] [i_7] [i_0] = (((arr_13 [i_7] [i_7 + 1] [i_0] [i_0] [1] [i_0]) ? 1 : (min((((var_6 * (arr_5 [i_0] [i_0])))), var_3))));
                    arr_22 [i_7] = ((-(((arr_18 [i_0] [i_0] [i_0] [i_7 - 2]) ? (arr_18 [i_0] [i_7] [i_0] [i_7 - 2]) : (arr_18 [i_0] [i_0] [i_7] [i_7 + 2])))));
                }
                var_24 = ((~(~1073217536)));
            }
        }
    }
    var_25 = (((min(var_11, (~var_0))) - var_7));
    #pragma endscop
}
