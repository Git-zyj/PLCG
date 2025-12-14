/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [8] = 119;
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (((var_2 ? (arr_3 [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0] [i_0]))));
                }
            }
        }
    }
    var_20 = -1;
    var_21 = (min(var_21, 1502844596660542865));
    var_22 = ((((((var_19 ? 4160749568 : -8959540835272178261)) > (((var_12 ? -25 : var_10))))) ? (((min(var_19, var_7)) - 4714828800324363588)) : var_4));

    /* vectorizable */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_23 = (max(var_23, ((((arr_10 [i_3 - 1]) ? var_17 : var_15)))));
        arr_11 [i_3] = (arr_1 [i_3 - 1]);
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        var_24 = (((arr_13 [i_4]) ? (arr_13 [i_4]) : (arr_13 [i_4])));
        var_25 = (arr_14 [i_4 + 4]);
        var_26 = ((-8867372289900597860 ? (arr_14 [i_4 + 4]) : (arr_13 [10])));
        arr_15 [i_4] [i_4] = (!-1);
    }
    #pragma endscop
}
