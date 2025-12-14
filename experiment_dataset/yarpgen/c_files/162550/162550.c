/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (max((((arr_3 [i_0 + 1]) ? 255 : (arr_2 [i_0] [i_0] [i_1]))), ((max((arr_2 [i_0] [i_1] [i_1]), 32635)))));
                arr_5 [i_0] [i_0] = ((min((((8 ? 1 : var_4))), (((arr_0 [i_1]) ? var_0 : (arr_1 [i_0]))))));

                for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_1] [10] [i_1] |= 31968;
                    var_12 = (~-8681681754706039644);
                }
                for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0 + 1] [i_0] [i_3] = var_6;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_1] [i_3 + 1] [i_3 + 1] [i_0] [1] = (arr_15 [i_0] [i_4] [i_3 + 1] [i_3]);
                                var_13 = -27293;
                                var_14 = var_9;
                                var_15 |= (((var_10 | var_5) - -27293));
                                arr_20 [i_5] [i_5] [i_0] [i_3 + 1] [i_0] [i_0 + 1] [i_0 + 1] = (((-1374161531 + 2147483647) << (27299 - 27299)));
                            }
                        }
                    }
                }
                var_16 = (max((max((arr_15 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]), 230620455)), var_7));
            }
        }
    }
    var_17 = (max(var_17, ((max(var_0, var_3)))));
    #pragma endscop
}
