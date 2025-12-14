/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = (min(var_7, var_6));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (max((!var_6), var_2));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = var_4;
                    var_13 = (max(var_13, var_8));
                    arr_10 [i_0] [15] [i_2] = ((!((var_5 || (!48569)))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        var_14 = (((arr_3 [i_3] [i_3] [i_3]) ? var_7 : ((var_6 ^ (arr_5 [1] [i_3 + 1] [i_3])))));
        arr_14 [i_3 + 2] = (arr_12 [i_3 - 3]);
        arr_15 [i_3 - 3] = arr_12 [i_3];
        arr_16 [i_3] [i_3] = (arr_11 [i_3 + 1]);
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        var_15 = (min(0, (((((16966 || (-127 - 1)))) < -126))));
        arr_19 [i_4] = min((arr_18 [i_4]), var_8);
        var_16 = (-127 - 1);
        arr_20 [i_4] [i_4] = (((((var_3 << ((var_5 ? (arr_18 [i_4]) : var_4))))) ? ((min((((arr_17 [i_4] [i_4]) || (arr_18 [i_4]))), (!var_4)))) : (!1)));
    }
    var_17 = var_9;
    var_18 = (~0);
    #pragma endscop
}
