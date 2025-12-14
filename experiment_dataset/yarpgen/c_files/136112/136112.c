/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [i_1] [i_1] = max((3457104946869462596 > -3457104946869462596), (((arr_2 [i_0 - 1] [i_0 - 2]) ? (arr_2 [i_0] [i_0 - 1]) : 2439247111)));
                    arr_11 [i_2] [i_1] [i_1] [i_0] = max((((((var_5 ? var_10 : var_2)) > (((max((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1])))))))), (max((arr_8 [i_1]), 4409781972769911694)));
                }
            }
        }
    }
    var_14 = (((max(((var_8 ? var_7 : var_9)), (7 + var_0))) >> (((max(var_0, (var_5 <= var_2))) - 204))));
    var_15 = var_13;
    #pragma endscop
}
