/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_20 = ((~(((~var_18) & var_4))));
        arr_4 [9] [i_0 + 1] = (arr_1 [i_0 + 1]);
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_21 -= var_16;
        var_22 = (min(var_22, 8593127480708900212));
        arr_8 [1] = 52616;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_22 [i_1] [i_1] [i_3] [i_4] [i_3] [i_5 + 1] = ((((max(var_1, 13))) ? ((((!(((255 ? (arr_20 [i_4]) : (arr_19 [6] [i_2] [i_2] [8])))))))) : 1073741823));
                                var_23 = (max(var_23, (max(((max(((var_10 | (arr_15 [12] [12] [12]))), (arr_10 [i_1] [i_2 - 1] [i_3])))), (max((arr_12 [i_2 - 1] [i_3]), var_5))))));
                                arr_23 [i_1] [4] [4] = var_3;
                                var_24 += (~(((arr_1 [i_5 - 1]) ^ (arr_13 [i_1 - 2]))));
                            }
                        }
                    }
                    arr_24 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_3] = var_13;
                    var_25 = (~545460846592);
                }
            }
        }
    }
    var_26 = (min(((var_1 ? var_4 : (var_16 + var_15))), (((var_6 ? -0 : var_0)))));
    var_27 = var_13;
    var_28 = (-2147483647 - 1);
    #pragma endscop
}
