/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((var_8 ? ((min(var_5, var_18))) : var_1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (arr_2 [1]);
        arr_3 [i_0] [i_0] = ((((arr_2 [i_0]) ? var_4 : -123)));
    }
    var_21 = -var_13;
    var_22 = var_6;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            {
                var_23 += (-3771662398637163114 < 262143);
                var_24 = ((!(((((var_3 | (arr_1 [i_2]))) - (((18446744073709289449 ? -3593 : 233))))))));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_25 = ((var_0 ? var_9 : ((1 ? (arr_1 [i_1]) : (arr_8 [i_1] [1] [i_2] [i_3])))));
                    var_26 -= ((arr_8 [i_1] [i_3] [i_1] [i_1]) ? var_11 : ((((arr_7 [0]) ? var_2 : (arr_9 [i_1] [7])))));
                }
                var_27 = (arr_7 [i_1]);
                arr_10 [i_1] [i_1] [i_1] = ((65535 % (-9223372036854775807 - 1)));
            }
        }
    }
    #pragma endscop
}
