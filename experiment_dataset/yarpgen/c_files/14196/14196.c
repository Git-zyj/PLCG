/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((~-1), ((var_7 ? var_6 : ((var_14 ? -7 : var_9))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_16 -= (((~8) & (max((arr_0 [i_0 - 1]), var_1))));
        var_17 &= (((var_8 / -10) ? (((~(arr_2 [i_0 - 1])))) : (arr_2 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_18 = ((-(arr_4 [i_1] [i_1])));
        arr_6 [i_1] = (max((((((min(-1, 27304))) <= -var_0))), (max((var_10 % 24384), var_5))));
        var_19 = (min(var_19, (((((max((arr_4 [i_1] [i_1]), (arr_3 [i_1])))) ? var_9 : -103)))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_20 ^= max((min(var_9, -101)), var_1);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 20;i_4 += 1)
            {
                {
                    var_21 = (min(24004, -9));
                    arr_13 [i_3] [13] [i_3] [1] = (((((var_4 << (((arr_11 [i_4 + 3] [21] [i_4]) - 57221))))) ? ((min((arr_11 [i_4 - 2] [i_4] [i_4 + 3]), (arr_11 [i_4 - 2] [i_4 + 3] [i_4 + 3])))) : 12));
                    var_22 = (min((!255), (((arr_12 [i_4 - 3] [i_4 - 3] [i_4 - 4]) ? (arr_12 [i_4 + 1] [i_4 + 2] [i_4 + 3]) : var_13))));
                }
            }
        }
    }
    #pragma endscop
}
