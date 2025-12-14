/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_11));
    var_21 = var_10;
    var_22 = (max(var_22, (((var_16 ? var_7 : (960 % var_3))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_23 = (arr_1 [1]);
        var_24 = (arr_2 [2] [i_0]);
        var_25 = (max((arr_0 [i_0] [i_0]), (((((0 % (arr_2 [i_0] [i_0])))) ? (((arr_0 [i_0] [i_0]) / var_11)) : 5))));
        arr_3 [i_0] [i_0] &= (((max((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : var_19)), var_17)) >= (((!(((1286572380019444216 >> (arr_1 [i_0])))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_26 = (((arr_5 [i_1]) * (arr_5 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_27 = (min(var_27, (((((var_6 % (arr_13 [i_2]))) == (arr_13 [i_1]))))));
                        arr_14 [i_1] [i_1] = ((var_2 != (arr_8 [i_3] [i_3] [i_3 - 2])));
                    }
                }
            }
        }
        var_28 = (((~(arr_10 [i_1] [i_1] [i_1] [i_1]))));
        var_29 = (((!var_7) ? (var_9 == 1) : var_7));
    }

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_30 -= ((max(-6, (arr_16 [i_5]))));
        arr_17 [i_5] = ((-9215775935944694204 % ((((arr_15 [i_5]) ? (arr_15 [i_5]) : (arr_15 [i_5]))))));
    }
    #pragma endscop
}
