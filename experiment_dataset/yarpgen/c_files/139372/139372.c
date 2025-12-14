/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = (((arr_2 [i_0] [i_2] [i_2]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_9 [i_3 + 2] [1] [i_3 + 1] [i_3 - 3] [i_3])));
                                var_20 = (min(var_20, (((((!(var_2 != var_14))) ? ((-((-1 ? 12469441326512680646 : (arr_10 [i_3] [i_1] [i_1] [i_3] [i_4]))))) : (arr_1 [5] [5]))))));
                                arr_13 [8] [i_1] [i_2] [i_1] [i_0] = ((-(arr_6 [i_4] [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                    arr_14 [10] [i_1] [i_0] [i_0] = (((arr_1 [i_1] [i_1]) ? (min((arr_10 [i_1] [i_1] [i_0] [i_1] [i_0]), (arr_11 [i_0] [i_1] [i_2]))) : (~var_7)));
                }
            }
        }
    }
    var_21 = var_2;
    var_22 = (~var_13);

    for (int i_5 = 2; i_5 < 16;i_5 += 1) /* same iter space */
    {
        var_23 = (arr_17 [i_5]);
        var_24 *= (arr_16 [i_5]);
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 16;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 4; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        var_25 = (min(var_25, (((-(~var_4))))));
                        arr_30 [i_6] = ((4324 ? 18 : 28478));
                        var_26 = (~(arr_26 [i_8 - 2] [i_7] [i_7 + 2] [i_6]));
                        arr_31 [i_6] [i_7] [i_8] [8] [i_6] = ((-((((arr_28 [i_7] [5] [i_8]) <= var_15)))));
                        arr_32 [i_6] [i_7] [i_8] [i_9] = 118;
                    }
                }
            }
        }
        var_27 -= ((!(arr_21 [1] [i_6])));
        arr_33 [i_6] [10] = (arr_25 [i_6] [i_6] [i_6 - 1] [i_6 - 1]);
    }
    var_28 &= (((((((min(var_9, var_17))) ? ((var_14 ? var_6 : 8217616643713849361)) : 1))) ? var_17 : var_6));
    #pragma endscop
}
