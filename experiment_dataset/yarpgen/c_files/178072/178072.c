/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_6);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_1 - 1] [i_2] [1] [21] = ((43110 ? (arr_5 [i_1 + 1] [3] [i_1 + 1]) : var_17));
                    arr_10 [i_2] [i_2] [i_2] [8] = var_1;

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_21 = (min(var_21, (~var_15)));
                        var_22 = var_16;
                        var_23 = var_17;
                        arr_13 [7] [i_2] [i_2] = -106;
                        var_24 = (((arr_11 [i_0 + 4] [16] [i_0 - 1]) == (((arr_8 [i_0 + 4]) ? (arr_1 [11]) : (arr_4 [i_3] [i_3] [i_3])))));
                    }
                    arr_14 [i_0 + 3] [i_1 - 1] [i_2] [i_2] = (-((0 ? var_10 : (arr_4 [i_1] [i_1 + 1] [i_1 + 1]))));
                }
            }
        }
        var_25 -= var_1;
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    {
                        arr_24 [i_5 + 1] [i_5] = (((arr_5 [1] [i_4 - 3] [i_4]) || var_2));
                        var_26 = (max(var_26, var_5));
                    }
                }
            }
        }
    }
    for (int i_7 = 4; i_7 < 15;i_7 += 1)
    {
        var_27 = (((((225 ? var_18 : (arr_18 [i_7 - 4] [i_7] [i_7] [i_7])))) ? (((min(63, (arr_19 [i_7 - 2] [i_7 - 1] [i_7]))))) : (min(var_9, var_1))));
        arr_29 [i_7] = ((-(((!(arr_28 [i_7]))))));
    }
    var_28 = (((min(var_4, (min(var_5, var_18)))) == var_17));
    #pragma endscop
}
