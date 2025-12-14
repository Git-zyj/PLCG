/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((-((var_13 ? var_0 : var_1)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_18 = (max(var_18, (arr_10 [4] [i_1 + 2] [6] [i_3])));
                        var_19 = (max((arr_7 [i_1 + 2] [i_1 + 2] [i_1 - 2] [i_1 + 4] [i_1 + 4] [i_1 + 4]), (arr_0 [i_0])));
                        arr_11 [7] [1] [i_2] [i_1 + 2] [i_1 - 1] [i_0] = ((((((((!(arr_4 [i_0] [i_2])))) & var_9))) ? (arr_1 [i_1 + 2] [i_1 + 2]) : (var_6 / var_3)));
                        var_20 = (min(var_20, (!18446744073709551611)));
                    }
                }
            }
            var_21 += (~2);
        }
        arr_12 [i_0] [i_0] = var_11;
    }
    var_22 = (((((~var_1) + 2147483647)) >> (var_4 - 4126723731222420322)));
    var_23 |= var_9;
    #pragma endscop
}
