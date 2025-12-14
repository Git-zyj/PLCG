/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = (max(var_13, (!35766)));
    var_14 &= ((-129535898 ? (2147483647 | var_10) : ((var_4 ? var_5 : var_10))));

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) ? 9588 : ((min(0, 1572864)))));
        var_15 = (min(0, 3123987884));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (arr_5 [i_1] [i_1 + 1]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_2] = (((((15 ? 32768 : 65519))) ? (arr_14 [i_4 - 1] [i_3] [6] [i_1]) : var_4));
                        var_16 += (((((var_8 ? -11 : -3014390005178526324))) ? (arr_0 [1] [i_2]) : (((arr_11 [2] [2]) ? -69846668 : var_4))));
                        var_17 = (arr_4 [i_2]);
                    }
                }
            }
        }
        arr_16 [i_1 + 3] [i_1] = (4138309225 == 1197115321300697185);
        arr_17 [i_1] = (arr_1 [i_1 + 2] [i_1 - 2]);
    }
    for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_18 = (arr_10 [i_5] [i_5]);
        arr_20 [i_5] = (arr_11 [i_5] [i_5]);
    }
    for (int i_6 = 3; i_6 < 18;i_6 += 1)
    {
        arr_24 [15] = (((((-2147483647 - 1) / 1582774403)) << ((((((1 ? 6856812296688436867 : (arr_21 [i_6]))))) + 155))));
        var_19 -= (((((((7268 ? 129535887 : 57))) ? (((arr_0 [8] [i_6 - 1]) ? var_3 : (arr_21 [i_6]))) : (((var_11 ? var_10 : 1572846))))) << (((arr_22 [i_6] [i_6 - 1]) * 0))));
        var_20 = (min(var_20, ((((max(-129535898, 111)) > ((((1 / (arr_23 [i_6]))))))))));
    }
    var_21 = var_7;
    #pragma endscop
}
