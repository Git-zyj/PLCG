/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-var_0 ? ((((-10 >= (max(var_8, var_6)))))) : (((max(var_6, var_8)) / var_3))));
    var_17 = var_6;
    var_18 = (max(((min(var_1, 10))), ((min((!var_3), 10)))));
    var_19 = (((((var_13 | var_5) != (var_5 >= var_5))) ? (5347 | var_14) : (1027450858521656979 != 31434)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_20 = ((2409 ? 10568 : -1027450858521656971));
                        arr_11 [1] [i_1 + 1] [i_2] [i_1] = ((0 ? (((var_1 + (arr_9 [i_0] [i_0] [i_0])))) : var_12));
                        var_21 = var_2;
                    }
                }
            }
        }
        arr_12 [6] [i_0] = (arr_10 [i_0] [i_0] [i_0] [8]);
        var_22 = var_5;
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        arr_21 [12] [i_5] [i_5] [i_7] = (((((!(arr_18 [i_4] [6] [i_6] [i_7])))) * (((!(var_6 ^ var_3))))));
                        var_23 = ((-5348 >> (-10 + 33)));
                        arr_22 [i_4] [i_7] [i_4] [i_4] [i_4] [0] = (arr_17 [i_7] [i_6] [i_5] [i_4]);
                        var_24 *= ((((max(var_11, (min(var_5, -1027450858521656980))))) ? ((((((var_15 < (arr_14 [i_4] [i_5])))) << (((((arr_19 [i_6] [i_4] [i_5] [i_4] [8]) ? 5347 : 15)) - 5322))))) : (((var_3 % var_12) ? (~1) : var_8))));
                    }
                }
            }
        }
        var_25 = (-523553971584890701 > 1);
    }
    #pragma endscop
}
