/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_1 ? var_3 : var_2));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = (((!(arr_5 [i_0 + 1]))));
                    arr_11 [i_2] [i_1] [i_1] = (~(~71));
                    arr_12 [i_0] [i_1] [i_2] = (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])));
                    var_22 = -32701;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_2] [i_2] [i_0] [i_4] = var_2;
                                arr_19 [i_0] [i_1] [i_2] [i_2] = ((var_4 ? (arr_13 [i_0] [i_3] [i_2] [i_0] [i_4] [i_2]) : var_0));
                            }
                        }
                    }
                }
            }
        }
        var_23 = 14631;
        var_24 = (~var_19);
    }
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        arr_23 [i_5 + 2] = ((var_17 ? (arr_21 [i_5 + 1]) : ((255 ? var_0 : (arr_21 [i_5 + 1])))));
        var_25 = ((((arr_20 [i_5]) ? ((65535 ? var_12 : 2287145281)) : var_8)));
    }
    var_26 = var_1;
    #pragma endscop
}
