/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0 - 3] [i_1 - 1] [i_2] = ((arr_0 [i_0 - 3]) ? 1 : (1 || 18446744073709551614));
                    arr_7 [i_0] [19] [1] [1] = (arr_0 [i_2]);
                }
            }
        }
    }
    var_20 = (((((!var_9) | var_18)) / var_2));

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = (arr_10 [i_3]);
        var_21 = (!var_6);
        arr_12 [1] = (((((((!(arr_5 [i_3] [i_3] [i_3])))) != -var_15)) ? (arr_4 [i_3]) : (((arr_0 [i_3]) ? 2 : var_5))));
        arr_13 [i_3] = ((((arr_10 [i_3]) ? (arr_1 [i_3] [i_3]) : (arr_1 [11] [i_3]))));
        var_22 &= (arr_8 [i_3]);
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_23 = (arr_4 [8]);
        arr_16 [i_4] = ((min((arr_2 [i_4]), var_0)));
    }
    #pragma endscop
}
