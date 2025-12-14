/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [4] [2] [i_0] = ((((max((((arr_0 [i_0]) ? var_8 : (arr_5 [i_0] [10]))), (((arr_0 [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_2 [i_0])))))) ? ((((arr_5 [i_0 - 2] [i_0 + 1]) ? (((arr_1 [i_0] [3]) ? (arr_0 [i_0]) : (arr_3 [i_0]))) : (-11549 == 3563736466)))) : (((~8) ? (arr_1 [8] [1]) : (min(var_2, 7))))));
                arr_7 [i_0] [i_0] = (max((arr_2 [i_0]), (((arr_2 [i_0]) ? var_1 : (arr_2 [i_0])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_11 -= (min((((((var_6 ? var_3 : (arr_9 [i_2])))) ? ((max(var_8, (arr_8 [i_2])))) : ((min(169, -4360))))), var_0));
        var_12 = (((arr_8 [i_2]) ? (arr_9 [i_2]) : (4360 > 4096)));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_13 = (max(var_13, (((~((var_3 * (max(18446744073709551611, (arr_11 [i_3] [7]))))))))));
        var_14 = ((!((((((var_2 ? (arr_10 [i_3] [i_3]) : (arr_12 [i_3])))) ? var_10 : (var_8 * var_0))))));
        arr_14 [10] [10] &= (arr_9 [11]);
    }
    var_15 = ((((min((((var_9 ? var_10 : var_8))), (max(var_10, var_7))))) ? (((((min(var_10, var_5)) < (~var_1))))) : ((var_8 ? ((4202 ? var_10 : var_6)) : var_0))));
    var_16 = (((((((min(-28033, 32))) ? ((var_6 ? var_9 : var_5)) : (((70 ? var_8 : var_10)))))) ? ((((~var_4) ? ((var_2 ? 255 : var_4)) : ((max(var_9, var_4)))))) : (max(((var_3 ? var_3 : var_2)), (((var_8 ? var_10 : var_0)))))));
    var_17 = ((min(var_5, ((var_5 ? var_3 : var_1)))));
    #pragma endscop
}
