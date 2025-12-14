/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;
    var_16 = var_6;

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_2;
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [i_3] = ((((((((var_6 ? (arr_5 [i_1] [i_2 - 2]) : 1))) ? ((110 ? 1 : -14652)) : (var_6 > var_9)))) ? (((0 ? var_4 : var_12))) : (((arr_2 [i_2 - 2] [i_1]) / var_7))));
                        var_17 = var_10;
                        arr_13 [i_0] [i_1] [i_3] [i_3 + 2] = (var_10 + var_5);
                        arr_14 [i_3] = (min(((min(0, var_0))), var_8));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    {
                        arr_24 [i_0 + 1] [i_0 + 1] [i_6 + 1] = (arr_18 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_6 + 1]);
                        arr_25 [i_0] [12] [1] [i_5] [i_6] = ((!(arr_0 [i_0])));
                        var_18 = ((+((max((arr_23 [i_0 - 1] [i_5]), 22)))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_7 = 1; i_7 < 18;i_7 += 1)
        {
            arr_28 [i_0 - 1] [i_7 + 1] = (var_9 - 1);
            arr_29 [i_0] [i_7 + 2] [i_0] = (-127 - 1);
        }
        var_19 = var_0;
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 18;i_8 += 1) /* same iter space */
    {
        arr_32 [i_8] = var_4;
        var_20 &= (~var_1);
        arr_33 [i_8] [i_8] = var_4;
    }
    for (int i_9 = 3; i_9 < 12;i_9 += 1)
    {
        arr_36 [i_9] = var_14;
        arr_37 [i_9 + 1] [i_9] = (var_14 * ((0 ? (arr_0 [i_9 - 1]) : 0)));
        var_21 = (((min(((-18 ? var_1 : (arr_23 [i_9] [i_9]))), (!1))) * (((!(!var_14))))));
    }
    #pragma endscop
}
