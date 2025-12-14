/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_16 &= var_6;
        var_17 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_18 = (2047 && 1);
            var_19 = (var_3 % var_5);
        }
        var_20 = ((63509 ? (arr_2 [i_0]) : (arr_1 [i_0 - 1])));
        var_21 = (min(var_21, ((((arr_3 [i_0 + 3] [i_0] [i_0 + 3]) ? 17500716144453922880 : var_10)))));
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_3] [i_2] = ((((var_15 ? (arr_11 [i_2 - 1] [i_2 - 1] [i_4] [i_2]) : var_13)) / 2767));
                    arr_14 [i_2 + 1] [i_2] [i_2] [1] = ((((63510 ? 63500 : ((min(var_7, 2024))))) == (((2033 ? 63518 : (arr_5 [i_2 + 2] [i_2]))))));
                    var_22 = 63506;
                    var_23 = var_11;
                }
            }
        }
        var_24 = (max(var_24, (1186 >= var_2)));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_25 = var_7;
        arr_18 [i_5] = arr_15 [i_5] [i_5];
    }
    for (int i_6 = 4; i_6 < 17;i_6 += 1)
    {
        var_26 = (arr_20 [i_6 - 2]);
        arr_21 [i_6 + 3] [i_6] = (arr_12 [i_6] [i_6] [i_6] [i_6]);
        var_27 = (arr_19 [i_6] [i_6 + 1]);
        arr_22 [i_6] = var_1;
    }
    var_28 ^= var_12;
    #pragma endscop
}
