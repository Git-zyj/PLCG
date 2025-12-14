/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = var_19;
        arr_4 [i_0 + 1] = 31;
        arr_5 [i_0] = ((~(!-1440902778)));
        arr_6 [i_0] &= ((!(arr_0 [i_0 + 1])));
    }
    var_20 = (min(var_20, var_8));
    var_21 &= (2128841637 - 0);
    var_22 = var_2;

    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_10 [i_1] = (max(((!(arr_2 [i_1]))), (!var_1)));
        arr_11 [0] = ((~var_12) | (max(var_2, var_9)));
        var_23 = 65519;
        arr_12 [i_1] = var_15;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_24 -= var_5;
            arr_17 [i_2] [1] [i_1] = 48;
            arr_18 [i_1] = ((30720 ? -945064901 : (arr_7 [i_1])));
            arr_19 [i_1] [i_2] = var_3;
        }
    }
    #pragma endscop
}
