/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (684 & 1);
    var_19 = (var_13 == var_16);
    var_20 = (1 / var_16);
    var_21 = (max(var_21, (((((~((643098340 ? 1 : var_3))))) ? var_7 : (1403997477 / 1)))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_22 = ((((min(1, (arr_2 [i_0])))) < ((-(((arr_0 [8]) | var_15))))));
        var_23 = ((var_6 ? ((((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : 1))) : (min(19, -25))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_24 = 2882326765;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_13 [i_4] [i_4] [i_2] [i_2] [i_1] [i_1] = (arr_3 [i_3] [i_1 - 1]);
                        var_25 = (max(var_25, var_3));
                    }
                }
            }
        }
        arr_14 [13] = 2890969819;
        var_26 = (((arr_12 [i_1 - 2] [i_1] [i_1 - 2]) != (arr_5 [i_1 - 2] [i_1 + 1])));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        arr_19 [i_5 + 2] = (arr_0 [i_5 + 3]);
        arr_20 [i_5] = ((var_10 ? (arr_17 [i_5] [i_5 + 2]) : (arr_15 [i_5 + 3])));
    }
    #pragma endscop
}
