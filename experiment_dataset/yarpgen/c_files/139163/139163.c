/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 = var_4;
    var_18 = var_13;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = (max(var_19, (arr_0 [i_0])));
        var_20 = (max(var_20, var_4));
        arr_2 [i_0] = var_15;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_0] [i_3] = ((~(~var_15)));
                        arr_13 [i_0] [i_1] [i_0] [i_1] [i_3] [i_0] = var_15;
                        arr_14 [i_0] [i_0] [i_2] [i_3] = (arr_3 [i_0] [i_1] [i_3]);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_17 [2] [i_4] &= var_9;
        arr_18 [i_4] = ((((arr_16 [i_4]) ? var_11 : (((arr_4 [i_4] [i_4] [i_4]) | var_9)))) >> (((arr_11 [0] [i_4] [i_4] [i_4] [i_4] [i_4]) + 1908528083)));
        var_21 = ((var_6 ? (var_8 + var_1) : (((((var_12 ? (arr_0 [i_4]) : (arr_11 [i_4] [0] [i_4] [i_4] [i_4] [i_4])))) ? (min((arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]), (arr_4 [i_4] [i_4] [i_4]))) : var_15))));
        var_22 = (max(var_22, var_15));
    }
    #pragma endscop
}
