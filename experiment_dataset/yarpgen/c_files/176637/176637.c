/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (var_4 ? (((var_6 * var_8) - ((var_4 ? var_4 : var_10)))) : var_9);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (((arr_2 [i_0]) ? ((((((min((arr_1 [i_0] [i_0]), var_6))) && (var_1 % var_1))))) : var_1));
        var_14 = (min((arr_1 [i_0] [i_0]), var_5));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = (((arr_3 [i_0] [i_1] [i_2]) && var_5));
                    arr_10 [i_0] [i_1] [2] [i_1] &= (arr_6 [i_0] [i_0] [i_1] [i_0]);
                    var_15 = (max(var_15, var_4));
                    var_16 = (min(((var_7 ? (arr_7 [i_0] [i_0] [i_0]) : var_3)), (((-(arr_2 [i_0]))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_17 += (min(var_10, ((var_10 ? var_7 : ((var_4 ? var_2 : var_3))))));
        var_18 = (max(var_18, ((min(var_7, (((((4039836036 ? 4039836036 : 1166793292)) > (max((arr_12 [i_3]), var_11))))))))));
        var_19 = (min(0, 2350227787));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_20 = max((arr_15 [15] [i_4]), (((arr_11 [i_4] [i_4]) ? var_8 : (max(var_5, (arr_15 [i_4] [i_4]))))));
        var_21 = max(((((arr_11 [i_4] [i_4]) > (arr_11 [i_4] [i_4])))), var_5);
        var_22 = var_7;
    }
    #pragma endscop
}
